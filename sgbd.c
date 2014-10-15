/*
Nomes:
Laurivan Sareta - laurivan_sareta@hotmail.com
Lucas Kranz
Douglas Borges
*/

#include "buffend.h"
#include <stdio.h>

int main()
{
	//VARIAVEIS
	int erro;
	//char nomeTab[30];
	table *t = NULL;
	column *c = NULL;

	menu();
	
	//CRIA TABELA
	//t = iniciaTabela("Pessoa");

	//INSERE ATRIBUTOS NA TABELA
	//insereCampos(t);
/*
	//TRATAMENTO PARA VER SE CRIOU A TABELA, SE NAO DEU CERTO FINALIZA O PROGRAMA.
	if(t == ERRO_NOME_TABELA_INVALIDO){
		printf("Erro: na função iniciaTabela(). Nome da tabela já existente.\n");
		return 0;
	}

	//POPULA A TABELA
	void insereValores();
	printf("\nOK");
	erro = finalizaInsert("Pessoa", c);

	//TRATAMENTO DE INSERÇÃO
	if(erro != SUCCESS){
		printf("Erro %d: na função finalizaInsert()\n", erro);
		return 0;
	}



*/

	printf("\n SEM ERROS \n");
	return 0;
}