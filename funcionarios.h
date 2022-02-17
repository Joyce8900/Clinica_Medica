// Assinaturas da função
typedef struct funcionarios Funcionarios;
struct funcionarios {
  char nome[51];
  char idade[3];
  char celular[10];
  char endereco[26];
  char email[26];
  char he[100];
  char rg[10];
  char cargos[15];
  char ref[1000];
  char atribuicoes[26];
  char historico[500];
  char vma[2];
};

typedef struct curriculo Curriculo;
struct curriculo {
  char nome[50];
  char cargo[34];
  char atribuicoes[26];
  char endereco[26];
  char email[50];
  char cpf[12];
  char historico[100];
  char vma[2];
};

void moduloFuncionarios(void);
void menuCfuncionario(void);
char menuFuncionarios(void);
void cadastrarCurriculo(void);
Funcionarios *telaCadastrarFuncionarios(void);
void telaErroArquivoFuncionario(void);
char* menuAtualizarF(void);
char *telaPesquisarFuncionarios(void);
void equipe(void);
void gravarFuncionarios(Funcionarios *);
void exibirFuncionario(Funcionarios *);
void gravarCurriculo(Curriculo*);
void menuPesquisarFuncionario(void);
Funcionarios* pesquisarFuncionario (char*);