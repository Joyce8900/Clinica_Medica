//typedef struct exames *Exames;
// struct Exames {
//   char *nome;
//   char *escolhar;
// } * exa;

typedef struct exames *Exames;
struct examesSolicitar {
  char *nome;
  char *escolhar;
} * cons;

// Assinatura das funções
char menuExames(void);
void moduloExames(void);
char examesDisponiveis(void);
void examesSolicitar(Solicitar*);

Exames *examesSolicitar(void);
Exames *examesAcompanhar(void);
Exames *examesResultados(void);


