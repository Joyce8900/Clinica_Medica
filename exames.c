#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"

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
  printf("///           3. Resultados                                               ///\n");
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
  getchar();
  return opc;
}

// Funções exames
char moduloExames(void) {
  char opc;
  do {
    opc = menuExames();
    switch (opc) {
    case '1':
      exameDisponivel();
      break;
    case '2':
      exameSolicitar();
      break;
    case '3':
      examesResultados();
      break;
    };

  } while (opc != '0');
  return 0;
}

void exameDisponivel(void) {
  // char opc;

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
  printf("///                                                                      //////");
  printf("///           -> Exames de sangue                                         ///\n");
  printf("///                                                                       ///\n");
  printf("/// HEMOGRAMA, GLICEMIA EM JEJUM, COLESTEROL, TRIGLICERÍDEOS, T4 livre    ///\n");
  printf("///                                                                       ///\n");
  printf("///           ->  Exames de urina e fezes                                 ///\n");
  printf("///                                                                       ///\n");
  printf("///              EAS, UROCULTURA,   COPROCULTURA                          ///\n");
  printf("///                                                                       ///\n");
  printf("///           -> Exames neurológicos                                      ///\n");
  printf("///                                                                       ///\n");
  printf("///   Eletroencefalograma, Angiografia por ressonância magnética          ///\n");
  printf("///                                                                       ///\n");
  printf("///           -> Exames de imagem                                         ///\n");
  printf("///                                                                       ///\n");
  printf("///       Ultrassonografia, raio X, ressonância magnética                 ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  getchar();
}

// Opções exames disponiveis.

// char examesDisponiveis(void) {
//   char opc;
//   do {
//     opc = examesSolicitar();
//     switch (opc) {
//     case '1':
//       examesSolicitar();
//       break;
//     }

//   } while (opc != '0');
//   return 0;

Exames *examesSolicitar(void) {
  Exames *sol;
  sol = (Exames *)malloc(sizeof(Exames));

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
    scanf("%[^\n]", sol->nome);
    getchar();
  } while (!validarNome(sol->nome));

  do {
    printf("///           Qual exame deseja solicitar: (apenas letras): ");
    scanf("%[^\n]", sol->escolher);
    getchar();
  } while (!validarExame(sol->escolher));
  getchar();
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return sol;
}

// Exames *examesAcompanhar(void) {
//   Exames *exa;
//   exa = (Exames *)malloc(sizeof(Exames));

//   limpaTela();
//   printf("\n");
//   printf("/////////////////////////////////////////////////////////////////////////////\n");
//   printf("///                                                                       ///\n");
//   printf("///        ========================================================       ///\n");
//   printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
//   printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
//   printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
//   printf("///        ========================================================       ///\n");
//   printf("///                                                                       ///\n");
//   printf("/////////////////////////////////////////////////////////////////////////////\n");
//   printf("///                                                                       ///\n");
//   printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
//   printf("///          = = = = = = = Acompanhar andamento = = = = = = = =           ///\n");
//   printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
//   printf("///                                                                       ///\n");
//   printf("///                                                                       ///\n");

//   do {
//     printf("///           Nome completo: (apenas letras): ");
//     scanf("%[^\n]", exa->nome);
//     getchar();
//   } while (!validarNome(exa->nome));

//   printf("///                                                                       ///\n");
//   printf("///                                                                       ///\n");
//   printf("/////////////////////////////////////////////////////////////////////////////\n");
//   printf("\n");
//   printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
//   printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
//   getchar();
//   return exa;
// }

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

void gravarExame(Exames *exa) {
  FILE *fp;

  fp = fopen("exames.dat", "ab");
  if (fp == NULL) {
    telaErrorArquivoExames();
  }
  fwrite(exa, sizeof(Exames), 1, fp);
  fclose(fp);
}

void exameSolicitar(void) {
  Exames *exa;

  exa = examesSolicitar();
  gravarExame(exa);
  free(exa);
}

void telaErrorArquivoExames(void) {

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
  printf("///           = = = = com informações sobre os exames = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
  printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
  exit(1);
}