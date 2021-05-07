#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "moduloEntrada.h"
#include "moduloProduto.h"
#include "moduloRelatorio.h"
#include "validador.h"

void moduloRelatorio(void){
    char opcao;
	do {
		opcao = menuRelatorio();
		switch(opcao) {
			case '1':
				exibirTodasEntradas();
					break;
			case '2':
				exibirEntradaEspecifica();
					break;
		} 		
	} while (opcao != '0');
}
char menuRelatorio(void) {
	char op;
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Modulo Relatorio             = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Listar Todas as entradas                                 ///\n");
	printf("///           2. Lista todas as ocorrencias de entrdas                    ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opcao desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return op;
}
void exibirTodasEntradas(){
	FILE* fp;
	Entrada* pro;

	pro = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entradas.dat", "rb");
	if (fp != NULL) {
		while(fread(pro, sizeof(Entrada), 1, fp)) {
			printf("\n= = = Entrada Cadastrado = = =\n");
			printf("Codigo de Barras: %s\n", pro->codBarras);
			printf("Data de Entrada: %s\n", pro->datDentrada);
			printf("Quntidade do Produto: %d\n",pro->quantidade);
		}
	}else{
		printf("Não existe nenhum dado \n");
	}
	free(pro);
	fclose(fp);
	delay(5000);
}
void exibirEntradaEspecifica(){
	char* cod = (char*) malloc(12*sizeof(char));
	char* nome = (char*) malloc(51*sizeof(char));
	printf("Insira o nome do produto: ");
	scanf("%[a-z]",nome);
	getchar();
	cod = buscarcodPNome(nome);
	FILE* fp;
	Entrada* pro;
	pro = (Entrada*) malloc(sizeof(Entrada));

	fp = fopen("Entradas.dat", "rb");
	if (fp != NULL) {
		while(fread(pro, sizeof(Entrada), 1, fp)){
			if(strcmp(pro->codBarras,cod)==0){
				printf("\n= = = Entrada Cadastrado = = =\n");
				printf("Codigo de Barras: %s\n", pro->codBarras);
				printf("Data de Entrada: %s\n", pro->datDentrada);
				printf("Quntidade do Produto: %d\n",pro->quantidade);	
			}
		}
	}else{
		printf("Não existe nenhum dado \n");
	}
	free(pro);
	fclose(fp);
	delay(5000);
}
