#include <stdio.h>

// Assinatura das funções
void informacoesProjeto(void);
void informacoesEquipe(void);

// Programa Principal
int main(void) {
  informacoesProjeto();
  informacoesEquipe();
  return 0;
}

// Funções
void informacoesProjeto() {
  printf("\n");
  printf("###############################################################\n");
  printf("        Universidade Federal do Rio Grande do Norte   \n");
  printf("        CERES - Centro de Ensino Superior do Sérido    \n");
  printf("        DCT - Departamento de Computação e Tecnologia  \n");
  printf("        Disciplina - Programação -- DCT1106             \n");
  printf("   Projeto Sistema de Agendamento para Clínicas Médicas  \n");
  printf("##########################################################\n");
}

void informacoesEquipe() {
  printf("\n");
  printf("###############################################################\n");
  printf (".\n");
  printf("                   Em desenvolvimento...   \n");
  printf("##########################################################\n");
}