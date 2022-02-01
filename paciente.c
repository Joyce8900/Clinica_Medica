#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"

typedef struct paciente *Paciente;
typedef struct consulta *Consulta;

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



void menuCadastroPaciente(void) {
	Paciente* pac;

	pac = menuCadastroPacienter();
	gravarPaciente(pac);
	free(pac);
}


void menuPesquisarPaciente(void) {
	Paciente* pac;
	char* nome;

	nome = ();
	pac = buscarPaciente(nome);
	exibirPaciente(pac);
	free(pac); 
	free(pac);
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
  delay(1);
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

void menuCadastroPaciente(struct Paciente *pac) {

  pac = (Paciente *)malloc(sizeof(Paciente));

  struct paciente {
    char *nome;
    char *data;
    char *telefone;
    char *cpf;
    char *email;
    char *doenca;
    char *trat;
    char *exames;
  }
};


Paciente* menuCadastroPaciente(void) {
	Paciente* pac;
	pac = (Paciente*) malloc(sizeof(Paciente));

// void menuCadastroPaciente(struct Paciente *pac);


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
    printf("///           Nome completo(apenas letras): ");
    scanf("%[^\n]", pac->nome);
    getchar();
  } while (!validarNome(pac->nome));

  do {
    printf("///           Data (apenas números): ");
    scanf("%[^\n]", pac->data);
    getchar();
  } while (!validarData(pac->data));

  do {
    printf("///           Telefone (apenas números): ");
    scanf("%[^\n]", pac->telefone);
    getchar();
  } while (!validarFone(pac->telefone));

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
    scanf("%[^\n]", paciente->doenca);
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
   getchar();
    pac->status = True;

  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  delay(1);
};


// void menuPesquisarPaciente(void) {
// 	Paciente* pac;
// 	char* nome;

// 	nome = ();
// 	pac = buscarPaciente(nome);
// 	exibirPaciente(pac);
// 	free(pac); 
// 	free(pac);
// }

void menuPesquisarPaciente(void) {
  char* nome;
	nome = (char*) malloc(29*sizeof(char));

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
  delay(1);
};

void telaErroArquivoPaciente(void) {
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
  delay(1);
};



Paciente* buscarPaciente(char* nome) {
	FILE* fp;
	Paciente* pac;

	pac = (Paciente*) malloc(sizeof(Paciente));
	fp = fopen("paciente.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoPaciente();
	}
	while(fread(pac, sizeof(Paciente), 1, fp)) {
		if ((strcmp(pac->cpf, nome) == 0) && (pac->status == True)) {
			fclose(fp);
			return pac;
		}
	}
	fclose(fp);
	return NULL;
}

void gravarPaciente(Paciente* pac) {
	FILE* fp;

	fp = fopen("paciente.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoPaciente();
	}
	fwrite(pac, sizeof(Paciente), 1, fp);
	fclose(fp);
}

