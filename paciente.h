// Assinatura das funções
<<<<<<< HEAD
typedef struct paciente Paciente;
struct paciente {
  char nome[60];
  char data[11];
  char telefone[12];
  char cpf[12];
  char email[60];
  char doenca[999];
  char trat[999];
  char exame[999];
};
=======
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
>>>>>>> a83e91ee1cf1a848cf3b14289961c35c36c04afa

char menuPrincipal(void);
char menuCadastro(void);
void menuPaciente(void);
void menuCadastroPaciente(void);
void menuPesquisarPaciente(void);
void menuAlterarPaciente(void);
void cadastrarConsulta(void);