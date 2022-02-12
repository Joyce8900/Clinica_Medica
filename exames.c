#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.c"
#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"

// typedef struct exames *Exames;

char menuExames(void) {
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
  printf("///           = = = = = = = = =     Exames    = = = = = = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Exames disponiveis                                       ///\n");
  printf("///           2. Solicitar exames médicos                                 ///\n");
  printf("///           3. Acompanhar andamento e prazos                            ///\n");
  printf("///           4. Resultados                                               ///\n");
  printf("///                                                                       ///\n");
  printf("///           0. Voltar ao menu anterior                                  ///\n");
  printf("///                                                                       ///\n");
  printf("///           Escolha a opção desejada: ");
  do {
    scanf("%c", &opc);
    getchar();
  } while (!ehDigito(opc));
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opc;
}

// Funções exames
void moduloExames(void) {
  char opcao;
  do {
    opcao = moduloExames();
    switch (opcao) {
    case '1':
      examesDisponiveis();
      break;
    case '2':
      examesSolicitar();
      break;
    case '3':
      examesAcompanhar();
      break;
    case '4':
      examesResultados();
      break;
    }

  } while (opcao != '0');
}

char examesDisponiveis(void) {
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
  printf("///        = = = = = = = = = Exames Disponiveis      = = = = = = =        ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Exames de sangue                                         ///\n");
  printf("///           2. Exames patologicos                                       ///\n");
  printf("///           3. exames neurológicos                                      ///\n");
  printf("///           4. Exames de imagem                                         ///\n");
  printf("///           0. Voltar ao menu anterior                                  ///\n");
  printf("///                                                                       ///\n");
  printf("///           Escolha a opção desejada: ");

  do {
    scanf("%c", &opc);
    getchar();
  } while (!ehDigito(opc));

  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return opc;
}

Exames *examesSolicitar(void) {
  Exames *exa;
  exa = (Exames *)malloc(sizeof(Exames));

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
  printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
  printf("///          = = = = = = = = Solicitar exames = = = = = = = = =           ///\n");
  printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");

  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", exa->nome);
    getchar();
  } while (!validarNome(exa->nome));

  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return exa;
}

Exames *examesAcompanhar(void) {
  Exames *exa;
  exa = (Exames *)malloc(sizeof(Exames));

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
  printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
  printf("///          = = = = = = = Acompanhar andamento = = = = = = = =           ///\n");
  printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");

  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", exa->nome);
    getchar();
  } while (!validarNome(exa->nome));

  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return exa;
}

Exames *examesResultados(void) {
  Exames *exa;
  exa = (Exames *)malloc(sizeof(Exames));

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
  printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
  printf("///          = = = = = = = = = = Resultados = = = = = = = = = =           ///\n");
  printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");

  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", exa->nome);
    getchar();
  } while (!validarNome(exa->nome));

  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return exa;
}
