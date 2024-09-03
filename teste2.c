#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsavel pelas strings

int registro() //função reponsavel por cadastrar os usuários
{
	//inicio criação das variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da criação da criação de variaveis/strings 
	
	printf("digite cpf para cadastro:");
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salva valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o Cargo a ser Cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
}

int consulta() //função responsavel pela consulta dos ussários
{
	setlocale(LC_ALL, "Portuguese"); //definindo a liguagem	
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF que será consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não localizado\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do Usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}
int deletar()  //função reponsavel por deletar os usuários
{
	char cpf[40];
	
	printf("Digite o Cpf a ser Deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuario não se encontra no sistema!\n");
		system("pause");
	}
	
}



int main()
{
	int opcao=0; //definindo variáveis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
		
		system("cls"); //responsavel por limpar a tela
	
		setlocale(LC_ALL, "Portuguese"); //definindo a liguagem	
	
		printf("### Cartório da Ebac ###\n\n"); //inicio do menu
		printf("Escolha Sua Opção Desejada: \n\n");
		printf("\t1 - Registrar Usuários\n ");
		printf("\t2 - Consultar Usuários\n ");
		printf("\t3 - Deletar Usuários\n ");
		printf("\t4 - Deseja Sair Do Sistema\n\n");
		printf("Opção Desejada:"); //fim do menu

		scanf("%d", &opcao);	//armazenagem de escolha do ususário
	
		system("cls");
		
		
		switch(opcao)
		{
			case 1:
				registro(); //chamada de funções
				break;
				
			case 2:
				consulta();
				break;
				
			case 3:
				deletar();
				break;
				
			case 4:
				printf("Obrigado, Sistema Desligando");
				return 0;
				break;
			
			default:
				printf("opção indiiponível\n");
				system("pause");
				break;
			
		}
		
	}
}
