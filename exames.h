typedef struct exames Exames;
struct exames {
  char *nome;
  char *escolher;
} * exa;

typedef struct examesSolicitar Solicitar;

struct examesSolicitar {
  char *nome;
  char *escolher;
} * sol;

// Assinatura das funções
char menuExames(void);
char moduloExames(void);
char exameDisponivel(void);
char examesDisponiveis(void);
// void examesSolicitar(Solicitar*);

Exames *examesSolicitar(void);
Exames *examesResultados(void);
void gravarExame(Exames *);
char exameSolicitar(void);
void telaErrorArquivoExames(void);