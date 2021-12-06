#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecaCM.h"

/*código com referências do site:
bityli.com/49dOba
*/

// validação de datas
/*
typedef struct {
  char nome[60];
  char data[11];
  char celular[12];
  char cpf[12];
  char email[60];
  char doenca[999];
  char trat[999];
  char exame[999];
} dados;
*/

/* baseado no código de Flávius Gorgonio
github.com/flgorgonio/linguasolta
*/

int bissexto(int ano) {
  if ((ano % 4 == 0) && (ano % 100 != 0)) {
    return 1;
  } else if (ano % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int validarData(int dia, int mes, int ano) {
  int maiorDia;
  if (ano < 0 || mes < 1 || mes > 12)
    return 0;
  if (mes == 2) {
    if (bissexto(ano))
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;

  if (dia < 1 || dia > maiorDia)
    return 0;

  return 1;
}

/* baseado no código de Flávius Gorgonio
github.com/flgorgonio/linguasolta
*/

int  validarFone ( char * fone) {
  int tam;
  tam = strlen (fone);
  if (tam! = 11 ) {
    return  0 ;
  }
  para ( int i = 0 ; i <tam; i ++) {
    if (! ehDigito (fone [i])) {
        return  0 ;
    }
  }
  return  1 ;
}

/* baseado no código de Flávius Gorgonio
github.com/flgorgonio/linguasolta
*/

int validarNome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!ehLetra(nome[i])) {
      return 0;
    }
  }
	return 1;
}
