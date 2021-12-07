#include "funcionarios.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <bibliotecaCM.h>

void menuFuncionarios(void) {

  char opc[2];

  system("clear||cls");
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
  scanf("%[0-9]", opc);
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

// Funcao Funcionarios
char moduloFuncionarios(void) {
  char opcao;
  do {
    opcao = moduloFuncionarios();
    switch (opcao) {
    case '1':
      menuCurriculo();
      break;
    case '2':
      menuCFuncionarios();
      break;
    case '3':
      menuPesquisarFuncionario();
      break;
    }

  } while (opcao != '0');
  return 0;
}

void menuCurriculo(void) {
  char nome[20];
  char idade[2];
  char celular[11];
  char endereco[20];
  char email[15];
  char he[2300];
  char rg[10];
  char co[200];
  char ref[40];
  char vma[4];

  system("clear||cls");
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
  printf("///              Nome completo:                                           ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  printf("///              Idade:                                                   ///\n");
  scanf("%[0-9]", idade);
  printf("///              Celular:                                                 ///\n");
  scanf("%[0-9/]", celular);
  printf("///              Endereço:                                                ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", endereco);
  printf("///              E-mail:                                                  ///\n");
  scanf("%[A-Za-z@-_. 0-9]", email);
  printf("///              Histórico Educacional:                                   ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", he);
  printf("///              Registro Geral:                                          ///\n");
  scanf("%[0-9]", rg);
  printf("///              Cargos Ocupados:                                         ///\n");
  scanf("%[[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", co);
  printf("///              Referência:                                              ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", ref);
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior:                                  ///\n");
  scanf("%[A-Z a-z]", vma);
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void infomacoesCFuncionarios(void) {
  char nome[29];
  char cargo[20];
  char atribuicoes[50];
  char endereco[15];
  char email[25];
  char cpf[12];
  char historico[300];
  char vma[5];

  system("clear||cls");
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
  printf("///           = = = = = = = Cadastro Funcionarios  = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  printf("///              Nome completo:                                           ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  printf("///              Cargo Ocupado:                                           ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", cargo);
  printf("///              Atribuições:                                             ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", atribuicoes);
  printf("///              Endereço:                                                ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", endereco);
  printf("///              E-mail:                                                  ///\n");
  scanf("%[A-Za-z@!-_. 0-9]", email);
  printf("///              CPF:                                                     ///\n");
  scanf("%[0-9]", cpf);
  printf("///              Histórico:                                               ///\n");
  scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", historico);
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior;                                  ///\n");
  scanf("%[A-Z a-z]", vma);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void menuAtualizarF(void) {
  char nome[20];
  system("clear||cls");
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
  printf("///           Nome completo:                                              ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void menuPesquisarFuncionario(void) {
  char nome[25];
  system("clear||cls");
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
  printf("///           Nome completo:                                              ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void equipe(void) {
  char opc[2];

  system("clear||cls");
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
  printf("///            1. Clínico Geral                                             ///\n");
  printf("///               Dr. Gustavo Santos                                        ///\n");
  printf("///               Dra. Vivian Duarte                                        ///\n");
  printf("///               Dra. Débora Queiroz                                       ///\n");
  printf("///            2. Dermatologista                                            ///\n");
  printf("///               Dr. Fábio Guedes                                          ///\n");
  printf("///               Dra. Yana Léda                                            ///\n");
  printf("///            3. Cardiologista                                             ///\n");
  printf("///               Dr. Thiago Midlej                                         ///\n");
  printf("///               Dra. Kamilla Morbeck                                      ///\n");
  printf("///            4. Pediatra                                                  ///\n");
  printf("///               Dra. Isabelly Lopes                                       ///\n");
  printf("///               Dr. Reginaldo Freire                                      ///\n");
  printf("///            5. Endocrinologista                                          ///\n");
  printf("///               Dra. Marília Cardoso                                      ///\n");
  printf("///               Dr. Octávio Neto                                          ///\n");
  printf("///            6. Oftalmologista                                            ///\n");
  printf("///               Dra. Débora Fernandes                                     ///\n");
  printf("///               Dr. Cláudio Albuquerque                                   ///\n");
  printf("///            7. Otorrinolaringologista                                    ///\n");
  printf("///               Dra. Juliana Simões                                       ///\n");
  printf("///               Dr. Marcus Galvão                                         ///\n");
  printf("///            8. Psiquiatria                                               ///\n");
  printf("///               Dr. Marcelo Modesto                                       ///\n");
  printf("///               Dr. Lucas Farnese                                         ///\n");
  printf("///            0. Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///            Escolha a opção desejada:                                    ///\n");
  scanf("%[0-9]", opc);
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}
