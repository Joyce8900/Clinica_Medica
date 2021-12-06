#include "exames.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void menuExames(void) {
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
    printf("///           = = = = = = = = =     Exames    = = = = = = = = =           ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
    printf("///                                                                       ///\n");
    printf("///           1. Exames disponiveis                                       ///\n");
    printf("///           2. Solicitar exames médicos                                 ///\n");
    printf("///           3. Acompanhar andamento e prazos                            ///\n");
    printf("///           4. Resultados                                               ///\n");
    printf("///                                                                       ///\n");
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

// Funções exames
char moduloExames(void) {
    char opcao;
    do {
        opcao = moduloExames();
        switch (opcao) {
        case '1':
            examesDisponiveis();
            break;
        case '2':
            examesSolicitar();
            break;
        case '3':
            examesAcompanhar();
            break;
        case '4':
            examesResultados();
            break;
        }

    } while (opcao != '0');
    return 0;
}

void examesDisponiveis(void) {
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
    printf("///        = = = = = = = = = Exames Disponiveis      = = = = = = =        ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
    printf("///                                                                       ///\n");
    printf("///           1. Exames de sangue                                         ///\n");
    printf("///           2. Exames patologicos                                       ///\n");
    printf("///           3. exames neurológicos                                      ///\n");
    printf("///           4. Exames de imagem                                         ///\n");
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

void examesSolicitar(void) {
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
    printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
    printf("///          = = = = = = = = Solicitar exames = = = = = = = = =           ///\n");
    printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("///           Nome completo:                                              ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}

void examesAcompanhar(void) {
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
    printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
    printf("///          = = = = = = = Acompanhar andamento = = = = = = = =           ///\n");
    printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("///           Nome completo:                                              ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}

void examesResultados(void) {
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
    printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
    printf("///          = = = = = = = = = = Resultados = = = = = = = = = =           ///\n");
    printf("///          = = = = = = = = = = = = =  = = = = = = = = = = = =           ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("///           Nome completo:                                              ///\n");
    scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
    getchar();
}