typedef struct exames Exames;
struct exames {
  char nome;
  char escolher;
} 

typedef struct examesSolicitar exames;

struct examesSolicitar {
  char nome [30];
  char escolher[2];
}

// Assinatura das funções
char menuExames(void);
char moduloExames(void);
void exameDisponivel(void);
char examesDisponiveis(void);

Exames *examesSolicitar(void);
Exames *examesResultados(void);
char gravarExame(Exames *);
char exameSolicitar(void);
void telaErrorArquivoExames(void);