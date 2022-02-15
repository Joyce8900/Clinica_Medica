
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
// #include "exames.h"
#include "funcionarios.h"
// #include "paciente.h"

// typedef struct funcionarios Funcionarios;
// typedef struct curriculo Curriculo;

// Funcao Funcionarios
void moduloFuncionarios(void) {
  char opcao;
  do {
    opcao = menuFuncionarios();
    switch (opcao) {
    case '1':
      cadastrarCurriculo();
      break;
    case '2':
      menuCfuncionario();
      break;
    case '3':
      menuPesquisarFuncionario();
      break;
    }

  } while (opcao != '0');
}

void menuCfuncionario(void) {
  Funcionarios *func;

  func = telaCadastrarFuncionarios();
  gravarFuncionarios(func);
  free(func);
}

void menuPesquisarFuncionario(void) {
  Funcionarios *func;
  char *nome;

  nome = telaPesquisarFuncionarios();
  func = pesquisarFuncionario(nome);
  exibirFuncionario(func); // criar tela para exibir funcionario ao buscar
  free(func);
  free(nome);
}

void exibirFuncionario(Funcionarios *func) {
  if (func == NULL) {
    printf("\n Funcionário não encontrado \n");
  } else {
    printf(" Funcionário encontrado \n");
    printf(" Nome do funcionário: %s\n", func->nome);
    printf(" E-mail: %s\n", func->email);
  }
  printf("\n\n\n>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

char menuFuncionarios(void) {
  char opc;

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///           = = = = = = = = = Painel Funcionarios = = = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("///            1. Currículo                                               ///\n");
  printf("///            2. Cadastro de funcionário                                 ///\n");
  printf("///            3. Pesquisar funcionario                                   ///\n");
  printf("///                                                                       ///\n");
  printf("///            0. Voltar ao menu anterior                                 ///\n");
  printf("///                                                                       ///\n");
  do {
    scanf("%c", &opc);
    getchar();
  } while (!ehDigito(opc));
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opc;
}

Funcionarios *telaCadastrarFuncionarios(void) {
  Funcionarios *func;
  func = (Funcionarios *)malloc(sizeof(Funcionarios));

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///           = = = = = = = = Currículo  = = = = = = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", func->nome);
    getchar();
    printf("///           Idade (apenas números): ");
    scanf("%[^\n]", func->idade);
    getchar();
    printf("///           Telefone (apenas números): ");
    scanf("%[^\n]", func->celular);
    getchar();
    printf("///              Endereço:                                                ///\n");
    scanf("%[^\n]", func->endereco);
    printf("///           Email : ");
    scanf("%[^\n]", func->email);
    getchar();
    printf("/// Historico educacional (Apenas letras!)                                              ");
    scanf("%[^\n]", func->he);
    getchar();
    scanf("%[^\n]", func->rg);
    getchar();
    printf("/// Cargos Ocupados (Apenas letras!)                                              ");
    scanf("%[^\n]", func->cargos);
    getchar();
    printf("/// Referencia: (Apenas letras!)                                              ");
    scanf("%[^\n]", func->ref);
    getchar();
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior:                                  ///\n");

  scanf("%[^\n]", func->vma);
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return func;
}

Curriculo *cadastrarCurriculo(void) {
  Curriculo *cv;
  cv = (Curriculo *)malloc(sizeof(Curriculo));
  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///           = = = = = = = Cadastro Currículos  = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  printf("///              Nome completo:                                           ///\n");
  scanf("%[^\n]", cv->nome);
  printf("///              Cargo Ocupado:                                           ///\n");
  scanf("%[^\n]", cv->cargo);
  printf("///              Atribuições:                                             ///\n");
  scanf("%[^\n]", cv->atribuicoes);
  printf("///              Endereço:                                                ///\n");
  scanf("%[^\n]", cv->endereco);
  printf("///              E-mail:                                                  ///\n");
  scanf("%[^\n]", cv->email);
  printf("///              CPF:                                                     ///\n");
  scanf("%[^\n]", cv->cpf);
  printf("///              Histórico:                                               ///\n");
  scanf("%[^\n]", cv->historico);
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior;                                  ///\n");
  scanf("%[^\n]", cv->vma);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  // delay(1);
  return cv;
}

void telaErroArquivoFuncionario(void) {

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///          ===================================================          ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
  printf("///          Sistema de Agendamento para Clínicas Médicas                 ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
  printf("///          ===================================================          ///\n");
  printf("///           Developed by  @ @isazvdd e  @Joyce8900 - Out, 2021          ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
  printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
  printf("///           = = = com informações sobre os professores  = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
  printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
  exit(1);
}

char* menuAtualizarF(void) {
  char *nome;
  nome = (char *)malloc(29 * sizeof(char));

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///           = = = = Atualizar cadastro do funcionario  = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", nome);
    getchar();
  } while (!validarNome(nome)) ;
  printf("///                                           ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return nome;

}

char *telaPesquisarFuncionarios(void) {
  char *nome;
  nome = (char *)malloc(29 * sizeof(char));

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///           = = = = = = = Pesquisar Funcionario  = = = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", nome);
    getchar();
  } while (!validarNome (nome));
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  delay(1);
  return nome;
}

void equipe(void) {

  limpaTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         ========================================================        ///\n");
  printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
  printf("///         = = = Sistema de Agendamento para Clínicas Médicas = = =        ///\n");
  printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
  printf("///         ========================================================        ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         = = = = = = = =     Equipe médica      = = = = = = = = =        ///\n");
  printf("///                                                                         ///\n");
  printf("///            -> Clínico Geral                                             ///\n");
  printf("///               Dr. Gustavo Santos                                        ///\n");
  printf("///               Dra. Vivian Duarte                                        ///\n");
  printf("///               Dra. Débora Queiroz                                       ///\n");
  printf("///            -> Dermatologista                                            ///\n");
  printf("///               Dr. Fábio Guedes                                          ///\n");
  printf("///               Dra. Yana Léda                                            ///\n");
  printf("///            -> Cardiologista                                             ///\n");
  printf("///               Dr. Thiago Midlej                                         ///\n");
  printf("///               Dra. Kamilla Morbeck                                      ///\n");
  printf("///            -> Pediatra                                                  ///\n");
  printf("///               Dra. Isabelly Lopes                                       ///\n");
  printf("///               Dr. Reginaldo Freire                                      ///\n");
  printf("///            -> Endocrinologista                                          ///\n");
  printf("///               Dra. Marília Cardoso                                      ///\n");
  printf("///               Dr. Octávio Neto                                          ///\n");
  printf("///            -> Oftalmologista                                            ///\n");
  printf("///               Dra. Débora Fernandes                                     ///\n");
  printf("///               Dr. Cláudio Albuquerque                                   ///\n");
  printf("///            -> Otorrinolaringologista                                    ///\n");
  printf("///               Dra. Juliana Simões                                       ///\n");
  printf("///               Dr. Marcus Galvão                                         ///\n");
  printf("///            -> Psiquiatria                                               ///\n");
  printf("///               Dr. Marcelo Modesto                                       ///\n");
  printf("///               Dr. Lucas Farnese                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();

}

void gravarFuncionarios(Funcionarios *func) {
  FILE *fp;

  fp = fopen("funcionarios.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoFuncionario();
  }
  fwrite(func, sizeof(Funcionarios), 1, fp);
  fclose(fp);
}


 
void gravarCurriculo(Curriculo *cv) {
  FILE *fp;

  fp = fopen("curriculos.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoFuncionario();
  }
  fwrite(cv, sizeof(Funcionarios), 1, fp);
  fclose(fp);
}


Funcionarios* pesquisarFuncionario(char* nome) {
	FILE* fp;
	Funcionarios* func;

	func = (Funcionarios*) malloc(sizeof(Funcionarios));
	fp = fopen("funcionarios.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoFuncionario();
	}
	while(fread(func, sizeof(Funcionarios), 1, fp)) {
		if ((strcmp(func->nome, nome) == 0)) {
			fclose(fp);
			return func;
		}
	}
	fclose(fp);
	return NULL;
}


// void alterarFuncionario(void) {
//   Funcionarios *func;
//   char *nome;

//   nome = menuAtualizarF();
//   func = pesquisarFuncionario(nome);
//   if (func == NULL) {
//     printf("\n\n Funcinario não localizado! \n\n");
//   } else {
//     pac = ca();
//     strcpy(func->nome, nome);
//     regravarPaciente(func);
//     excluirPaciente(func);
//     gravarPaciente(func);
//     free(func);
//   }
//   free(nome);
// }
