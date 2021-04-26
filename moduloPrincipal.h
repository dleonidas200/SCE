#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "validador.h"

char menuPrincipal(void){
	
	int opcao;
	
	system("cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
	printf("///          = = = =   Sistema de Controle de Estoque    = = = =              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
	printf("///          ===================================================              ///\n");
	printf("///            Developed by @dleonidas200 @MarlemM - Jan, 2021         	      ///\n");
	printf("///                                                                      	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                      	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =              	  ///\n");
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             	  ///\n");
	printf("///                                                                      	  ///\n");
	printf("///           1. Cadastrar produto                                       	  ///\n");
	printf("///           2. Saida de produto                                             ///\n");
	printf("///           3. Atualizar produto                                       	  ///\n");
    printf("///           4. Exibir historico                                       	  ///\n");
	printf("///           5. Pesquisar no sistema                                     	  ///\n");
	printf("///           6. Sobre o sistema                                    		  ///\n");
	printf("///           0. Encerra o programa                                     	  ///\n");
    printf("///                                                                     	  ///\n");
	printf("///           Escolha a opcao desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	
	do{
		printf("Informe a opcao: ");
		scanf("%d", &opcao);
		getchar();
		
		printf("%d \n", opcao);
		
		
	}while(!validarOpcao(opcao, 6));
	return opcao;
}

void validarArquivo(FILE *pont){
	pont = fopen("estoque.txt", "r");
	if(pont == NULL){
		pont = fopen("estoque.txt", "w");
	}
	fclose(pont);
}


