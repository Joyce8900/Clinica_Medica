#include <stdio.h>

// Assinatura das funções
void informacoesProjeto(void);
void informacoesEquipe(void);
void informacoesSobre(void);

// Programa Principal
int main(void)
{
  informacoesProjeto();
  informacoesEquipe();
  informacoesSobre();
  return 0;
}

// Funções
void informacoesProjeto()
{
  printf("                                                               \n");
  printf("###############################################################\n");
  printf("         Universidade Federal do Rio Grande do Norte           \n");
  printf("         CERES - Centro de Ensino Superior do Sérido           \n");
  printf("        DCT - Departamento de Computação e Tecnologia          \n");
  printf("            Disciplina - Programação -- DCT1106                \n");
  printf("    Projeto Sistema de Agendamento para Clínicas Médicas       \n");
  printf("    Desenvolvido por: @isazvdd e  @Joyce8900 - Out, 2021       \n");
  printf("###############################################################\n");
}

void informacoesEquipe()
{
  printf("                                                                                      \n");
  printf("######################################################################################\n");
  printf("                     Universidade Federal do Rio Grande do Norte                      \n");
  printf("                    CERES - Centro de Ensino Superior do Sérido                       \n");
  printf("                   DCT - Departamento de Computação e Tecnologia                      \n");
  printf("                         Disciplina - Programação -- DCT1106                          \n");
  printf("                 Projeto Sistema de Agendamento para Clínicas Médicas                 \n");
  printf("                 Desenvolvido por: @isazvdd e  @Joyce8900 - Out, 2021                 \n");
  printf("######################################################################################\n");
  printf("                                                                                      \n");
  printf("                                                                                      \n");
  printf("~~~~~~~~~~~~~~~~~~~~~~ Sistema de Agendamento para Clínicas~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("///                Este projeto exemplo foi desenvolvido por:                      ///\n");
  printf("///  Discentes : Isadora Luana Maria Gomes de Azevedo / Joyce Oliveira dos Santos  ///\n");
  printf("///   E-mails: isadora.azevedo.700@ufrn.edu.br / joyce.santos.709@ufrn.edu.br      ///\n");
  printf("///                 Redes sociais:   @isazvdd e  @Joyce8900                        ///\n");
  printf("///      Repositório: https://github.com/Joyce8900/Clinica_Medica                  ///\n");
  printf("///                                                                                ///\n");
  printf("//////////////////////////////////////////////////////////////////////////////////////\n");
  printf("                                                                                      \n");
}

void informacoesSobre()
{
  printf("\n");
  printf("####################################################################################\n");
  printf("         Programa desenvolvido por alunos da Universidade Federal do Rio            \n");
  printf("          Grande do Norte, UFRN, do campus do Centro de Ensino Superior             \n");
  printf("           do Seridó - CERES -, do curso de Bacharelado em Sistemas de              \n");
  printf("         Informação, para a disciplina de Programação - DCT1106. O devido           \n");
  printf("          programa tem a finalidade de auxiliar pacientes que necessitem            \n");
  printf("          agendar consultas médicas. O paciente poderá escolher entre as            \n");
  printf("         especialidades médicas que temos e entre os especialistas de sua           \n");
  printf("                                preferência.                                        \n");
  printf("####################################################################################\n");
}
