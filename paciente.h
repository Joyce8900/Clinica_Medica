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
} 

typedef struct consulta Consulta;
struct consulta {
  char nome[52];
  char consulta[11];
  char especialidade[21];
  char especialista[21];
} 

void moduloCadastro(void);
void cadastrarPaciente(void);
void gravarPaciente(Paciente *);
char cadastroPaciente(void);
char pesquisarPaciente(void);
void atualizarPaciente(void);
void excluirPaciente(void);

char menuCadastro(void);
void menuPaciente(void);
char moduloPaciente(void);
Paciente *menuCadastroPaciente(void);
void menuPesquisarPaciente(void);
void telaErroArquivoPaciente(void);

void menuAlterarPaciente(void);
char *menuExcluirPaciente(void);
Consulta *cadastrarConsulta(Consulta *);
Paciente *buscarPaciente(char *);
void exibirPaciente(Paciente *);
Paciente *regravarPaciente(Paciente *);
