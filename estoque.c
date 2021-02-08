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
#include <time.h>


/// 
/// Assinaturas das funções
///

char menuPrincipal(void);

char menuProduto(void);
void telaCadastrarNovoProduto(void);                              	  
void telaPesquisarDadosDeUmProduto(void);                      	
void telaAtualizarProduto(void);                                      	  
void telaExcluirUmProdutoDoSistema(void); 

char menuAtualizar(void);
void telaAlterarNomedoProduto(void);                             	  
void telaAlterarCodigodeBarra(void);                             	  
void telaAlterarValidade(void);                                       	 
void telaAlterarValor(void);  

char telaInventario(void);
void menuSaidaproduto(void);
void menuEntradaproduto(void)
void telaRelatorio(void);

void menuSobre(void);

///
/// Programa Principal
///

int main(void) {
	char opcao1, opcoa2, opcao3, opcao4, opcao5, opcao6;


    menuSobre();
	opcao1 = menuPrincipal();

	opcoa2 = menuProduto();
	telaCadastrarNovoProduto();
	telaPesquisarDadosDeUmProduto();
	telaAtualizarProduto();
	telaExcluirUmProdutoDoSistema();

	opcao3 = menuAtualizar();
	telaAtualizarProduto();
	telaAlterarCodigodeBarra();
	telaAlterarValidade();
	telaAlterarValor();

	opcao4 = menuSaidaproduto();
	
	opcao5 = menuEntradaproduto();

	opcao6 = telaRelatorio();

    return 0;

}
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
	printf("Qual a sua opção:");
	scanf("%c", opcao);
	getchar();
	rintf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
		return opcao;
    
}

char manuProdutos(void){
	char opcao;

    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
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
	printf("///                                                                      	  ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("Qual a sua opção:\n");
	scanf("%c", &opcao);
	getchar("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
		return opcao;
}



void telaCadastrarNovoProduto(void){

	char codBarras[14];
	char nomeItem[51];
	char dataValidade[11];
	
//tirar a parte de quantidade da tela
	system("clear");
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
    printf("///            - Código de Barras:                                     		  ///\n");
   	scanf("%[0-9]", codBarras);
    getchar();
	printf("///            - Nome:                                              	   	  ///\n");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeItem);
	getchar();
	printf("///            - Data de Validade:                                  		  ///\n");
    scanf("%[0-9/]", dataValidade);
	getchar();
	//printf("///            - Quantidade:                                        		  ///\n");
    printf("///        _______________________________________________________     		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///          Deseja adicionar um novo produto (S/n) ?                 		  ///\n");
    printf("///        _______________________________________________________     		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///         Produto cadastrado com sucesso !                           		  ///\n");
    printf("///        _______________________________________________________  		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///              Código de Barras: %s \n", codBarras);
    printf("///                     Descrição: %s \n", nomeItem);
    printf("///              Data de Validade: %s \n", dataValidade);
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///                >>> Tecle <ENTER> para continuar...                ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaPesquisarDadosDeUmProduto(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            *Pesquisar Dados de Um Produto:                       		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Codigo de Barras:                                  		  ///\n");
    scanf("%[0-9]", codBarras);
	printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            *Produto Encontrado!                                  		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Codigo de Barras:                                  		  ///\n");
    printf("///            - Nome:                                              		  ///\n");
    printf("///            - Data de Validade:                                  		  ///\n");
    //printf("///            - Quantidade:                                        		  ///\n");
    printf("///        _______________________________________________________  		  ///\n");
    printf("///                                                                 		  ///\n");  
    printf("///            Não foi possível encontrar produto cadastrado com o     		  ///\n");    
    printf("///            código de barras informado.                             	      ///\n");    
    printf("///        _______________________________________________________  		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void telaAtualizarProduto(void); 
	char codBarras[14];
    char nomeItem[51];
    char dataValidade[11];
	system("clear");
	system("clear");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            *Atualizar Produto:                       	            	  ///\n");

	//continuar depois


void telaExcluirUmProdutoDoSistema(void);
	char codBarras[14];
	char resposta[2];

	system("clear");
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
    printf("///            - Código de Barras:                                 		      ///\n");
   scanf("%[0-9]", codBarras);
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            PRODUTO LOCALIZADO!                                  		  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Codigo de Barras:                                  		  ///\n");
    printf("///            - Nome:                                              		  ///\n");
    printf("///            - Data de Validade:                                  		  ///\n");
    printf("///            - Quantidade:                                        		  ///\n");
	printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");  
    printf("///            Não foi possível encontrar produto cadastrado com o     		  ///\n");    
    printf("///            código de barras informado.                           		  ///\n");    
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Confirmar operação (S/n): S                        		  ///\n");
    scanf("%[SNsn]", resposta);
	printf("///                                                                 		  ///\n");
    printf("///            Produto excluído com sucesso!                        		  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///            - Confirmar operação (S/n): N                        		  ///\n");
    scanf("%[SNsn]", resposta);
	printf("///                                                                 		  ///\n");
    printf("///            Operação cancelada!                                  		  ///\n");
    printf("///        _______________________________________________________      	  ///\n");
    printf("///                                                                 		  ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
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

void telaAlterarNomedoProduto(void);
	system("clear")
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");

//continuar

void telaAlterarCodigodeBarra(void); 
	system("clear")
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");

//coninuar

void telaAlterarValidade(void); 
	system("clear")
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");

//continuar

void telaAlterarvalor(void);  
	system("clear")
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =    Sistema de Controle de Estoque   = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
    printf("///        _______________________________________________________      	  ///\n");

//continuar

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
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
	void menuEntradaproduto(void) {
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
	printf("///           = = = = = = =  Entrada de produto = = = = = = =           	  ///\n");
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
}

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