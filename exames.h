typedef struct exames Exames;
struct exames {
  char nome[31];
  char escolher[40];
  // *prox;
};

// Assinatura das funções
char menuExames(void);
char moduloExames(void);
void exameDisponivel(void);
char examesDisponiveis(void);

Exames *examesSolicitar(void);
Exames *examesResultados(void);
void gravarExame(Exames *);
void exameSolicitar(void);
void telaErrorArquivoExames(void);
void exibirExames(Exames *);