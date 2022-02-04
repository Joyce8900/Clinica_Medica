typedef struct exames *Exames;
struct Exames {
  char *nome;
} * exa;

// Assinatura das funções
char menuExames(void);
char examesDisponiveis(void);

Exames *examesSolicitar(void);
Exames *examesAcompanhar(void);
Exames *examesResultados(void)