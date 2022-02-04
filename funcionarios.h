// Assinaturas da função
typedef struct funcionarios *Funcionarios;
struct Funcionarios {
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
} * Func;

typedef struct menucurriculo;
struct curriculo {
  char *nome;
  char *cargo;
  char *atribuicoes;
  char *endereco;
  char *email;
  char *historico;
  char *vma;
};

Funcionarios *telaCadastrarFuncionarios(void);
char *telaPesquisarFuncionarios(void);
void gravarFuncionarios(Funcionarios *);
void gravarCurriculo(Funcionarios *);

char menuPrincipal(void);
void menuFuncionarios(void);
void menuCurriculo(void);
void menuCFuncionarios(void);
void menuAtualizarF(void);
void menuPesquisarFuncionario(void);
void equipe(void);