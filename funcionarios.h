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
  //char co;
}

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
}

char moduloFuncionarios(void);
char menuCfuncionario(void);
char menuPesquisarFuncionario(void);
char exibirFuncionario(Funcionarios *);
char menuFuncionarios(void);
Curriculo *cadastrarCurriculo(void);
Funcionarios *telaCadastrarFuncionarios(void);
void telaErroArquivoFuncionario(void);
char menuAtualizarF(void);
char *telaPesquisarFuncionarios(void);
void equipe(void);
char gravarFuncionarios(Funcionarios *);
void exibirFuncionarios(Funcionarios *);
char gravarCurriculo(Curriculo*);
