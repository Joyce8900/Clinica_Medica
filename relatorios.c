#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "paciente.h"
#include "relatorios.h"

void moduloRelatorio(void) {
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
  //
}

void pacienteCadastrado(void) {
  //
}

void examesLista(void) {
  //
}