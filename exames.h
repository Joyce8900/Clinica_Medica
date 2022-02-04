typedef struct exames *Exames;
struct Exames {
  char *nome;
} * exa;

// Assinatura das funções
char menuExames(void);
char examesDisponiveis(void);
void moduloExames(void);

Exames *examesSolicitar(char *);
Exames *examesAcompanhar(char *);
Exames *examesResultados(char *);
