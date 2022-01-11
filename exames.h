typedef struct exames Exames;
struct exames {
  char nome[60];
};

// Assinatura das funções
void menuExames(void);
void examesDisponiveis(void);
void examesSolicitar(void);
void examesAcompanhar(void);
void examesResultados(void);