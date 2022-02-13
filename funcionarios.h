// Assinaturas da função
typedef struct funcionarios Funcionarios;
struct funcionarios {
  char *nome;
  char *cargos;
  char *atribuicoes;
  char *endereco;
  char *email;
  char *historico;
  char *vma;
  char *idade;
  char *celular;
  char *he;
  char *rg;
  char *co;
  char *ref;
} * func;

typedef struct curriculo Curriculo;
struct curriculo {
  char *nome;
  char *cargo;
  char *atribuicoes;
  char *endereco;
  char *email;
  char *historico;
  char *vma;
} * cv;

char moduloFuncionarios(void);
void menuCfuncionario(void);
void menuPesquisarFuncionario(void);
char menuFuncionarios(void);
void cadastrarCurriculo(void);
void menuCFuncionarios(Funcionarios *);

Funcionarios *telaCadastrarFuncionarios(void);
void telaErroArquivoFuncionario(void);
char menuAtualizarF(void);
char *telaPesquisarFuncionarios(void);
void equipe(void);
void gravarFuncionarios(Funcionarios *);
void exibirFuncionarios(Funcionarios *);
void gravarCurriculo(Funcionarios *);
