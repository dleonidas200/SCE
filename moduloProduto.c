#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloProduto.h"
#include "validador.h"

typedef struct produto Produto;

void moduloProduto(void) {
	char opcao;
	do {
		opcao = menuProduto();
		switch(opcao) {
			case '1': 	cadastrarProduto();
						break;
			case '2': 	pesquisarProduto();
						break;
			case '3': 	atualizarProduto();
						break;
			case '4': 	excluirProduto();
						break;
		} 		
	} while (opcao != '0');
}

void cadastrarProduto(void) {
	Produto *pro;
	pro = telaCadastrarProduto();
	gravarProduto(pro);
	free(pro);
}

void pesquisarProduto(void) {
	Produto* pro;
	char* codBarras;

	codBarras = telaPesquisarProduto();
	pro = buscarProduto(codBarras);
	exibirProduto(pro);
	free(pro); 
	free(codBarras);
}


void atualizarProduto(void) {
	Produto* pro;
	char* codBarras;

	codBarras = telaAtualizarProduto();
	pro = buscarProduto(codBarras);
	if (pro == NULL) {
    	printf("\n\nProduto nao encontrado!\n\n");
  	} else {
		  pro = telaAttProduto(pro);
		  strcpy(pro->codBarras, codBarras);
		  regravarProduto(pro);
		  free(pro);
	}
	free(codBarras);
}
Produto* telaAttProduto(Produto *pro){
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Atualiza Produto = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome do produto: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", pro->nome);
	getchar();
	do {
		printf("///           Data de Cadastro (dd/mm/aaaa):  ");
		scanf("%[0-9/]", pro->cad);
		getchar();
	} while (!validarVal(pro->cad));
	pro->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
  	return pro;
}

void excluirProduto(void) {
	Produto* pro;
	char *codBarras;

	codBarras = telaExcluirProduto();
	pro = (Produto*) malloc(sizeof(Produto));
	pro = buscarProduto(codBarras);
	if (pro == NULL) {
    	printf("\n\nProduto nao encontrado!\n\n");
  	} else {
		  pro->status = False;
		  regravarProduto(pro);
		  free(pro);
		  printf("\n==== Produto Excluido ===\n");
	}
	free(codBarras);
}

char menuProduto(void) {
	char op;
	
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = =  Menu Produto = = = = = = = = =           ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo produto                                ///\n");
	printf("///           2. Pesquisar os dados de um produto                         ///\n");
	printf("///           3. Atualizar o cadastro de um produto                       ///\n");
	printf("///           4. Excluir um produto do sistema                            ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///           Escolha a opcao desejada: ");
	scanf("%c", &op);
	getchar();
	delay(1);
	return op;
}

void telaErroArquivoProduto(void) {
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Nao foi possivel acessar o arquivo = = =             ///\n");
	printf("///           = = = = com informações sobre os produtos = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
	printf("///           = = =  mas este programa sera finalizado! = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}


Produto* telaCadastrarProduto(void) {
	Produto *pro;
	pro = (Produto*) malloc(sizeof(Produto));

	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Produto = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	do {
		printf("///           Codigo de Barras (apenas numeros): ");
		scanf("%[^\n]", pro->codBarras);
		getchar();
	} while (!validarCodBarras(pro->codBarras));
	printf("///           Nome do produto: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", pro->nome);
	getchar();
	do {
		printf("///           Data de Cadastro (dd/mm/aaaa):  ");
		scanf("%[0-9/]", pro->cad);
		getchar();
	} while (!validarVal(pro->cad));
	pro->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
  	return pro;
}

char* telaPesquisarProduto(void) {
	char* codBarras;

	codBarras = (char*) malloc(12*sizeof(char));
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Pesquisar Produto = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///           Informe o codigo de barras do produto (apenas numeros): ");
	scanf("%[0-9]", codBarras);
	getchar();
	delay(1);
  	return codBarras;
}


char* telaAtualizarProduto(void) {
	char* codBarras;

	codBarras = (char*) malloc(12*sizeof(char));
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Atualizar Produto = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///           Informe o codigo de barras do produto (apenas numeros): ");
	scanf("%[0-9]", codBarras);
	getchar();
	delay(1);
  	return codBarras;
}


char* telaExcluirProduto(void) {
	char *codBarras;

	codBarras = (char*) malloc(12*sizeof(char));
  	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///        ===================================================            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
	printf("///        ===================================================            ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///        ===================================================            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Excluir Produto  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///           Informe o codigo de barras do produto (apenas numeros): ");
	scanf("%[0-9]", codBarras);
	getchar();
	delay(1);
	return codBarras;
}

void gravarProduto(Produto* pro) {
	FILE* fp;

	fp = fopen("produtos.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoProduto();
	}
	fwrite(pro, sizeof(Produto), 1, fp);
	fclose(fp);
}


Produto* buscarProduto(char* codBarras) {
	FILE* fp;
	Produto* pro;

	pro = (Produto*) malloc(sizeof(Produto));
	fp = fopen("produtos.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoProduto();
	}
	while(fread(pro, sizeof(Produto), 1, fp)) {
		if ((strcmp(pro->codBarras, codBarras) == 0) && (pro->status == True)) {
			fclose(fp);
			return pro;
		}
	}
	fclose(fp);
	return NULL;
}


void exibirProduto(Produto* pro) {

	if (pro == NULL) {
		printf("\n= = = Produto Inexistente = = =\n");
	} 
	else if(pro->status == 1) {                                                               //#erro01
		printf("\n= = = Produto Cadastrado = = =\n");
		printf("Codigo de Barras: %s\n", pro->codBarras);
		printf("Nome do produto: %s\n", pro->nome);
		printf("Data de Cad: %s\n", pro->cad);
		printf("Status: %d\n", pro->status);
	}
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}


void regravarProduto(Produto* pro) {
	int achou;
	FILE* fp;
	Produto* proLido;

	proLido = (Produto*) malloc(sizeof(Produto));
	fp = fopen("produtos.dat", "r+b");
	if (fp == NULL) {
		telaErroArquivoProduto();
	}
	achou = False;
	while(fread(proLido, sizeof(Produto), 1, fp) && !achou) {
		if (strcmp(proLido->codBarras, pro->codBarras) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Produto), SEEK_CUR);
        	fwrite(pro, sizeof(Produto), 1, fp);
		}
	}
	fclose(fp);
	free(proLido);
}

char* buscarcodPNome(char* nome) {
	FILE* fp;
	Produto* pro;
	pro = (Produto*) malloc(sizeof(Produto));
	fp = fopen("produtos.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoProduto();
	}
	while(fread(pro, sizeof(Produto), 1, fp)) {
		if ((strcmp(pro->nome, nome) == 0) && (pro->status == True)) {
			fclose(fp);
			return pro->codBarras;
		}
	}
	fclose(fp);
	return NULL;
}