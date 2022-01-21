// Assinaturas da função
typedef struct funcionarios Funcionarios;
struct funcionarios {
  char nome[29];
  char cargo[20];
  char atribuicoes[50];
  char endereco[150];
  char email[30];
  char historico[300];
  char vma[5];
  char idade [6];
  char celular [11];
  char he [2300];
  char rg [10];
  char co [200];
  char ref [40];
  //char vma [4];
};

char menuPrincipal(void);
void menuFuncionarios(void);
void menuCurriculo(void);
void menuCFuncionarios(void);
void menuAtualizarF(void);
void menuPesquisarFuncionario(void);
void equipe(void);