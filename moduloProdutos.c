#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "moduloProdutos.h"

//Struct produto = estrutura de um produto cadastrado no sistema
//Struct registro = estrutura do registro de um cadastro
void registrar(FILE *pont, struct Registro reg){
	int r;
	char *texto;
	pont = fopen("estoque.txt", "a");
	
	r = fputs("--",pont);
	r = fputs(reg.produto.codBarras, pont);
	r = fputs("--",pont);
	r = fputs(reg.produto.nomeItem, pont);
	r = fputs("--",pont);
	r = fputs(reg.produto.dataValidade, pont);
	r = fputs("--", pont);
	r = fputs(reg.inout, pont);
	r = fputs("--",pont);
	r = fputs(reg.dataCadastro, pont);
	r = fputs("\n",pont);
	
	if(r = EOF){
		printf("Erro ao registrar!\n");
	}
	fclose(pont);
}
//Fun��o cadastrar = cadastra os produtos no sistema do estoque

void cadastrar(FILE *pont){
	int qtde;
	struct Registro registro;
	struct Produto p;
	registro.inout[0] = 'i';
	system("cls");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =           	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________            ///\n");
    printf("///                                                                   		  ///\n");
    printf("///            *Cadastrar Novo Produto:                              		  ///\n");
    printf("///                                                                    		  ///\n");
	getchar();
	printf("///            - Nome: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",p.nomeItem);
	getchar();
	printf("///            - Quantidade: ");
    scanf("%d", &qtde);
	getchar();
	printf("///            - Data de Validade: ");
    scanf("%[0-9/]",p.dataValidade);
	getchar();
	printf("///            - Data de Cadastro: ");
    scanf("%[0-9/]",registro.dataCadastro);
	getchar();
	
	int i = 0;
    while(i < qtde){
    	printf("/// Inserir o Codigo de Barras (%d): ", i+1);
   		scanf("%[0-9]",p.codBarras);
    	getchar();
	//	p.codBarras = codBarras;
	//	p.dataValidade = dataValidade;
	//	p.nomeItem = nomeItem;
		registro.produto = p;
	//	registro.dataCadastro = dataCadastro;
	//	registro.qtde = qtde;
	    printf("///        _______________________________________________________     		  ///\n");
	    printf("///                                                                 		  ///\n");
	    printf("///         Produto cadastrado com sucesso !                           		  ///\n");
	    printf("///        _______________________________________________________  		  ///\n");
	    printf("///                                                                 		  ///\n");
	    printf("///              Codigo de Barras: %s \n", p.codBarras);
	    printf("///              Nome: %s \n", p.nomeItem);
	    printf("///              Data de Validade: %s \n", p.dataValidade);
	    printf("///              Data de Cadastro: %s \n", registro.dataCadastro);
	    printf("///        _______________________________________________________     		  ///\n");
	    printf("///                                                                           ///\n");
	    printf("///                >>> Tecle <ENTER> para continuar...                        ///\n");
		printf("///////////////////////////////////////////////////////////////////////////////\n\n");
	    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
	    system("cls");
	    
	    registrar(pont, registro);
	    
    	i++;
	}
}
int pesquisar(FILE *pont, int opPesquisa){
	
	char *pesquisa;
	int pos;
	
	system("cls");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            *Pesquisar Um Produto do Sistema:                       		  ///\n");
	printf("///                                                                           ///\n");
    switch(opPesquisa){
    	case 1:
    		printf("///            - Codigo de Barras:                                  	      ///\n");
		    scanf("%[0-9]", &pesquisa);
	    	printf("///        _______________________________________________________      	  ///\n");
    		break;
		case 2:
    		printf("///            - Nome do Item:                                  	      ///\n");
		    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", &pesquisa);
	    	printf("///        _______________________________________________________      	  ///\n");
    		break;
    	case 3:
    		printf("///            - Data de Validade:                                  	      ///\n");
		    scanf("%[0-9/]", &pesquisa);
	    	printf("///        _______________________________________________________      	  ///\n");
    		break;
    	case 4:
    		printf("///            - Data de Cadastro:                                  	      ///\n");
		    scanf("%[0-9/]", &pesquisa);
	    	printf("///        _______________________________________________________      	  ///\n");
    		break;
    	case 5:
    		printf("///            - Data de Retirada:                                  	      ///\n");
		    scanf("%[0-9/]", &pesquisa);
	    	printf("///        _______________________________________________________      	  ///\n");
    		break;
    	case 6:
    		printf("///            - Tipo de Registro:                                  	      ///\n");
		    scanf("%[IOio]", &pesquisa);
	    	printf("///        _______________________________________________________      	  ///\n");
    		break;
    	default:
    		printf("error");
    		break;
	}
    
    //int i = 0;
    //while(i < sizeof(reg)){
    //	if(reg[i].produto.codBarras == codBarras){
    //		pos = i;
    //		break;
	//	}
	//	i++;
	//}
}
int menuPesquisar(FILE *pont){
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
	printf("///           = = = = = = Formas de Pesquisa  = = = = = = = =              	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             	  ///\n");
	printf("///                                                                      	  ///\n");
	printf("///           1. Pesquisar por Codigo de Barras	                           	  ///\n");
	printf("///           2. Pesquisar por Nome do produto                                ///\n");
	printf("///           3. Pesquisar por Data de Validade                           	  ///\n");
    printf("///           4. Pesquisar por Data de Cadastro                            	  ///\n");
	printf("///           5. Pesquisar por Data de Saida                               	  ///\n");
	printf("///           6. Pesquisar por Tipo de Registro(in/out)               		  ///\n");
	printf("///           0. Voltar ao menu principal                                  	  ///\n");
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
	}while(opcao < 7);
	return opcao;
}
void retirar(){
	char codBarras[13];
	char resposta[2];
	
	system("cls");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            *Excluir Um Produto do Sistema:                       		  ///\n");
	printf("///                                                                           ///\n");
    printf("///            - Codigo de Barras:                                   	      ///\n");
    scanf("%[0-9]", codBarras);
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            PRODUTO LOCALIZADO!                                  		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Codigo de Barras:                                  		  ///\n");
    printf("///            - Nome:                                              		  ///\n");
    printf("///            - Data de Validade:                                  		  ///\n");
	printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");  
    printf("///            Nao foi possivel encontrar o produto cadastrado com o     	  ///\n");    
    printf("///            codigo de barras informado.                           		  ///\n");    
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Confirmar opera��o (S/n): S                        		  ///\n");
    scanf("%[SNsn]", &resposta);
	printf("///                                                                 		  ///\n");
    printf("///            Produto excluido com sucesso!                        		  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Confirmar opera��o (S/n): N                        		  ///\n");
    scanf("%[SNsn]", &resposta);
	printf("///                                                                 		  ///\n");
    printf("///            Opera��o cancelada!                                  		  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void excluir(FILE *pont){
	
}


