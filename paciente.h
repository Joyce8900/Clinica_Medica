// Assinatura das funções
typedef struct paciente Paciente;
struct paciente {
  char nome[51];
  char data[11];
  char celular[10];
  char cpf[12];
  char email[31];
  char doenca[50];
  char trat[2000];
  char exame[30];
  int status;
  *prox;
};

typedef struct consulta Consulta;
struct consulta {
  char nome[52];
  char consulta[11];
  char especialidade[21];
  char data[11];
};

void moduloCadastro(void);
void cadastrarPaciente(void);
void gravarPaciente(Paciente *);
void cadastroPaciente(void);
void buscarPaciente(void);
Paciente *pesquisarPaciente(char *);
void atualizarPaciente(void);
void excluirPaciente(void);

char menuCadastro(void);
char menuPaciente(void);
void moduloPaciente(void);
Paciente *menuCadastroPaciente(void);
char *telaPesquisarPaciente(void);
void telaErroArquivoPaciente(void);

char *menuAlterarPaciente(void);
char *menuExcluirPaciente(void);

Paciente *pesquisarPaciente(char *);
void exibirPaciente(Paciente *);
void regravarPaciente(Paciente *);

// funções de consultas
void gravarConsulta(Consulta *);
void cadastroConsulta(void);
Consulta *cadastrarConsulta(void);
void telaErroArquivoConsulta(void);