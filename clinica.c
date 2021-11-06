#include <stdio.h>
#include <stdlib.h>

// Assinatura das funções
void informacoesProjeto(void);
void informacoesEquipe(void);
void informacoesSobre(void);
void informacoesPrincipal(void);
void informacoesCadastro(void);

void informacoesPaciente(void);
void informacoesCadastroPaciente(void);
void informacoesPesquisarPaciente(void);
void informacoesAlterarPaciente(void);

void informacoesFuncionarios(void);
void informacoesCurriculo(void);
void informacoesCFuncionarios(void);
void informacoesAtualizarF(void);
void infomacoesPesquisarFuncionario(void);

// Programa Principal
int main(void)
{
  informacoesProjeto();
  informacoesEquipe();
  informacoesSobre();
  informacoesPrincipal();
  informacoesCadastro();

  informacoesPaciente();
  informacoesCadastroPaciente();
  informacoesPesquisarPaciente();
  informacoesAlterarPaciente();

  informacoesFuncionarios();
  informacoesCurriculo();
  informacoesCFuncionarios();
  informacoesAtualizaF();
  informacoesPesquisarFuncionario();
  return 0;
}

// Funções
void informacoesProjeto(void)
{
  system("clear||cls");
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

void informacoesEquipe(void)
{
  system("clear||cls");
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

void informacoesSobre(void)
{
  system("clear||cls");
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

void informacoesPrincipal(void)
{
  char opc;

  system("clear||cls");
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
  printf("///            Escolha a opção desejada: ");
  scanf("%c", opc);
  getchar();
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacoesCadastro(void)
{
  char opc;

  system("clear||cls");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         ========================================================        ///\n");
  printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
  printf("///         = = = Sistema de Agendamento para Clínicas Médicas = = =        ///\n");
  printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
  printf("///         ========================================================        ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
  printf("///             1. Cadastro de novo paciente                                ///\n");
  printf("///             2. Cadastro de novo funcionario                             ///\n");
  printf("///             0. Sair                                                     ///\n");
  printf("///                                                                         ///\n");
  printf("///             Escolha a opção desejada: ");
  scanf("%c", opc);
  getchar();
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
  getchar();
}

void informacoesPaciente(void)
{
  char opc;

  system("clear||cls");
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
  printf("///           2. Atualizar o cadastro do paciente                         ///\n");
  printf("///             2.1 Pesquisar cadastro                                    ///\n");
  printf("///             2.2 Atualizar cadastro                                    ///\n");
  printf("///           0. Voltar ao menu anterior                                  ///\n");
  printf("///                                                                       ///\n");
  printf("///           Escolha a opção desejada: ");
  scanf("%c", opc);
  getchar();
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void informacoesCadastroPaciente(void)
{
  char nome[60];
  char data[11];
  char celular[12];
  char cpf[12];
  char email[60];
  char doenca[999];
  char trat[999];
  char exame[999];

  system("clear||cls");
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
  scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
  getchar();
  printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
  scanf("%[0-9/]", data);
  getchar();
  printf("///           Celular (com ddd):                                          ///\n");
  scanf("%[0-9/]", celular);
  getchar();
  printf("///           CPF (apenas números):                                       ///\n");
  scanf("%[0-9/]", cpf);
  getchar();
  printf("///           E-mail:                                                     ///\n");
  scanf("%[A-Za-z@-_.]", email);
  getchar();
  printf("///           Possui alguma doença crônica:                               ///\n");
  scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", doenca);
  getchar();
  printf("///           Tratamento em andamento:                                    ///\n");
  scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", trat);
  getchar();
  printf("///           Exames realizados:                                          ///\n");
  scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", exame);
  getchar();
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void informacoesPesquisarPaciente(void)
{
  system("clear||cls");
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
  printf("///           = = = = = Pesquisar cadastro do paciente = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  printf("///           Nome completo:                                              ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void informacoesAlterarPaciente(void)
{
  system("clear||cls");
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
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void informacoesFuncionarios(void)
{
  system("clear||cls");
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
  printf("///           = = = = = = = = = Painel Funcionarios = = = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
  printf("///            1. Currículo                                               ///\n");
  printf("///            2. Cadastro de funcionário                                 ///\n");
  printf("///              2.1  Atualização                                         ///\n");
  printf("///            3. Pesquisar funcionario                                   ///\n");
  printf("///                                                                       ///\n");
  printf("///            0. Voltar ao menu anterior                                 ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void informacoesCurriculo(void)
{
  system("clear||cls");
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
  printf("///           = = = = = = = = Currículo  = = = = = = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Nome completo:                                           ///\n");
  printf("///           2. Idade:                                                   ///\n");
  printf("///           3. Celular:                                                 ///\n");
  printf("///           4. Endereço:                                                ///\n");
  printf("///           5. E-mail:                                                  ///\n");
  printf("///           6. Histórico Educacional:                                   ///\n");
  printf("///           7. Registro Geral:                                          ///\n");
  printf("///           8. Cargos Ocupados:                                         ///\n");
  printf("///           9. Referência:                                              ///\n");
  printf("///                                                                       ///\n");
  printf("///           0. Volta ao menu anterior:                                  ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void infomacoesCFuncionarios(void)
{
  system("clear||cls");
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
  printf("///           = = = = = = = Cadastro Funcionarios  = = = = = =            ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
  printf("///                                                                       ///\n");
  printf("///           1. Nome completo:                                           ///\n");
  printf("///           2. Cargo Ocupado:                                           ///\n");
  printf("///           3. Atribuições:                                             ///\n");
  printf("///           4. Endereço:                                                ///\n");
  printf("///           5. E-mail:                                                  ///\n");
  printf("///           6. Registro Geral:                                          ///\n");
  printf("///           7. Histórico:                                               ///\n");
  printf("///                                                                       ///\n");
  printf("///           0. Volta ao menu anterior;                                  ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void informacoesAtualizarF(void)
{
  system("clear||cls");
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
  printf("///           = = = = Atualizar cadastro do funcionario  = = = =           ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  printf("///           Nome completo:                                              ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}

void informacoesPesquisarFuncionario(void)
{
  system("clear||cls");
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
  printf("///           = = = = = = = Pesquisar Funcionario  = = = = = = =          ///\n");
  printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
  printf("///                                                                       ///\n");
  printf("///           Nome completo:                                              ///\n");
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
  getchar();
}
