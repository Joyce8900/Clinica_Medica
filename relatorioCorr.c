#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"
#include "relatorioCorr.h"

void moduloRelatorios(void) {
  char opcao;

  do {
    opcao = menuRelatorio();
    switch (opcao) {
    case '1':
      medicoDisponivel();
      break;
    case '2':
      pacienteCadastrado();
      break;
    case '3':
      examesLista();
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

void medicoDisponivel(void) {
  FILE *fp;
  Funcionarios *func;
  func = (Funcionarios *)malloc(sizeof(Funcionarios));

  fp = fopen("funcionarios.dat", "rb");
  if (fp == NULL) {
    printf("\n Erro na abertura do arquivo! \n");
    exit(1);
  }

  printf("\n Relatório de pacientes cadastrados \n");
  while (fread(func, sizeof(Funcionarios), 1, fp)) {
    exibirFuncionario(func);
  }

  fclose(fp);
  free(func);
}

void pacienteCadastrado(void) {
  FILE *fp;
  Paciente *pac;
  pac = (Paciente *)malloc(sizeof(Paciente));

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
  exa = (Exames *)malloc(sizeof(Exames));

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