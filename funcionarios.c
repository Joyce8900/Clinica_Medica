
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
char moduloFuncionarios(void) {
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

char menuCfuncionario(void) {
  Funcionarios *func;

  func = telaCadastrarFuncionarios();
  gravarFuncionarios(func);
  free(func);
}

char menuPesquisarFuncionario(void) {
  Funcionarios *func;
  char *nome;

  nome = menuCfuncionario();
  func = buscarFuncionarios(nome);
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
    printf(" Data de nascimento: %s\n", func->data);
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
    // scanf("%[0-9]", opc->opcao);
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

  // gravarFuncionarios(func);
  // free(func);

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
  // printf("///              Nome completo:                                           ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", func->nome);
    getchar();
  } while (!validarNome(func->nome));

  // printf("///              Idade:                                                   ///\n");
  // scanf("%[0-9]", idade);

  do {
    printf("///           Idade (apenas números): ");
    scanf("%[^\n]", func->idade);
    getchar();
  } while (!validarData(func->idade));

  // printf("///              Celular:                                                 ///\n");
  // scanf("%[0-9/]", celular);

  do {
    printf("///           Telefone (apenas números): ");
    scanf("%[^\n]", func->celular);
    getchar();
  } while (!validarFone(func->celular));

  printf("///              Endereço:                                                ///\n");
  scanf("%[^\n]", func->endereco);
  // printf("///              E-mail:                                                  ///\n");
  // scanf("%[A-Za-z@-_. 0-9]", email);
  do {
    printf("///           Email : ");
    scanf("%[^\n]", func->email);
    getchar();
  } while (!validarEmail(func->email));
  // printf("///              Histórico Educacional:                                   ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", he);
  do {
    printf("/// Historico educacional (Apenas letras!)                                              ");
    scanf("%[^\n]", func->he);
    getchar();
  } while (!ehLetra(func->he));

  // printf("///              Registro Geral:                                          ///\n");
  // scanf("%[0-9]", rg);
  do {
    scanf("%[^\n]", func->rg);
    getchar();
  } while (!ehDigito(func->rg));

  // printf("///              Cargos Ocupados:                                         ///\n");
  // scanf("%[[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", co);

  do {
    printf("/// Cargos Ocupados (Apenas letras!)                                              ");
    scanf("%[^\n]", func->cargos);
    getchar();
  } while (!ehLetra(func->cargos));

  // printf("///              Referência:                                              ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", ref);
  do {
    printf("/// Referencia: (Apenas letras!)                                              ");
    scanf("%[^\n]", func->ref);
    getchar();
  } while (!ehLetra(func->ref));
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

  // gravarCurriculo(cv);
  // free(cv);

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

char menuAtualizarF(void) {
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
    scanf("%[^\n]", func->nome);
    getchar();
  } while (!validarNome(func->nome));
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
};

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
    scanf("%[^\n]", func->nome);
    getchar();
  } while (!validarNome(func->nome));
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  // delay(1);
  return 0;
}

void equipe(void) {
  // char opc;

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
  // printf("///            0. Sair                                                      ///\n");
  // printf("///                                                                         ///\n");
  // printf("///            Escolha a opção desejada:                                    ///\n");
  // scanf("%[^\n]", opc);
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
  return 0;
}

char gravarFuncionarios(Funcionarios *func) {
  FILE *fp;

  fp = fopen("funcionarios.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoFuncionario();
  }
  fwrite(func, sizeof(Funcionarios), 1, fp);
  fclose(fp);
}

char exibirFuncionarios(Funcionarios *func) {

  if (func == NULL) {
    printf("\n= = = Funcionario Inexistente = = =\n");
  } else {
    printf("\n= = = Funcionario Cadastrado = = =\n");
    printf("CPF: %s\n", func->cpf);
    printf("Nome: %s\n", func->nome);
    printf("Endereço eletrônico: %s\n", func->email);
    printf("Atribuicoes: %s\n", func->atribuicoes);
    printf("Cargo: %s\n", func->cargos);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

char gravarCurriculo(Curriculo *cv) {
  FILE *fp;

  fp = fopen("curriculos.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoFuncionario();
  }
  fwrite(cv, sizeof(Funcionarios), 1, fp);
  fclose(fp);
}
