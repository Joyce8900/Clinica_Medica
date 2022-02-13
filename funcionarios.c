#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
// #include "exames.h"
#include "funcionarios.h"
// #include "paciente.h"

// typedef struct funcionarios *Func;
// typedef struct menucurriculo;

// Funcao Funcionarios
void moduloFuncionarios(void) {
  char opcao;
  do {
    opcao = menuFuncionarios();
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
  return opcao;
}

void menuCfuncionario(void) {
  Func *Func;

  func = telaCadastrarFuncionarios();
  gravarFuncionarios(func);
  free(func);
}

void menuPesquisarFuncionario(void) {
  Funcionarios *func;
  char *nome;

  nome = menuCfuncionario();
  func = buscarFuncionarios(nome);
  exibirFuncionario(func);
  free(func);
  free(func);
}

void menuFuncionarios(void) {

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
};

// void menuCurriculo(void) {
//   char nome;//[20];
//   char idade;//[2];
//   char celular;//[11];
//   char endereco;//[20];
//   char email;//[15];
//   char he;//[2300];
//   char rg;//[10];
//   char co;//[200];
//   char ref;//[40];
//   // char vma [4];
// //Criar uma variavel struct
// //Funcinarios* func;
// //alocar espaço com malloc
// //fun (Funcionarios*) malloc (sizeof(fun));
// //fun -> nome;

// void preencheCurriculo (struct funcionarios*);
// {
//   funcionarios* func;
//   func = (funcionarios*) malloc(sizeof(funcionarios)); /* data */
// };

// struct curriculo
// {
//   char*nome[20];
//   char*cargo[20];
//   char*atribuicoes[50];
//   char*endereco[15];
//   char*email[15];
//   char*historico[20];
//   char*vma[4];

void menuCurriculo(struct curriculo *curriculo) {

  struct curriculo {
    char *nome[20];
    char *cargo[20];
    char *atribuicoes[50];
    char *endereco[15];
    char *email[15];
    char *historico[20];
    char *vma[4];
  };
}

void cadastrarCurriculo(void) {
  Funcionarios *func;

  func = menuCurriculo();
  gravarCurriculo(func);
  free(func);

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
    scanf("%[^\n]", Curriculo->nome);
    getchar();
  } while (!validarNome(curriculo->nome));

  // printf("///              Idade:                                                   ///\n");
  // scanf("%[0-9]", idade);

  do {
    printf("///           Idade (apenas números): ");
    scanf("%[^\n]", Curriculo->idade);
    getchar();
  } while (!validarData(Curriculo->idade));

  // printf("///              Celular:                                                 ///\n");
  // scanf("%[0-9/]", celular);

  do {
    printf("///           Telefone (apenas números): ");
    scanf("%[^\n]", Curriculo->celular);
    getchar();
  } while (!validarFone(curriculo->celular));

  printf("///              Endereço:                                                ///\n");
  scanf("%[^\n]", Curriculo->endereco);
  // printf("///              E-mail:                                                  ///\n");
  // scanf("%[A-Za-z@-_. 0-9]", email);
  do {
    printf("///           Email : ");
    scanf("%[^\n]", Curriculo->email);
    getchar();
  } while (!validarEmail(Curriculo->email));
  // printf("///              Histórico Educacional:                                   ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", he);
  do {
    printf("/// Historico educacional (Apenas letras!)                                              ");
    scanf("%[^\n]", Curriculo->he);
    getchar();
  } while (!ehLetra(Curriculo->he));

  // printf("///              Registro Geral:                                          ///\n");
  // scanf("%[0-9]", rg);
  do {
    scanf("%[^\n]", Curriculo->rg);
    getchar();
  } while (!ehDigito(Curriculo->rg));

  // printf("///              Cargos Ocupados:                                         ///\n");
  // scanf("%[[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", co);

  do {
    printf("/// Cargos Ocupados (Apenas letras!)                                              ");
    scanf("%[^\n]", Curriculo->cargos);
    getchar();
  } while (!ehLetra(Curriculo->cargos));

  // printf("///              Referência:                                              ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", ref);
  do {
    printf("/// Referencia: (Apenas letras!)                                              ");
    scanf("%[^\n]", Curriculo->ref);
    getchar();
  } while (!ehLetra(Curriculo->ref));
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior:                                  ///\n");

  scanf("%[^\n]", Curriculo->vma);
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  delay(1);
  return func;
};

// void infomacoesCFuncionarios(void) {
//   char nome;//[35];
//   char cargo;//[20];
//   char atribuicoes;//[50];
//   char endereco;//[15];
//   char email;//[25];
//   char cpf;//[12];
//   char historico;//[300];
//   char vma;//[5];
// struct curriculo
// {
//   char*nome;
//   char*cargo;
//   char*atribuicoes;
//   char*endereco;
//   char*email;
//   char*historico;
//   char*vma;
// };
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
  printf("///           = = = = = = = Cadastro Funcionarios  = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  printf("///              Nome completo:                                           ///\n");
  scanf("%[^\n]", func->nome);
  printf("///              Cargo Ocupado:                                           ///\n");
  scanf("%[^\n]", func->cargo);
  printf("///              Atribuições:                                             ///\n");
  scanf("%[^\n]", func->atribuicoes);
  printf("///              Endereço:                                                ///\n");
  scanf("%[^\n]", func->endereco);
  printf("///              E-mail:                                                  ///\n");
  scanf("%[^\n]", func->email);
  printf("///              CPF:                                                     ///\n");
  scanf("%[^\n]", func->cpf);
  printf("///              Histórico:                                               ///\n");
  scanf("%[^\n]", func->historico);
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior;                                  ///\n");
  scanf("%[^\n]", func->vma);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  delay(1);
  return func;
};

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

void menuAtualizarF(void) {
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
  printf("///           Nome completo:                                              ///\n");
  scanf("%[^\n]", &nome);
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
  printf("///           Nome completo:                                              ///\n");
  scanf("%[^\n]", nome);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  delay(1);
  return nome;
};

void equipe(void) {
  char opc;

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
  printf("///            0. Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///            Escolha a opção desejada:                                    ///\n");
  scanf("%[^\n]", opc);
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
  return opc;
}

void gravarFuncionarios(Funcionarios *func) {
  FILE *fp;

  fp = fopen("funcionarios.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoFuncionario();
  }
  fwrite(prf, sizeof(Funcionarios), 1, fp);
  fclose(fp);
}

void exibirFuncionarios(Funcionarios *func) {

  if (func == NULL) {
    printf("\n= = = Funcionario Inexistente = = =\n");
  } else {
    printf("\n= = = Funcionario Cadastrado = = =\n");
    printf("CPF: %s\n", func->cpf);
    printf("Nome: %s\n", func->nome);
    printf("Endereço eletrônico: %s\n", func->email);
    printf("Atribuicoes: %s\n", func->atribuicoes);
    printf("Cargo: %s\n", func->cargo);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

void gravarCurriculo(Funcionarios *func) {
  FILE *fp;

  fp = fopen("curriculos.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoFuncionario();
  }
  fwrite(aln, sizeof(Funcionarios), 1, fp);
  fclose(fp);
}
