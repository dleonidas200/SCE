#include <stdio.h>
#include <stdlib.h>

char menuPrincipal(void) {
	char opcao;

system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =   Sistema de Controle de Estoque    = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
	printf("///            Developed by @dleonidas200 @MarlemM - Jan, 2021         	 	  ///\n");
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
    printf("///           4. Exibir relatorio                                       	  ///\n");
	printf("///           5. Pesquisar no estoque                                   	  ///\n");
	printf("///           6. Informações sobre o sistema                           		  ///\n");
	printf("///           0. Encerra o programa                                     	  ///\n");
    printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("Qual a sua opção:");
	scanf("%c", opcao);
	getchar();
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
		return opcao;
    
}