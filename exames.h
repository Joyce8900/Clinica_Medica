typedef struct exames *Exames;
struct Exames {
  char *nome;
  char *escolher;
} * exa;

typedef struct exames *Exames;

typedef struct examesSolicitar *Solicitar;

struct examesSolicitar {
  char *nome;
  char *escolher;
} * sol;

// Assinatura das funções
char menuExames(void);
void moduloExames(void);
char exameDisponivel(void);
// void examesSolicitar(Solicitar*);

Exames *examesSolicitar(void);
Exames *examesResultados(void);
void gravarExame(Exames *);
char exameSolicitar(void);
void telaErrorArquivoExames(void);