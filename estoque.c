/////////////////////////////////////////////////////////////////////////////////////////////\n");
///                                                                                       ///\n");
///                     Universidade Federal do Rio Grande do Norte                       ///\n");
///                          Centro de Ensino Superior do Seridó                          ///\n");
///                        Departamento de Computação e Tecnologia                 		  ///\n");
///                          Disciplina DCT1106 -- Programação                     		  ///\n");
///                       Projeto Sistema de Controle de Estoque                   		  ///\n");
///                  Developed by  @dleonidas200 @MarlemM - Jan, 2021            		  ///\n");
///                                                                         			  ///\n");
/////////////////////////////////////////////////////////////////////////////////////////////\n");

#include <stdio.h>
#include <stdlib.h>


/// 
/// Assinaturas das funções
///
void menuSobre(void);
void menuPrincipal(void);
void menuProduto(void);
void menuAtualizar(void);
void telaInventario(void);
void menuSaidaproduto(void);
void telaRelatorio(void);


///
/// Programa Principal
///
int main(void) {
    menuSobre();
    menuPrincipal();
    menuProduto();
    menuAtualizar();
    telaInventario();
    menuSaidaproduto();
	telaRelatorio();
    return 0;

    }


void menuSobre(void) {
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                           ///\n");
    printf("///              Universidade Federal do Rio Grande do Norte                  ///\n");
    printf("///                  Centro de Ensino Superior do Seridó                      ///\n");
    printf("///                Departamento de Computação e Tecnologia                    ///\n");
    printf("///                   Disciplina DCT1106 -- Programação                       ///\n");
    printf("///                 Projeto Sistema de Controle de Estoque                    ///\n");
    printf("///             Developed by  @dleonidas200 @MarlemM - Jan, 2021              ///\n");
    printf("///                                                                           ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                           ///\n");
    printf("///       = = = = =      Sistema de Controle de Estoque       = = = = =       ///\n");
    printf("///                                                                           ///\n");
    printf("///   As empresas da atualidade utilizam complexos sistemas gerenciais para,  ///\n");
    printf("///   entre várias outras funções, gerenciar seu estoque de produtos. Geren-  ///\n");
    printf("///   ciar estoques de maneira eficiente, sem a ajuda de um sistema automa-   ///\n");
    printf("///   tizado, é algo difícil para as pequenas empresas e impossível para      ///\n");
    printf("///   as grandes. O presente projeto tem como objetivo propor um software     ///\n");
    printf("///   que ofereça funcionalidades básicas relacionadas ao controle de inven-  ///\n");
    printf("///   tário de uma empresa, visando facilitar a administração de estoques     ///\n");
    printf("///   de produtos dos mais diversos tipos.                                    ///\n");
    printf("///                                                                           ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");


void menuPrincipal(void) {

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
	printf("///           4. Exibir inventario                                       	  ///\n");
    printf("///           5. Exibir relatorio                                       	  ///\n");
	printf("///           6. Pesquisar no estoque                                   	  ///\n");
	printf("///           0. Encerra o programa                                     	  ///\n");
    printf("///           x. Informações sobre o sistema                           		  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
    
}

void menuProduto(void) {
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
	printf("///                                                                    	      ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = =                 	  ///\n");
	printf("///           = = = = = = =  CADASTRO DE PRODUTOS = = = =               	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = =              		  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           1. Cadastrar um novo produto                              	  ///\n");
	printf("///           2. Pesquisar os dados de um produto                       	  ///\n");
	printf("///           3. Atualizar produto                                      	  ///\n");
	printf("///           4. Excluir um produto do sistema                          	  ///\n");
	printf("///           0. Voltar ao menu anterior                                	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void menuSaidaproduto(void) {
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
	printf("/////////////////////////////////////////////////////////////////////////////////\n");                                                                      ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
	printf("///           = = = = = = = =  Saida de produto = = = = = = =           	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///                                                                    		  ///\n");
	printf("///           Nome:                                                     	  ///\n");
    printf("///           Codigo de barra:                                          	  ///\n");
    printf("///           Validade:                                                 	  ///\n");
	printf("///           0. Voltar ao menu anterior                               	      ///\n");
	printf("///                                                                           ///\n");
	printf("///           Escolha a opção desejada:                                       ///\n");
	printf("///                                                                           ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void menuAtualizar(void) {
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
	printf("///                                                                     	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///           = = = = = = =  Atualizar produtos = = = = = = =           	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           1. Alterar nome do produto                                	  ///\n");
	printf("///           2. Alterar Codigo de barra                                	  ///\n");
	printf("///           3. Alterar Validade                                       	  ///\n");
	printf("///           4. Alterar valor                                          	  ///\n");
	printf("///           0. Voltar ao menu anterior                                	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaInventario(void) {
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
	printf("///                                                                     	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///           = = = = = = =  Exibir inventario  = = = = = = =           	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           1. Listar                                                 	  ///\n");
	printf("///           0. Voltar ao menu anterior                                	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	getchar();

	void telaRelatorio(void) {
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
	printf("///                                                                     	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///           = = = = = = =  Exibir relatorio   = = = = = = =           	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           1. Listar                                                 	  ///\n");
	printf("///           0. Voltar ao menu anterior                                	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///           Escolha a opção desejada:                                 	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	getchar();


    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                           ///\n");
    printf("///       = = = = = = = = = =        Equipe         = = = = = = = = = =       ///\n");
    printf("///                                                                           ///\n");
    printf("///   A equipe do projeto é formada por Daniel Leônidas de Medeiros           ///\n");
    printf("///   e por Márlem Magno da Silva Dantas!                                     ///\n");
    printf("///                                                                           ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}