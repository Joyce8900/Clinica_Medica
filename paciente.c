#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"

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
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarNome(moduloPaciente->paciente));

do {
		printf("///           Data (apenas números): ");
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarData(moduloPaciente->paciente));
  

do {
		printf("///           Telefone (apenas números): ");
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarFone(moduloPaciente->paciente));
  

 do {
		printf("///           CPF (apenas números): ");
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarCPF(moduloPaciente->paciente));
  
do {
		printf("///           Email : ");
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarEmail(moduloPaciente->paciente));

do {
		printf("///           Possui alguma doença? (apenas letras): ");
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarDoenca(moduloPaciente->paciente));

do {
		printf("///           Tratamento em andamento: (apenas letras): ");
		scanf("%[^\n]", moduloPaciente->paciente);
		getchar();
	} while (!validarTrat(moduloPaciente->paciente));

  
  printf("///           Exames realizados:                                          ///\n");
  scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", exame);
  getchar();

  validExame = validarExame(exame);
  if ((validExame) == 1) {
    printf("Dígitos válidos");
  } else {
    printf("Dígitos inválidos! Digite apenas letras!");
  }

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
  printf("///           Nome completo:                                              ///\n");
  scanf("%c", nome);
  getchar();

  validNome = validarNome(nome);
  if ((validNome) == 1) {
    printf("Nome válido!");
  } else {
    printf("Nome inválido. Tente novamente!");
  }

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
  printf("///           Nome completo:                                              ///\n");
  scanf("%c", nome);
  getchar();

  validNome = validarNome(nome);
  if ((validNome) == 1) {
    printf("Nome válido!");
  } else {
    printf("Nome inválido. Tente novamente!");
  }

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
  printf("///        Nome completo:                                                 ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  getchar();

  validNome = validarNome(nome);
  if ((validNome) == 1) {
    printf("Nome válido!");
  } else {
    printf("Nome inválido. Tente novamente!");
  }

  printf("///        Deseja cadastrar uma nova consulta? (1 para Sim ou 2 para Não) ///\n");
  scanf("%[0-9]", consulta);
  getchar();

  validConsulta = validarConsulta(consulta);
  if ((validConsulta) == 1) {
    printf("Digitos válidos!");
  } else {
    printf("Dígitos inválidos! Digite apenas letras!");
  }

  printf("///        Qual a especialidade que o Sr.(a) deseja consultar?            ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", especialidade);
  getchar();

  validEspecialidade = validarConsulta(especialidade);
  if ((validEspecialidade) == 1) {
    printf("Dígitos válidos!");
  } else {
    printf("Dígitos inválidos! Digite apenas letras!");
  }

  printf("///        Qual o especialista que o Sr.(a) deseja consultar?             ///\n");
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", especialista);
  getchar();

  validEspecialista = validarConsulta(especialista);
  if ((validEspecialista) == 1) {
    printf("Dígitos válidos!");
  } else {
    printf("Dígitos inválidos! Digite apenas letras!");
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}