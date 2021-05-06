#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "validador.h"
#include "moduloEntrada.h"
#include "moduloSaida.h"


void moduloSaida(void){
     char opcao;
	do {
		opcao = menuSaida();
		switch(opcao) {
			case '1': 	
					realizarSaida();
						break;
		} 		
	} while (opcao != '0');

}
char menuSaida(void){
    char op;
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =            Menu Saida               = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =    Menu Saida   = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Para fazer a retirada de produtos                        ///\n");
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

void realizarSaida(void){
	char *codigo;
	codigo = telaInformarSaida();
	fazerRetirada(codigo);

	free(codigo);
}
char* telaInformarSaida(void) {
	char *codBarras;
	codBarras = (char*)malloc(12*sizeof(char));
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
	printf("///           = = = = = = = =   Realizar Saida  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	do {
		printf("///           Informe o codigo de barras do Produto: ");
		scanf("%[^\n]",codBarras);
		getchar();
	} while (!validarCodBarras(codBarras));
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
  	return codBarras;
}
int fazerRetirada(char* cod){
	FILE* fp;
	Entrada* proLido;
	int achou = False;
	proLido = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entradas.dat", "r+b");
	if (fp == NULL) {
		printf("Arquivo Vazio \n");
	}
	while(fread(proLido, sizeof(Entrada), 1, fp) && !achou) {
		if (strcmp(proLido->codBarras,cod) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Entrada), SEEK_CUR);
			proLido->quantidade=pegarQuantidadeRetirada();
        	fwrite(proLido, sizeof(Entrada), 1, fp);
		}
	}
	fclose(fp);
	free(proLido);

}
int pegarQuantidadeRetirada(){
	int quantidade=0;
	printf("Informe a quantidade que vc quer retirar desse Produto: ");
	scanf("%d",&quantidade);
	return quantidade;
}