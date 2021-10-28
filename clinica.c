#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
void informacoesProjeto(void);
void informacoesEquipe(void);
void informacoesSobre(void);
void informacoesPrincipal(void);
void informacoesCadastro(void);
void informacaoPaciente(void);
void informacaoCadastroPaciente(void);

// Programa Principal
int main(void)
{
  informacoesProjeto();
  informacoesEquipe();
  informacoesSobre();
  informacoesPrincipal();
  informacoesCadastro();
  informacaoPaciente();
  informacaoCadastroPaciente();
  return 0;
}

// Funções
void informacoesProjeto(void)
{
  printf("                                                               \n");
  printf("###############################################################\n");
  printf("         Universidade Federal do Rio Grande do Norte           \n");
  printf("         CERES - Centro de Ensino Superior do Sérido           \n");
  printf("        DCT - Departamento de Computação e Tecnologia          \n");
  printf("             Disciplina - Programação - DCT1106                \n");
  printf("    Projeto Sistema de Agendamento para Clínicas Médicas       \n");
  printf("    Desenvolvido por: @isazvdd e  @Joyce8900 - Out, 2021       \n");
  printf("###############################################################\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacoesEquipe(void)
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
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacoesSobre(void)
{
  printf("                                                                                    \n");
  printf("####################################################################################\n");
  printf("         Programa desenvolvido por alunos da Universidade Federal do Rio            \n");
  printf("          Grande do Norte, UFRN, do campus do Centro de Ensino Superior             \n");
  printf("           do Seridó - CERES -, do curso de Bacharelado em Sistemas de              \n");
  printf("         Informação, para a disciplina de Programação - DCT1106. O devido           \n");
  printf("          programa tem a finalidade de auxiliar pacientes que necessitem            \n");
  printf("         agendar consultas médicas, onde o mesmo poderá escolher entre as           \n");
  printf("          especialidades médicas que ofertadas e entre os especialistas             \n");
  printf("                               de sua preferência.                                  \n");
  printf("####################################################################################\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacoesPrincipal(void)
{
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
  printf("///            1. Cadastro                                                  ///\n");
  printf("///            2. Especialidades                                            ///\n");
  printf("///            3. Equipe médica                                             ///\n");
  printf("///            4. Exames disponíveis                                        ///\n");
  printf("///            5. Agendamento de Exames                                     ///\n");
  printf("///            6. Resultados de Exames                                      ///\n");
  printf("///            0. Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacoesCadastro(void)
{
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///    = = = = = Sistema de Agendamento para Clínicas Médicas = = = = =     ///\n");
  printf("///                                                                         ///\n");
  printf("///    = = = = =                  Cadastro                    = = = = =     ///\n");
  printf("///                                                                         ///\n");
  printf("///             1. Cadastro de novo paciente                                ///\n");
  printf("///             2. Cadastro de novo funcionario                             ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             0. Sair                                                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacaoPaciente(void)
{
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///           = = = = = = = = = Menu Paciente = = = = = = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Cadastrar um novo paciente                               ///\n");
  printf("///           3. Atualizar o cadastro do paciente                         ///\n");
  printf("///           0. Voltar ao menu anterior                                  ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void informacaoCadastroPaciente(void)
{
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///           = = = = = = = = Cadastrar Paciente = = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  printf("///           Nome completo:                                              ///\n");
  printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
  printf("///           Celular:                                                    ///\n");
  printf("///           CPF:                                                        ///\n");
  printf("///           E-mail:                                                     ///\n");
  printf("///           Possui alguma doença crônica:                               ///\n");
  printf("///           Exames realizados:                                          ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void informacaoAtualizarCadastroPaciente(void)
{
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        = = = Sistema de Agendamento para Clínicas Médicas = = =       ///\n");
  printf("///        = = = = = = = = = = = = = =  = = = = = = = = = = = = = =       ///\n");
  printf("///        ========================================================       ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///           = = = = = Atualizar cadastro do paciente = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  printf("///           Nome completo:                                              ///\n");
  printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
  printf("///           Celular:                                                    ///\n");
  printf("///           CPF:                                                        ///\n");
  printf("///           E-mail:                                                     ///\n");
  printf("///           Possui alguma doença crônica:                               ///\n");
  printf("///           Exames realizados:                                          ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}