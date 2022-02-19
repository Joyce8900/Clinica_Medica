#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "funcionarios.h"
#include "bibliotecaCM.h"
#include "paciente.h"
#include "exames.h"
#include "relatorios.h"


void moduloRelatorio(void) {
  char opcao;
	Paciente *pa;
	Paciente *lista;
    
	lista = NULL;
  do {
    opcao = menuRelatorio();
    switch (opcao) {
    case '1':
      medicoDisponivel(lista);
      exibirFuncionario(lista);
      break;
    case '2':
      pacienteCadastrado(lista);
      exibirPaciente(lista);
      break;
    case '3':
      examesLista(lista);
      exibirExames(lista);
      break;
    }
  } while (opcao != '0');
}

char menuRelatorio(void) {
  char opc;

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///          ===================================================          ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
  printf("///             Sistema de Agendamento para Clínicas Médicas              ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
  printf("///          ===================================================          ///\n");
  printf("///           Developed by  @ @isazvdd e  @Joyce8900 - Out, 2021          ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Exibir todos os médicos disponíveis                      ///\n");
  printf("///           2. Listar todos os pacientes já cadastrados                 ///\n");
  printf("///           3. Listar exames disponíveis                                ///\n");
  printf("///           0. Voltar ao menu anterior                                  ///\n");
  printf("///                                                                       ///\n");
  printf("///           Escolha a opção desejada: ");
  scanf("%c", &opc);
  getchar();
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  delay(1);
  return opc;
}

void medicoDisponivel(Funcionarios*fun) {
 
  printf("\n\n");
  printf("****************************************\n");
	printf("***  Relatorio de Funcionarios       ***\n");
  printf("****************************************\n");
	printf("| Nome |\t| Cargo |\t| E-mail|\n");
  printf("\n");
	while (fun != NULL)
	{
    	printf("%s\t\t\t",fun->nome);
    	printf("%s\t\t\t",fun->cargos);
    	printf("%s\n",fun->email);
    	fun = fun->prox;
	}
	printf("\nFim da Lista! \n\n");
}



void pacienteCadastro(Paciente *pac)
{
  printf("\n\n");
  printf("****************************************\n");
	printf("*** Relatorio dos Alunos Cadastrados ***\n");
  printf("****************************************\n");
	printf("| Nome |\t| Celular |\t| E-mail|\n");
  printf("\n");
	while (pac != NULL)
	{
    	printf("%s\t\t\t",pac->nome);
    	printf("%s\t\t\t",pac->celular);
    	printf("%s\n",pac->email);
    	pac = pac->prox;
	}
	printf("\nFim da Lista! \n\n");
}


void pacienteCadastrado(void) {
  FILE *fp;
  Paciente *pac;
  pac = (Paciente*)malloc(sizeof(Paciente));

  fp = fopen("paciente.dat", "rb");
  if (fp == NULL) {
    printf("\n Erro na abertura do arquivo! \n");
    exit(1);
  }

  printf("\n Relatório de pacientes cadastrados \n");
  while (fread(pac, sizeof(Paciente), 1, fp)) {
    exibirPaciente(pac);
  }

  fclose(fp);
  free(pac);
}

void examesLista(void) {
  FILE *fp;
  Exames *exa;
  exa = (Exames*)malloc(sizeof(Exames));

  fp = fopen("exames.dat", "rb");
  if (fp == NULL) {
    printf("\n Erro na abertura do arquivo! \n");
    exit(1);
  }

  printf("\n Relatório de exames solicitados \n");
  while (fread(exa, sizeof(Exames), 1, fp)) {
    exibirExames(exa);
  }

  fclose(fp);
  free(exa);
}

void apagarListaP(Paciente **lista)
{
    Paciente *pac;
    
    while (*lista != NULL)
    {
   	 pac = *lista;
   	 *lista = (*lista)->prox;
   	 free(pac);
    }
    printf("Lista excluida com sucesso! \n");    
}

void apagarListaE(Exames **lista)
{
    Exames *exa;
    
    while (*lista != NULL)
    {
   	 exa = *lista;
   	 *lista = (*lista)->prox;
   	 free(exa);
    }
    printf("Lista excluida com sucesso! \n");    
}

void relatorioPaciente(Paciente **lista)
{
    FILE *fp;
    Paciente *pa;
    
    apagarListaP(&(*lista));
    *lista = NULL;
    fp = fopen("paciente.dat","rb");
    if (fp == NULL)
    {
   	 printf("Erro na abertura do arquivo... \n");
   	 exit(1);
    }
    else
    {
   	 pa = (Paciente *) malloc(sizeof(Paciente));
   	 while (fread(pa, sizeof(Paciente), 1, fp))
   	 {
        if ((*lista == NULL) || (strcmp(pa->nome, (*lista)->nome) < 0)) {
          pa->prox = *lista;
          *lista = pa;
        } else  {
          Paciente* ant = *lista;
          Paciente* atu = (*lista)->prox;
          while ((atu != NULL) && (strcmp(atu->nome, pa->nome) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = pa;
          pa->prox = atu;
        }
        pa = (Paciente *) malloc(sizeof(Paciente));
   	 }
   	 free(pa);
   	 printf("Arquivo recuperado com sucesso! \n");
   	 fclose(fp);
    }    
}


void relatorioExames(Exames **lista)
{
    FILE *fp;
    Exames *ex;
    
    apagarListaE(&(*lista));
    *lista = NULL;
    fp = fopen("exames.dat","rb");
    if (fp == NULL)
    {
   	 printf("Erro na abertura do arquivo... \n");
   	 exit(1);
    }
    else
    {
   	 ex = (Exames *) malloc(sizeof(Exames));
   	 while (fread(ex, sizeof(Exames), 1, fp))
   	 {
        if ((*lista == NULL) || (strcmp(ex->nome, (*lista)->nome) < 0)) {
          ex->prox = *lista;
          *lista = ex;
        } else  {
          Exames* ant = *lista;
          Exames* atu = (*lista)->prox;
          while ((atu != NULL) && (strcmp(atu->nome, ex->nome) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = ex;
          ex->prox = atu;
        }
        pa = (Aluno *) malloc(sizeof(Aluno));
   	 }
   	 free(pa);
   	 printf("Arquivo recuperado com sucesso! \n");
   	 fclose(fp);
    }    
}
