#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char menuPrincipal(void){
	
	char opcao;
	
	system("cls")
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
    printf("///           4. Exibir historico                                       	  ///\n");
	printf("///           5. Pesquisar                                              	  ///\n");
	printf("///           6. Sobre o sistema                                    		  ///\n");
	printf("///           0. Encerra o programa                                     	  ///\n");
    printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	
	do{
		printf("Informe a opcao: ");
		scanf("%c", &opcao)
		getchar();
		
		printf("%c \n", opcao);
		
		
	}while(opcao < '7');
	return opcao;
}
