#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"

typedef struct Paciente *paciente;
typedef struct Consulta *consulta;

char moduloCadastro(void) {
  char opcao;
  do {
    opcao = moduloCadastro();
    switch (opcao) {
    case '1':
      menuPaciente();
      break;
    case '2':
      menuFuncionarios();
      break;
    }
  } while (opcao != '0');
  return 0;
}

char menuCadastro(void) {
  char opc;

  system("clear||cls");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         ========================================================        ///\n");
  printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
  printf("///         = = = Sistema de Agendamento para Clínicas Médicas = = =        ///\n");
  printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
  printf("///         ========================================================        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             1. Cadastro de novo paciente                                ///\n");
  printf("///             2. Cadastro de novo funcionario                             ///\n");
  printf("///                                                                         ///\n");
  printf("///             0. Sair                                                     ///\n");
  printf("///             Escolha a opção desejada: ");
  do {
    scanf("%c", &opc);
    getchar();
  } while (!ehDigito(opc));
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
  return 0;
};

<<<<<<< HEAD
char moduloCadastro(void) {
  char opcao;
  do {
    opcao = moduloCadastro();
    switch (opcao) {
    case '1':
      menuPaciente();
      break;
    case '2':
      menuFuncionarios();
      break;
    }
    while (opcao != '0')
      ;
    return 0;
  } while (opcao != '0');
  return 0;
};

=======
>>>>>>> a83e91ee1cf1a848cf3b14289961c35c36c04afa
void menuPaciente(void) {
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
  printf("///           = = = = = = = = = Menu Paciente = = = = = = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Cadastrar um novo paciente                               ///\n");
  printf("///           2. Atualizar o cadastro do paciente                         ///\n");
  printf("///           3. Pesquisar cadastro                                       ///\n");
  printf("///           4. Cadastrar uma nova consulta                              ///\n");
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
};

// Funcao Paciente
char moduloPaciente(void) {
  char opcao;
  do {
    opcao = moduloPaciente();
    switch (opcao) {
    case '1':
      menuCadastroPaciente();
      break;
    case '2':
      menuAlterarPaciente();
      break;
    case '3':
      menuPesquisarPaciente();
      break;
    case '4':
      cadastrarConsulta();
      break;
    };

  } while (opcao != '0');
  return 0;
};

<<<<<<< HEAD
// void menuCadastroPaciente(void) {
//   char nome[60];
//   char data[11];
//   char celular[12];
//   char cpf[12];
//   char email[60];
//   char doenca[999];
//   char trat[999];
//   char exame[999];
  // char validNome;
  // char validData;
  // char validFone;
  // char validCPF;
  // char validEmail;
  // char validDoenca;
  // char validTrat;
  // char validExame;
=======
void menuCadastroPaciente(struct Paciente *pac) {

  pac = (Paciente *)malloc(sizeof(Paciente));
>>>>>>> a83e91ee1cf1a848cf3b14289961c35c36c04afa

struct paciente {
  char*nome;
  char*data;
  char*telefone;
  char*cpf;
  char*email;
  char*doenca;
  char*trat;
  char*exames;

};

void menuCadastroPaciente (struct paciente*Cpaciente);{



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
  printf("///           = = = = = = = = Cadastrar Paciente = = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  do {
<<<<<<< HEAD
    printf("///           Nome (apenas letras): ");
    scanf("%[^\n]", Cpaciente->nome);
    getchar();
  } while (!validarNome(Cpaciente->nome));

  do {
    printf("///           Data (apenas números): ");
    scanf("%[^\n]", Cpaciente->data);
=======
    printf("///           Nome completo(apenas letras): ");
    scanf("%[^\n]", pac->nome);
    getchar();
  } while (!validarNome(pac->nome));

  do {
    printf("///           Data (apenas números): ");
    scanf("%[^\n]", pac->data);
>>>>>>> a83e91ee1cf1a848cf3b14289961c35c36c04afa
    getchar();
  } while (!validarData(Cpaciente->data));

  do {
    printf("///           Telefone (apenas números): ");
<<<<<<< HEAD
    scanf("%[^\n]", Cpaciente->telefone);
    getchar();
  } while (!validarFone(Cpaciente->telefone));

  do {
    printf("///           CPF (apenas números): ");
    scanf("%[^\n]", Cpaciente->cpf);
    getchar();
  } while (!validarCPF(Cpaciente->cpf));

  do {
    printf("///           Email : ");
    scanf("%[^\n]", Cpaciente->email);
    getchar();
  } while (!validarEmail(Cpaciente->email);

  do {
    printf("///           Possui alguma doença? (apenas letras): ");
    scanf("%[^\n]", paciente->doenca);
    getchar();
  } while (!validarDoenca(Cpaciente->doenca));

  do {
    printf("///           Tratamento em andamento: (apenas letras): ");
    scanf("%[^\n]", Cpaciente->trat);
    getchar();
  } while (!validarTrat(Cpaciente->trat));

  do {
    printf("///           Exames Realizados: (apenas letras): ");
    scanf("%[^\n]", Cpaciente->exame);
    getchar();
  } while (!validarExame(Cpaciente->exame));
=======
    scanf("%[^\n]", pac->data);
    getchar();
  } while (!validarFone(pac->data));

  do {
    printf("///           CPF (apenas números): ");
    scanf("%[^\n]", pac->cpf);
    getchar();
  } while (!validarCPF(pac->cpf));

  do {
    printf("///           Email : ");
    scanf("%[^\n]", pac->email);
    getchar();
  } while (!validarEmail(pac->email));

  do {
    printf("///           Possui alguma doença? (apenas letras): ");
    scanf("%[^\n]", pac->doenca);
    getchar();
  } while (!validarDoenca(pac->doenca));

  do {
    printf("///           Tratamento em andamento: (apenas letras): ");
    scanf("%[^\n]", pac->trat);
    getchar();
  } while (!validarTrat(pac->trat));

  do {
    printf("///           Exames Realizados: (apenas letras): ");
    scanf("%[^\n]", pac->exame);
    getchar();
  } while (!validarExame(pac->exame));
>>>>>>> a83e91ee1cf1a848cf3b14289961c35c36c04afa

  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
};

void menuPesquisarPaciente(void) {

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
  printf("///           = = = = = Pesquisar cadastro do paciente = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", pac->nome);
    getchar();
  } while (!validarNome(pac->nome));

  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
};

void menuAlterarPaciente(struct Paciente *pac) {

  pac = (Paciente *)malloc(sizeof(Paciente));

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
  printf("///           = = = = = Atualizar cadastro do paciente = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", (pac->nome));
  } while (!validarNome(pac->nome));
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
};

void cadastrarConsulta(struct Consulta *cons) {

  cons = (Consulta *)malloc(sizeof(Consulta));

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
  printf("///           = = = = = = = = Cadastrar Consulta = = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", cons->nome);
    getchar();
  } while (!validarNome(cons->nome));

  do {
    printf("///        Deseja cadastrar uma nova consulta? (1 para Sim ou 2 para Não) ///\n");
    scanf("%[0-9]", cons->consulta);
    getchar();
  } while (!ehDigito(cons->consulta));

  do {
    printf("///        Qual a especialidade que o Sr.(a) deseja consultar?            ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", cons->especialidade);
    getchar();
  } while (!validarConsulta(cons->especialidade));

  do {
    printf("///        Qual o especialista que o Sr.(a) deseja consultar?             ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", cons->especialista);
    getchar();
  } while (!validarEspecialidade(cons->especialista));
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
};