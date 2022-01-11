// Assinatura das funções
typedef struct paciente Paciente;
struct paciente {
  char nome[60];
  char data[11];
  char celular[12];
  char cpf[12];
  char email[60];
  char doenca[999];
  char trat[999];
  char exame[999];
};

char menuPrincipal(void);
char menuCadastro(void);
void menuPaciente(void);
void menuCadastroPaciente(void);
void menuPesquisarPaciente(void);
void menuAlterarPaciente(void);
void cadastrarConsulta(void);