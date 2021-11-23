#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Assinatura das funções
void menuProjeto(void);
void menuEquipe(void);
void menuSobre(void);

char menuPrincipal(void);
char menuCadastro(void);
void menuPaciente(void);
void menuCadastroPaciente(void);
void menuPesquisarPaciente(void);
void menuAlterarPaciente(void);
void cadastrarConsulta(void);

void menuFuncionarios(void);
void menuCurriculo(void);
void menuCFuncionarios(void);
void menuAtualizarF(void);
void menuPesquisarFuncionario(void);

void equipe(void);

void menuExames(void);
void examesDisponiveis(void);
void examesSolicitar(void);
void examesAcompanhar(void);
void examesResultados(void);

// Programa Principal
// int main(void)
// {
//   menuProjeto();
//   menuEquipe();
//   menuSobre();
//   menuPrincipal();
//   menuCadastro();
//   menuPaciente();
//   menuCadastroPaciente();
//   menuPesquisarPaciente();
//   menuAlterarPaciente();
//   cadastrarConsulta();
//   menuFuncionarios();
//   menuCurriculo();
//   menuCFuncionarios();
//   menuAtualizarF();
//   menuPesquisarFuncionario();
//   equipe();
//   exames();
//   exames();
//   examesDisponiveis();
//   examesSolicitar();
//   examesAcompanhar();
//   examesResultados();
//   return 0;
// }

