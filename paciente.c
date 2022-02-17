#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "paciente.h"

void moduloCadastro(void) {
  char opc;
  do {
    opc = menuPaciente();
    switch (opc) {
    case '1':
      menuCadastroPaciente();
      break;
    }
  } while (opc != '0');
}

void gravarPaciente(Paciente *pac) {
  FILE *fp;

  fp = fopen("paciente.dat", "ab");
  if (fp == NULL) {
    telaErroArquivoPaciente();
  }
  fwrite(pac, sizeof(Paciente), 1, fp);
  fclose(fp);
}

void cadastroPaciente(void) {
  Paciente *pac;

  pac = menuCadastroPaciente();
  gravarPaciente(pac);
  free(pac);
}

void menuPesquisarPaciente(void) {
  Paciente *pac;
  char *nome;

  nome = telaPesquisarPaciente();
  pac = pesquisarPaciente(nome);
  exibirPaciente(pac);
  free(pac);
  free(nome);
}

void atualizarPaciente(void) {
  Paciente *pac;
  char *nome;

  nome = menuAlterarPaciente();
  pac = pesquisarPaciente(nome);
  if (pac == NULL) {
    printf("\n\n Paciente não encontrado \n\n");
  } else {
    pac = menuCadastroPaciente();
    strcpy(pac->nome, nome);
    regravarPaciente(pac);
    free(pac);
  }
  free(nome);
}

void excluirPaciente(void) {
  Paciente *pac;
  char *nome;

  nome = menuExcluirPaciente();
  pac = (Paciente *)malloc(sizeof(Paciente));
  pac = pesquisarPaciente(nome);
  if (pac == NULL) {
    printf("\n\n Paciente não encontrado \n\n");
  } else {
    pac->status = False;
    regravarPaciente(pac);
    free(pac);
  }
  free(nome);
}

char menuCadastro(void) {
  char opc;

  limpaTela();
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
  return opc;
}

char menuPaciente(void) {
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
  return opc;
}

// Funcao Paciente
void moduloPaciente(void) {
  char opcao;
  do {
    opcao = menuPaciente();
    switch (opcao) {
    case '1':
      menuCadastroPaciente();
      break;
    case '2':
      menuAlterarPaciente();
      break;
    case '3':
      telaPesquisarPaciente();
      break;
    case '4':
      cadastrarConsulta();
      break;
    }
  } while (opcao != '0');
}

Paciente *menuCadastroPaciente(void) {
  Paciente *pac;
  pac = (Paciente *)malloc(sizeof(Paciente));

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clinicas Medicas = = =       ///\n");
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
    printf("///           Data de nascimento (apenas numeros): ");
    scanf("%[^\n]", pac->data);
    getchar();
  } while (!validarData(pac->data));

  do {
    printf("///           Telefone (apenas numeros): ");
    scanf("%[^\n]", pac->celular);
    getchar();
  } while (!validarFone(pac->celular));

  do {
    printf("///           CPF (apenas numeros): ");
    scanf("%[^\n]", pac->cpf);
    getchar();
  } while (!validarCPF(pac->cpf));

  do {
    printf("///           Email : ");
    scanf("%[^\n]", pac->email);
    getchar();
  } while (!validarEmail(pac->email));

  do {
    printf("///           Possui alguma doenca? (apenas letras): ");
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
  getchar();
  pac->status = True;
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return pac;
}

char *telaPesquisarPaciente(void) {
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
  printf("///           = = = = = Pesquisar cadastro do paciente = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", nome);
    getchar();
  } while (!validarNome(nome));

  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  delay(1);
  return nome;
}

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
  printf("///           = = = com informações sobre os pacientes  = = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
  printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
  exit(1);
}

// void menuAlterarPaciente(void) {
//   Paciente *pac;
//   char *nome;
char *menuAlterarPaciente(void) {
  char *nome;
  nome = (char *)malloc(39 * sizeof(char));

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
  printf("///           = = = = = Atualizar cadastro do paciente = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  do {
    printf("///           Nome completo: (apenas letras): ");
    scanf("%[^\n]", nome);
  } while (!validarNome(nome));
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return nome;
}

char *menuExcluirPaciente(void) {
  char *nome;
  nome = (char *)malloc(12 * sizeof(char));

  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///          ===================================================          ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
  printf("///              Sistema de Agendamento para Clínicas Médicas             ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
  printf("///          ===================================================          ///\n");
  printf("///           Developed by  @ @isazvdd e  @Joyce8900 - Out, 2021          ///\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///            = = = = = = =  Excluir Paciente  = = = = = = =             ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("///           Informe o nome do paciente:      ");
  scanf("%[^\n]", nome);
  getchar();
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  delay(1);
  return nome;
}

Consulta *cadastrarConsulta(void) {
  Consulta *cons;
  cons = (Consulta *)malloc(sizeof(Consulta));

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
    scanf("%[^\n]", cons->consulta);
    getchar();
  } while (!validarConsulta(cons->consulta));

  do {
    printf("///        Qual a especialidade que o Sr.(a) deseja consultar?            ///\n");
    scanf("%[^\n]", cons->especialidade);
    getchar();
  } while (!validarConsulta(cons->especialidade));

  do {
    printf("///        Qual o especialista que o Sr.(a) deseja consultar?             ///\n");
    scanf("%[^\n]", cons->especialista);
    getchar();
  } while (!validarEspecialidade(cons->especialista));
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
  return cons;
}

Paciente *pesquisarPaciente(char *nome) {
  FILE *fp;
  Paciente *pac;

  pac = (Paciente *)malloc(sizeof(Paciente));
  fp = fopen("paciente.dat", "rb");
  if (fp == NULL) {
    telaErroArquivoPaciente();
  }
  while (fread(pac, sizeof(Paciente), 1, fp)) {
    if ((strcmp(pac->cpf, nome) == 0) && (pac->status == True)) {
      fclose(fp);
      return pac;
    }
  }
  fclose(fp);
  return NULL;
}

void exibirPaciente(Paciente *pac) {
  if (pac == NULL) {
    printf("\n Paciente não encontrado \n");
  } else {
    printf(" Paciente encontrado \n");
    printf(" Nome do paciente: %s\n", pac->nome);
    printf(" Data de nascimento: %s\n", pac->data);
    printf(" Celular: %s\n", pac->celular);
    printf(" E-mail: %s\n", pac->email);
  }
  printf("\n\n\n>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void regravarPaciente(Paciente *pac) {
  int achou;
  FILE *fp;
  Paciente *pacLido;

  pacLido = (Paciente *)malloc(sizeof(Paciente));
  if (fp == NULL) {
    telaErroArquivoPaciente();
  }
  // while(!feof(fp))
  achou = False;
  while (fread(pacLido, sizeof(Paciente), 1, fp) && !achou) {
    // fread(pacLido, sizeof(Paciente), 1, fp);
    if (strcmp(pacLido->nome, pac->nome) == 0) {
      achou = True;
      fseek(fp, -1 * sizeof(Paciente), SEEK_CUR);
      fwrite(pac, sizeof(Paciente), 1, fp);
      // break;
    }
  }
  fclose(fp);
  free(pacLido);
}