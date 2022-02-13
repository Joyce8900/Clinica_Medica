// Assinaturas da função
typedef struct funcionarios Funcionarios;
struct funcionarios {
  char *nome;
  char *idade;
  char *celular;
  char *endereco;
  char *email;
  char *he;
  char *rg;
  char *cargos;
  char *ref;
  char *atribuicoes;
  char *historico;
  char *vma;
  char *co;
} * func;

typedef struct curriculo Curriculo;
struct curriculo {
  char *nome;
  char *cargo;
  char *atribuicoes;
  char *endereco;
  char *email;
  char *cpf;
  char *historico;
  char *vma;
} * cv;

char moduloFuncionarios(void);
void menuCfuncionario(void);
void menuPesquisarFuncionario(void);
void exibirFuncionario(Funcionarios *);
char menuFuncionarios(void);
void cadastrarCurriculo(void);
Funcionarios *telaCadastrarFuncionarios(void);
void telaErroArquivoFuncionario(void);
char menuAtualizarF(void);
char *telaPesquisarFuncionarios(void);
void equipe(void);
void gravarFuncionarios(Funcionarios *);
void exibirFuncionarios(Funcionarios *);
void gravarCurriculo(Curriculo *);
