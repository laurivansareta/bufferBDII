/*
Nomes:
Laurivan Sareta - laurivan_sareta@hotmail.com
Lucas Kranz
Douglas Borges
*/

#include "buffend.h"
#include <stdio.h>

//DECLARAÇÃO DE FUNÇÕES AUXILIARES
void insereCampos(table *t);
void insereValores();

//FUNÇÕES AUXILIARES
void insereCampos(table *t)
{
	int erro;

	t = adicionaCampo(t, "Nome", 'S', 20);
	t = adicionaCampo(t, "Idade", 'I', (sizeof(int)));
	t = adicionaCampo(t, "Sexo", 'C', (sizeof(char)));
	t = adicionaCampo(t, "Obs", 'S', 40);
	t = adicionaCampo(t, "Media", 'D', (sizeof(double)));

	erro = finalizaTabela(t);

	if(erro != SUCCESS){
		printf("Erro %d: na função finalizaTabela().\n", erro);
		return;
	}
}

void insereValores()
{
	column *c = NULL;
	int erro;

	c = insereValor(c, "Nome", "Um");
	c = insereValor(c, "Idade", "40");
	c = insereValor(c, "Sexo", "F");
	c = insereValor(c, "Obs", "Obs. Um");
	c = insereValor(c, "Media", "2.5");
	

	c = insereValor(c, "Nome", "Dois");
	c = insereValor(c, "Idade", "20");
	c = insereValor(c, "Sexo", "M");
	c = insereValor(c, "Obs", "Obs. Dois");
	c = insereValor(c, "Media", "1.67");

	c = insereValor(c, "Nome", "Três");
	c = insereValor(c, "Idade", "30");
	c = insereValor(c, "Sexo", "F");
	c = insereValor(c, "Obs", "Obs. Três");
	c = insereValor(c, "Media", "1.456");

	erro = finalizaInsert("Pessoa", c);

	if(erro != SUCCESS){
		printf("Erro %d: na função finalizaInsert()\n", erro);
		return;
	}
}

int main()
{
	//VARIAVEIS
	int erro;
	//char nomeTab[30];
	table *t = NULL;
	column *c = NULL;


	//CRIA TABELA
	t = iniciaTabela("Pessoa");

	//INSERE ATRIBUTOS NA TABELA
	insereCampos(t);

	//TRATAMENTO PARA VER SE CRIOU A TABELA, SE NAO DEU CERTO FINALIZA O PROGRAMA.
	if(t == ERRO_NOME_TABELA_INVALIDO){
		printf("Erro: na função iniciaTabela(). Nome da tabela já existente.\n");
		return 0;
	}

	//POPULA A TABELA
	void insereValores();

	erro = finalizaInsert("Pessoa", c);

	//TRATAMENTO DE INSERÇÃO
	if(erro != SUCCESS){
		printf("Erro %d: na função finalizaInsert()\n", erro);
		return 0;
	}





	printf("teste");
	return 0;
}