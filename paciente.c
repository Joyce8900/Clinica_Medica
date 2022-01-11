#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"
typedef struct aluno Aluno; 
  char menuCadastro(void) {
    char opc[2];

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
  scanf("%[0-9]", opc);
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
  return 0;
}

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
}

void menuPaciente(void) {
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
  scanf("%[0-9]", opc);
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

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
    }

  } while (opcao != '0');
  return 0;
}

void menuCadastroPaciente(void) {
  char nome[60];
  char data[11];
  char celular[12];
  char cpf[12];
  char email[60];
  char doenca[999];
  char trat[999];
  char exame[999];
  char validNome;
  char validData;
  char validFone;
  char validCPF;
  char validEmail;
  char validDoenca;
  char validTrat;
  char validExame;

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
  printf("///           Nome completo:                                              ///\n");
  scanf("%s", nome);
  getchar();

  do {
      printf("///           Nome (apenas letras): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarNome(menuCadastroPaciente->paciente));

  do {
      printf("///           Data (apenas números): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarData(moduloPaciente->paciente));
    

  do {
      printf("///           Telefone (apenas números): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarFone(menuCadastroPaciente->paciente));
    

  do {
      printf("///           CPF (apenas números): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarCPF(menuCadastroPaciente->paciente));
    
  do {
      printf("///           Email : ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarEmail(menuCadastroPaciente->paciente));

  do {
      printf("///           Possui alguma doença? (apenas letras): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarDoenca(menuCadastroPaciente->paciente));

  do {
      printf("///           Tratamento em andamento: (apenas letras): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarTrat(menuCadastroPaciente->paciente));

  do {
      printf("///           Exames Realizados: (apenas letras): ");
      scanf("%[^\n]", menuCadastroPaciente->paciente);
      getchar();
    } while (!validarExame(menuCadastroPaciente->paciente));
    

    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
  }

void menuPesquisarPaciente(void) {
  char nome[60];
  char validNome;

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
    // printf("///           Nome completo:                                              ///\n");
    // scanf("%c", nome);
    // getchar();

  do {
      printf("///           Nome completo: (apenas letras): ");
      scanf("%[^\n]", menuPesquisarPaciente->Pesqpaciente);
      getchar();
    } while (!validarNome(menuPesquisarPaciente->Pesqpaciente));

    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
  }

void menuAlterarPaciente(void) {
  char nome[60];
  char validNome;

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
    // printf("///           Nome completo:                                              ///\n");
    // scanf("%c", nome);
    // getchar();

  do {
      printf("///           Nome completo: (apenas letras): ");
      scanf("%[^\n]", menuAlterarPaciente->Altpaciente);
      getchar();
  } while (!validarNome(menuAlterarPaciente->Altpaciente));


  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void cadastrarConsulta(void) {
  char nome[60];
  char consulta[2];
  char especialidade[99];
  char especialista[99];
  char validNome;
  char validConsulta;
  char validEspecialidade;
  char validEspecialista;

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
  // printf("///        Nome completo:                                                 ///\n");
  // scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  getchar();


do {
      printf("///           Nome completo: (apenas letras): ");
      scanf("%[^\n]", cadastrarConsulta->Cadpaciente);
      getchar();
  } while (!validarNome(cadastrarConsulta->Cadpaciente));

do {
  printf("///        Deseja cadastrar uma nova consulta? (1 para Sim ou 2 para Não) ///\n");
  scanf("%[0-9]", consulta);
  getchar();
  } while (!ehDigito(cadastrarConsulta->Cadpaciente));

do {
  printf("///        Qual a especialidade que o Sr.(a) deseja consultar?            ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", especialidade);
  getchar();
  } while (!validarConsulta(cadastrarConsulta->Cadpaciente));

 do {
  printf("///        Qual o especialista que o Sr.(a) deseja consultar?             ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", especialista);
  getchar();
  } while (!validarEspecialidade(cadastrarConsulta->Cadpaciente));
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}