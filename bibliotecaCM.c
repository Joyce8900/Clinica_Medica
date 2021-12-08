#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bibliotecaCM.h"

/* baseado no código de Flávius Gorgonio
github.com/flgorgonio/linguasolta
*/

int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}

int ehLetra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}

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
  } else if (mes == 4 ||
             mes == 6 ||
             mes == 9 ||
             mes == 11) {
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

int validarFone(char *fone) {
  int tam;
  tam = strlen(fone);
  if (tam != 11) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(fone[i])) {
      return 0;
    }
  }
  return 1;
}

/* baseado no código de Flávius Gorgonio
github.com/flgorgonio/linguasolta
*/

int validarNome(char *nome) {
  for (int i = 0; nome[i] != '\0'; i++) {
    if (!ehLetra(nome[i])) {
      return 1;
    else{
      printf("%s não é valido", *nome);
    }
  }
  return 1;
}

//*Baseado em http://wurthmann.blogspot.com/2012/12/funcao-em-linguagem-c-validador-de-cpf.html

int validarCPF(char *cpf[])

{
  int i, j, digito1 = 0, digito2 = 0;
  if (strlen(cpf) != 11)
    return 0;
  else if ((strcmp(cpf, "00000000000") == 0) || (strcmp(cpf, "11111111111") == 0) || (strcmp(cpf, "22222222222") == 0) ||
           (strcmp(cpf, "33333333333") == 0) || (strcmp(cpf, "44444444444") == 0) || (strcmp(cpf, "55555555555") == 0) ||
           (strcmp(cpf, "66666666666") == 0) || (strcmp(cpf, "77777777777") == 0) || (strcmp(cpf, "88888888888") == 0) ||
           (strcmp(cpf, "99999999999") == 0))
    return 0; /// se o CPF tiver todos os números iguais ele é inválido.
  else {
    /// digito 1---------------------------------------------------
    for (i = 0, j = 10; i < strlen(cpf) - 2; i++, j--) /// multiplica os números de 10 a 2 e soma os resultados dentro de digito1
      digito1 += (cpf[i] - 48) * j;
    digito1 %= 11;
    if (digito1 < 2)
      digito1 = 0;
    else
      digito1 = 11 - digito1;
    if ((cpf[9] - 48) != digito1)
      return 0; /// se o digito 1 não for o mesmo que o da validação CPF é inválido
    else
    /// digito 2--------------------------------------------------
    {
      for (i = 0, j = 11; i < strlen(cpf) - 1; i++, j--) /// multiplica os números de 11 a 2 e soma os resultados dentro de digito2
        digito2 += (cpf[i] - 48) * j;
      digito2 %= 11;
      if (digito2 < 2)
        digito2 = 0;
      else
        digito2 = 11 - digito2;
      if ((cpf[10] - 48) != digito2)
        return 0; /// se o digito 2 não for o mesmo que o da validação CPF é inválido
    }
  }
  return 1;
}

int validarEmail(char *email) {
  int tam = strlen(email);
  char *eMail;
  for (int i = 0; i < tam; i++) {
    if (eMail == "[a-z A-Z 0-9 _ @ . ^\n]") {
      return 1;
    } else {
      return 0;
    }
  }
}

int validarDoenca(char *doenca) {
  for (int i = 0; doenca[i] != '\0'; i++) {
    if (!ehLetra(doenca[i])) {
      return 0;
    }
  }
  return 1;
}

int validarTrat(char *trat) {
  for (int i = 0; trat[i] != '\0'; i++) {
    if (!ehLetra(trat[i])) {
      return 0;
    }
  }
  return 1;
}

int validarExame(char *exame) {
  for (int i = 0; exame[i] != '\0'; i++) {
    if (!ehLetra(exame[i])) {
      return 0;
    }
  }
  return 1;
}

int validarConsulta(char *consulta) {
  for (int i = 0; consulta[i] != '\0'; i++) {
    if (!ehLetra(consulta[i])) {
      return 0;
    }
  }
  return 1;
}

int validarEspecialidade(char *especialidade) {
  for (int i = 0; especialidade[i] != '\0'; i++) {
    if (!ehLetra(especialidade[i])) {
      return 0;
    }
  }
  return 1;
}

int validarEspecialista(char *especialista) {
  for (int i = 0; especialista[i] != '\0'; i++) {
    if (!ehLetra(especialista[i])) {
      return 0;
    }
  }
  return 1;
}