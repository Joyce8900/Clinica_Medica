// Assinatura das funções
typedef struct paciente *Paciente;
struct Paciente {
  char *nome;
  char *data;
  char *celular;
  char *cpf;
  char *email;
  char *doenca;
  char *trat;
  char *exame;
} * pac;

typedef struct consulta *Consulta;
struct Consulta {
  char *nome;
  char *consulta;
  char *especialidade;
  char *especialista;
} * cons;

char menuPrincipal(void);
char menuCadastro(void);
void menuPaciente(void);
void menuCadastroPaciente(void);
void menuPesquisarPaciente(void);
void menuAlterarPaciente(void);
void cadastrarConsulta(void);