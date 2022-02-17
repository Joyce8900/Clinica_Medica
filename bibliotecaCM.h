#define True 1
#define False 0

// validação de dígitos
int ehDigito(char c);

// validação de letras
int ehLetra(char c);

// validação de datas
int bissexto(int);
int ehData(int, int, int);
int validarData(char *);

// validação de telefone
int validarFone(char *);

// validação de nome
int validarNome(char *);

// validação de CPF
int validarCPF(char *);

// validação de E-mail
int validarEmail(char *);

// validação de Doenças
int validarDoenca(char *);

// validação de Tratamento
int validarTrat(char *);

// validação de Exames
int validarExame(char *);

// validação de Consultas
int validarConsulta(char *);

// validação de Especialidade
int validarEspecialidade(char *);

// validação de Especilista
int validarEspecialista(char *);

void limpaTela(void);

void delay(int);