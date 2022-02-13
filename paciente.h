// Assinatura das funções
typedef struct paciente Paciente;
struct paciente {
  char *nome;
  char *data;
  char *celular;
  char *cpf;
  char *email;
  char *doenca;
  char *trat;
  char *exame;
  int status;
} * pac;

typedef struct consulta Consulta;
struct consulta {
  char *nome;
  char *consulta;
  char *especialidade;
  char *especialista;
} * cons;

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
Paciente *buscarPaciente(char *;
void exibirPaciente(Paciente *);
Paciente *regravarPaciente(Paciente *);
