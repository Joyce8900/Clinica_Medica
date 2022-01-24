#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"

typedef struct funcionarios;

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

void menuFuncionarios(void) {

  char opc;

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
  do {
    //scanf("%[0-9]", opc->opcao);
    scanf("%c", &opc);
    getchar();
  } while (!ehDigito(opc));
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
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

struct Funcionarios{
  char* nome[20];
  char* idade[2];
  char* celular[11];
  char* email[15];
  char* he[2300];
  char* rg[10];
  char* co[200];
  char* ref[40];
  char* vma[40];
  char* cargos[20];
  char* atribuicoes[50];
  char*endereco[15];
  };

// void preencheCurriculo (struct funcionarios*);
// {
//   funcionarios* func;
//   func = (funcionarios*) malloc(sizeof(funcionarios)); /* data */
// };

struct curriculo
{
  char*nome[20];
  char*cargo[20];
  char*atribuicoes[50];
  char*endereco[15];
  char*email[15];
  char*historico[20];
  char*vma[4];
};
void menuCurriculo (struct curriculo*curriculo);{

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
  // printf("///              Nome completo:                                           ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", curriculo->nome);
    getchar();
  } while (!validarNome( curriculo ->nome));

  // printf("///              Idade:                                                   ///\n");
  // scanf("%[0-9]", idade);

  do {
    printf("///           Idade (apenas números): ");
    scanf("%[^\n]", curriculo->idade);
    getchar();
  } while (!validarData(curriculo->idade));

  // printf("///              Celular:                                                 ///\n");
  // scanf("%[0-9/]", celular);

  do {
    printf("///           Telefone (apenas números): ");
    scanf("%[^\n]", curriculo->celular);
    getchar();
  } while (!validarFone(curriculo->celular));

  printf("///              Endereço:                                                ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", endereco);
  // printf("///              E-mail:                                                  ///\n");
  // scanf("%[A-Za-z@-_. 0-9]", email);
  do {
    printf("///           Email : ");
    scanf("%[^\n]", curriculo->email);
    getchar();
  } while (!validarEmail(curriculo->email));
  // printf("///              Histórico Educacional:                                   ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", he);
  do {
    printf("/// Historico educacional (Apenas letras!)                                              ");
    scanf("%[^\n]", curriculo->he);
    getchar();
  } while (!ehLetra(curriculo->he));

  // printf("///              Registro Geral:                                          ///\n");
  // scanf("%[0-9]", rg);
  do {
    scanf("%[0-9]", curriculo->rg);
    getchar();
  } while (!ehDigito(curriculo->rg));

  // printf("///              Cargos Ocupados:                                         ///\n");
  // scanf("%[[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", co);

  do {
    printf("/// Cargos Ocupados (Apenas letras!)                                              ");
    scanf("%[^\n]", curriculo->cargos);
    getchar();
  } while (!ehLetra(curriculo->cargos));

  // printf("///              Referência:                                              ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", ref);
  do {
    printf("/// Referencia: (Apenas letras!)                                              ");
    scanf("%[^\n]", curriculo->ref);
    getchar();
  } while (!ehLetra(curriculo->ref));
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior:                                  ///\n");

  scanf("%[A-Z a-z]", curriculo->vma);
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
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
void menuCfucionarios (struct funcionarios*funcionarios);{


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
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", Funcionarios-> nome);
  printf("///              Cargo Ocupado:                                           ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", Funcionarios-> cargo);
  printf("///              Atribuições:                                             ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", Funcionarios-> atribuicoes);
  printf("///              Endereço:                                                ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", Funcionarios-> endereco);
  printf("///              E-mail:                                                  ///\n");
  scanf("%[A-Za-z@!-_. 0-9]", Funcionarios-> email);
  printf("///              CPF:                                                     ///\n");
  scanf("%[0-9]", cpf);
  printf("///              Histórico:                                               ///\n");
  scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]",Funcionarios-> historico);
  printf("///                                                                       ///\n");
  printf("///              Volta ao menu anterior;                                  ///\n");
  scanf("%[A-Z a-z]", Funcionarios-> vma);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
};

void menuAtualizarF(void) {
  char nome;
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
};

void menuPesquisarFuncionario(void) {
  char nome;
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
};

void equipe(void) {
  char opc;

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
};
