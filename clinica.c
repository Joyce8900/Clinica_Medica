#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "bibliotecaCM.h"
#include "exames.h"
#include "funcionarios.h"
#include "paciente.h"
#include "relatorios.h"

// Assinatura das funções
char menuPrincipal(void);
void moduloCadastro(void);
void moduloFuncionarios(void);
char moduloExames(void);
void moduloRelatorios(void);

void menuProjeto(void);
void menuEquipe(void);
void menuSobre(void);

// Programa principal
int main(void) {
  char modulo;

  do {
    modulo = menuPrincipal();
    switch (modulo) {
    case '1':
      moduloPaciente();
      break;
    case '2':
      moduloFuncionarios();
      break;
    case '3':
      moduloExames();
      break;
    case '4':
      moduloRelatorios();
      break;
    case 0:
      break;
    default:
      printf("Opção inválida!\n");
    }
  } while (modulo != '0');
  printf("Fim!\n");
  // char modulo;
  return 0;
}

void menuProjeto(void) {

  limpaTela();
  printf("                                                               \n");
  printf("###############################################################\n");
  printf("                                                               \n");
  printf("         Universidade Federal do Rio Grande do Norte           \n");
  printf("         CERES - Centro de Ensino Superior do Sérido           \n");
  printf("        DCT - Departamento de Computação e Tecnologia          \n");
  printf("             Disciplina - Programação - DCT1106                \n");
  printf("    Projeto Sistema de Agendamento para Clínicas Médicas       \n");
  printf("    Desenvolvido por: @isazvdd e  @Joyce8900 - Out, 2021       \n");
  printf("                                                               \n");
  printf("###############################################################\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void menuEquipe(void) {

  limpaTela();
  printf("                                                                                      \n");
  printf("######################################################################################\n");
  printf("                                                                                      \n");
  printf("                     Universidade Federal do Rio Grande do Norte                      \n");
  printf("                    CERES - Centro de Ensino Superior do Sérido                       \n");
  printf("                   DCT - Departamento de Computação e Tecnologia                      \n");
  printf("                         Disciplina - Programação -- DCT1106                          \n");
  printf("                 Projeto Sistema de Agendamento para Clínicas Médicas                 \n");
  printf("                 Desenvolvido por: @isazvdd e  @Joyce8900 - Out, 2021                 \n");
  printf("                                                                                      \n");
  printf("######################################################################################\n");
  printf("                                                                                      \n");
  printf("                                                                                      \n");
  printf("~~~~~~~~~~~~~~~~~~~~~~ Sistema de Agendamento para Clínicas~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("                                                                                      \n");
  printf("///                Este projeto exemplo foi desenvolvido por:                      ///\n");
  printf("///  Discentes : Isadora Luana Maria Gomes de Azevedo / Joyce Oliveira dos Santos  ///\n");
  printf("///   E-mails: isadora.azevedo.700@ufrn.edu.br / joyce.santos.709@ufrn.edu.br      ///\n");
  printf("///                 Redes sociais:   @isazvdd e  @Joyce8900                        ///\n");
  printf("///      Repositório: https://github.com/Joyce8900/Clinica_Medica                  ///\n");
  printf("///                                                                                ///\n");
  printf("//////////////////////////////////////////////////////////////////////////////////////\n");
  printf("                                                                                      \n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void menuSobre(void) {

  limpaTela();
  printf("                                                                                    \n");
  printf("####################################################################################\n");
  printf("                                                                                    \n");
  printf("         Programa desenvolvido por alunos da Universidade Federal do Rio            \n");
  printf("          Grande do Norte, UFRN, do campus do Centro de Ensino Superior             \n");
  printf("           do Seridó - CERES -, do curso de Bacharelado em Sistemas de              \n");
  printf("         Informação, para a disciplina de Programação - DCT1106. O devido           \n");
  printf("          programa tem a finalidade de auxiliar pacientes que necessitem            \n");
  printf("         agendar consultas médicas, onde o mesmo poderá escolher entre as           \n");
  printf("          especialidades médicas que ofertadas e entre os especialistas             \n");
  printf("                               de sua preferência.                                  \n");
  printf("                                                                                    \n");
  printf("####################################################################################\n");
  printf("                                                                                    \n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

char menuPrincipal(void) {
  char opc;

  limpaTela();
  printf("\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
  printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
  printf("///               Departamento de Computação e Tecnologia                   ///\n");
  printf("///                   Disciplina DCT1106 - Programação                      ///\n");
  printf("///          Projeto Sistema de Agendamento para Clínicas Médicas           ///\n");
  printf("///           Developed by  @isazvdd and @joyce8900 - Out, 2021             ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///    = = = = = Sistema de Agendamento para Clínicas Médicas = = = = =     ///\n");
  printf("///                                                                         ///\n");
  printf("///            1. Paciente                                                  ///\n");
  printf("///            2. Equipe médica e Especialidades                            ///\n");
  printf("///            3. Exames                                                    ///\n");
  printf("///            4. Relatórios                                                    ///\n");
  printf("///            0. Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///            Escolha a opção desejada: ");
  do {
    scanf("%c", &opc);
    getchar();
  } while (!ehDigito(opc));
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
  return opc;
}
