#include "paciente.h"
#include "funcionarios.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char menuCadastro(void) {
    char opc[2];

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
    printf("///                                                                         ///\n");
    printf("///             0. Sair                                                     ///\n");
    printf("///             Escolha a opção desejada: ");
    scanf("%[0-9]", opc);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
    getchar();
    return 0;
}

char moduloCadastro(void) {
    char opcao;
    do {
        opcao = moduloCadastro();
        switch (opcao) {
        case '1':
            menuPaciente();
            break;
        case '2':
            menuFuncionarios();
            break;
        }
        while (opcao != '0')
            ;
        return 0;
    } while (opcao != '0');
    return 0;
}

void menuPaciente(void) {
    char opc[2];

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
    printf("///           3. Pesquisar cadastro                                       ///\n");
    printf("///           4. Cadastrar uma nova consulta                              ///\n");
    printf("///           0. Voltar ao menu anterior                                  ///\n");
    printf("///                                                                       ///\n");
    printf("///           Escolha a opção desejada: ");
    scanf("%[0-9]", opc);
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

// Funcao Paciente
char moduloPaciente(void) {
    char opcao;
    do {
        opcao = moduloPaciente();
        switch (opcao) {
        case '1':
            menuCadastroPaciente();
            break;
        case '2':
            menuAlterarPaciente();
            break;
        case '3':
            menuPesquisarPaciente();
            break;
        case '4':
            cadastrarConsulta();
            break;
        }

    } while (opcao != '0');
    return 0;
}

void menuCadastroPaciente(void) {
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
    printf("///           Data de Nascimento (dd/mm/aaaa):                            ///\n");
    scanf("%[0-9/]", data);
    printf("///           Celular (com ddd):                                          ///\n");
    scanf("%[0-9]", celular);
    printf("///           CPF (apenas números):                                       ///\n");
    scanf("%[0-9]", cpf);
    printf("///           E-mail:                                                     ///\n");
    scanf("%[A-Za-z@-_.]", email);
    printf("///           Possui alguma doença crônica:                               ///\n");
    scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", doenca);
    printf("///           Tratamento em andamento:                                    ///\n");
    scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", trat);
    printf("///           Exames realizados:                                          ///\n");
    scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", exame);
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}

void menuPesquisarPaciente(void) {
    char nome[60];

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
    scanf("%c", nome);
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}

void menuAlterarPaciente(void) {
    char nome[60];

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
    scanf("%c", nome);
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}

void cadastrarConsulta(void) {
    char nome[60];
    char consulta[2];
    char especialidade[99];
    char especialista[99];

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
    printf("///           = = = = = = = = Cadastrar Consulta = = = = = = =            ///\n");
    printf("///           = = = = = = = = = = = =  = = = = = = = = = = = =            ///\n");
    printf("///                                                                       ///\n");
    printf("///        Nome completo:                                                 ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
    printf("///        Deseja cadastrar uma nova consulta? (1 para Sim ou 2 para Não) ///\n");
    scanf("%[0-9]", consulta);
    printf("///        Qual a especialidade que o Sr.(a) deseja consultar?            ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", especialidade);
    printf("///        Qual o especialista que o Sr.(a) deseja consultar?             ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", especialista);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}