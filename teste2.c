#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel pelas strings

int registro() //fun��o reponsavel por cadastrar os usu�rios
{
	//inicio cria��o das variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da cria��o da cria��o de variaveis/strings 
	
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

int consulta() //fun��o responsavel pela consulta dos uss�rios
{
	setlocale(LC_ALL, "Portuguese"); //definindo a liguagem	
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF que ser� consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o localizado\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do Usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}
int deletar()  //fun��o reponsavel por deletar os usu�rios
{
	char cpf[40];
	
	printf("Digite o Cpf a ser Deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuario n�o se encontra no sistema!\n");
		system("pause");
	}
	
}



int main()
{
	int opcao=0; //definindo vari�veis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
		
		system("cls"); //responsavel por limpar a tela
	
		setlocale(LC_ALL, "Portuguese"); //definindo a liguagem	
	
		printf("### Cart�rio da Ebac ###\n\n"); //inicio do menu
		printf("Escolha Sua Op��o Desejada: \n\n");
		printf("\t1 - Registrar Usu�rios\n ");
		printf("\t2 - Consultar Usu�rios\n ");
		printf("\t3 - Deletar Usu�rios\n ");
		printf("\t4 - Deseja Sair Do Sistema\n\n");
		printf("Op��o Desejada:"); //fim do menu

		scanf("%d", &opcao);	//armazenagem de escolha do usus�rio
	
		system("cls");
		
		
		switch(opcao)
		{
			case 1:
				registro(); //chamada de fun��es
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
				printf("op��o indiipon�vel\n");
				system("pause");
				break;
			
		}
		
	}
}