// Programa principal
int main(void)
{
	char modulo;

	do
	{
		modulo = moduloPrincipal();
		switch (modulo)
		{
		case '1':
			moduloCadastro();
			break;
		case '2':
			moduloFuncionarios();
			break;
		case '3':
			moduloExames();
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

void menuProjeto(void)
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

void menuEquipe(void)
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

void menuSobre(void)
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

char menuPrincipal(void)
{
	char opc[2];

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
	printf("///            2. Equipe médica e Especialidades                            ///\n");
	printf("///            3. Exames                                                    ///\n");
	printf("///            0. Sair                                                      ///\n");
	printf("///                                                                         ///\n");
	printf("///            Escolha a opção desejada: ");
	scanf("%[0-9]", opc);
	printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
	getchar();
}

//Função Principal
char moduloPrincipal(void)
{
	char opcao;
	do
	{
		opcao = moduloPrincipal();
		switch (opcao)
		{
		case '1':
			menuCadastro();
			break;
		case '2':
			equipe();
			break;
		case '3':
			menuExames();
			break;
		}
	} while (opcao != '0');
	return 0;
}

char menuCadastro(void)
{
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
}

char moduloCadastro(void)
{
	char opcao;
	do
	{
		opcao = moduloCadastro();
		switch (opcao)
		{
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

void menuPaciente(void)
{
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

//Funcao Paciente
char moduloPaciente(void)
{
	char opcao;
	do
	{
		opcao = moduloPaciente();
		switch (opcao)
		{
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
}

void menuCadastroPaciente(void)
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

void menuPesquisarPaciente(void)
{
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

void menuAlterarPaciente(void)
{
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

void cadastrarConsulta(void)
{
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

void menuFuncionarios(void)
{

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
	printf("///           = = = = = = = = = Painel Funcionarios = = = = = =           ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///            1. Currículo                                               ///\n");
	printf("///            2. Cadastro de funcionário                                 ///\n");
	printf("///            3. Pesquisar funcionario                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///            0. Voltar ao menu anterior                                 ///\n");
	printf("///                                                                       ///\n");
	scanf("%[0-9]", opc);
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

//Funcao Funcionarios
char moduloFuncionarios(void)
{
	char opcao;
	do
	{
		opcao = moduloFuncionarios();
		switch (opcao)
		{
		case '1':
			menuCurriculo();
			break;
		case '2':
			menuCFuncionarios();
			break;
		case '3':
			menuPesquisarFuncionario();
			break;
		}

	} while (opcao != '0');
	return 0;
}

void menuCurriculo(void)
{
	char nome[20];
	char idade[2];
	char celular[11];
	char endereco[20];
	char email[15];
	char he[2300];
	char rg[10];
	char co[200];
	char ref[40];
	char vma[4];

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
	printf("///              Nome completo:                                           ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
	printf("///              Idade:                                                   ///\n");
	scanf("%[0-9]", idade);
	printf("///              Celular:                                                 ///\n");
	scanf("%[0-9/]", celular);
	printf("///              Endereço:                                                ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", endereco);
	printf("///              E-mail:                                                  ///\n");
	scanf("%[A-Za-z@-_. 0-9]", email);
	printf("///              Histórico Educacional:                                   ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", he);
	printf("///              Registro Geral:                                          ///\n");
	scanf("%[0-9]", rg);
	printf("///              Cargos Ocupados:                                         ///\n");
	scanf("%[[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", co);
	printf("///              Referência:                                              ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", ref);
	printf("///                                                                       ///\n");
	printf("///              Volta ao menu anterior:                                  ///\n");
	scanf("%[A-Z a-z]", vma);
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
	getchar();
}

void infomacoesCFuncionarios(void)
{
	char nome[29];
	char cargo[20];
	char atribuicoes[50];
	char endereco[15];
	char email[25];
	char rg[10];
	char historico[300];
	char vma[5];

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
	printf("///              Nome completo:                                           ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
	printf("///              Cargo Ocupado:                                           ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", cargo);
	printf("///              Atribuições:                                             ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", atribuicoes);
	printf("///              Endereço:                                                ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç 0-9]", endereco);
	printf("///              E-mail:                                                  ///\n");
	scanf("%[A-Za-z@!-_. 0-9]", email);
	printf("///              Registro Geral:                                          ///\n");
	scanf("%[0-9]", rg);
	printf("///              Histórico:                                               ///\n");
	scanf("%[0-12A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç,.]", historico);
	printf("///                                                                       ///\n");
	printf("///              Volta ao menu anterior;                                  ///\n");
	scanf("%[A-Z a-z]", vma);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
	getchar();
}

void menuAtualizarF(void)
{
	char nome[20];
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
	printf("///           = = = = Atualizar cadastro do funcionario  = = = =          ///\n");
	printf("///           = = = = = = = = = = = =  = = = = = = = = = = = = =          ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome completo:                                              ///\n");
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
	getchar();
}

void menuPesquisarFuncionario(void)
{
	char nome[25];
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
	scanf("%[A-ZÁÂÀÃÉÊÍÔÓÕÚÇ a-záâàãéêíôóõúç]", nome);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	printf("\t\t\t>>> Tecle <VOLTAR> para voltar ao menu anterior...\n");
	getchar();
}

void equipe(void)
{
	char opc[2];

	system("clear||cls");
	printf("\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
	printf("///         ========================================================        ///\n");
	printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
	printf("///         = = = Sistema de Agendamento para Clínicas Médicas = = =        ///\n");
	printf("///         = = = = = = = = = = = = = =  = = = = = = = = = = = = = =        ///\n");
	printf("///         ========================================================        ///\n");
	printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
	printf("///         = = = = = = = =     Equipe médica      = = = = = = = = =        ///\n");
	printf("///                                                                         ///\n");
	printf("///            1. Clínico Geral                                             ///\n");
	printf("///               Dr. Gustavo Santos                                        ///\n");
	printf("///               Dra. Vivian Duarte                                        ///\n");
	printf("///               Dra. Débora Queiroz                                       ///\n");
	printf("///            2. Dermatologista                                            ///\n");
	printf("///               Dr. Fábio Guedes                                          ///\n");
	printf("///               Dra. Yana Léda                                            ///\n");
	printf("///            3. Cardiologista                                             ///\n");
	printf("///               Dr. Thiago Midlej                                         ///\n");
	printf("///               Dra. Kamilla Morbeck                                      ///\n");
	printf("///            4. Pediatra                                                  ///\n");
	printf("///               Dra. Isabelly Lopes                                       ///\n");
	printf("///               Dr. Reginaldo Freire                                      ///\n");
	printf("///            5. Endocrinologista                                          ///\n");
	printf("///               Dra. Marília Cardoso                                      ///\n");
	printf("///               Dr. Octávio Neto                                          ///\n");
	printf("///            6. Oftalmologista                                            ///\n");
	printf("///               Dra. Débora Fernandes                                     ///\n");
	printf("///               Dr. Cláudio Albuquerque                                   ///\n");
	printf("///            7. Otorrinolaringologista                                    ///\n");
	printf("///               Dra. Juliana Simões                                       ///\n");
	printf("///               Dr. Marcus Galvão                                         ///\n");
	printf("///            8. Psiquiatria                                               ///\n");
	printf("///               Dr. Marcelo Modesto                                       ///\n");
	printf("///               Dr. Lucas Farnese                                         ///\n");
	printf("///            0. Sair                                                      ///\n");
	printf("///                                                                         ///\n");
	printf("///            Escolha a opção desejada:                                    ///\n");
	scanf("%[0-9]", opc);
	printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("\t\t>>> Tecle <ENTER> para continuar...>>>\n");
	getchar();
}

void menuExames(void)
{
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

//Funções exames
char moduloExames(void)
{
	char opcao;
	do
	{
		opcao = moduloExames();
		switch (opcao)
		{
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
}

void examesDisponiveis(void)
{
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

void examesSolicitar(void)
{
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

void examesAcompanhar(void)
{
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

void examesResultados(void)
{
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