#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validador.h"
#include "moduloEntrada.h"
#include "moduloProduto.h"

void moduloEntrada(void){
     char opcao;
	do {
		opcao = menuEntrada();
		switch(opcao) {
			case '1': 	
				RelaizaEntrada();
				break;
			case '2': 	
				pesquisarEntrada();
				break;
			case '3': 	
				atualizarEntrada();
				break;
			case '4':
				excluirEntrada();
				break;
		} 		
	} while (opcao != '0');

}

char menuEntrada(void){
    char op;
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =            Modulo Entrada           = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Modulo Entrada  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Realizar entrada de Produto                              ///\n");
	printf("///           2. Pesquisar entrada de Produto                             ///\n");
	printf("///           3. Atualizar entrada de Produto                             ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///           Escolha a opcao desejada: ");
	scanf("%c", &op);
	getchar();
	printf("\n");
	delay(1);
	return op;
}

void RelaizaEntrada(void) {
	char codBarras[12];
	Entrada *pro;
	printf("Informe o codigo de barras do produto (apenas numeros): ");
	scanf("%[0-9]",codBarras);
	getchar();                            
	printf("\n");
	if(existeEmProdutos(codBarras)==1){
		pro=telaCadastrarEntrada(); 
		gravarEntrada(pro);
	}else{
		printf("Este codigo de barras nao pertence a nenhum produto \n");
	}
	free(pro);
}
int existeEmProdutos(char* cod){
	Produto* pro;
	pro = buscarProduto(cod);
	if(strcmp(pro->codBarras,cod)==0){
		return 1;
	}
	return 0;
}
Entrada* telaCadastrarEntrada(void) {
	Entrada *pro;
	pro = (Entrada*)malloc(sizeof(Entrada));

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
	printf("///           = = = = = = = = Cadastrar Entrada = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	do {
		printf("///           Codigo de Barras (apenas numeros): ");
		scanf("%[^\n]", pro->codBarras);
		getchar();
	} while (!validarCodBarras(pro->codBarras));
	do {
		printf("///           Data de Validade (dd/mm/aaaa):  ");
		scanf("%[0-9/]", pro->val);
		getchar();
	} while (!validarVal(pro->val));
	do {
		printf("///           Data de Entrada (dd/mm/aaaa):  ");
		scanf("%[0-9/]", pro->datDentrada);
		getchar();
	} while (!validarVal(pro->datDentrada));

	do {
		printf("///           Informe a Quantidade do Produto:  ");
		scanf("%d",&pro->quantidade);
		getchar();         
	} while (pro->quantidade<0);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
  	return pro;
}

void pesquisarEntrada(void) {
	Entrada* pro;
	char* codBarras;

	codBarras = telaPesquisarEntrada();
	pro = buscarEntrada(codBarras);
	exibirEntrada(pro);
	free(pro); 
	free(codBarras);
}
char* telaPesquisarEntrada(void) {
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
	printf("///           = = = = = = = = Pesquisar Entrada = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o codigo de barras do produto (apenas numeros): ");
	scanf("%[0-9]", codBarras);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
  	return codBarras;
}
void gravarEntrada(Entrada* pro) {
	FILE* fp;

	fp = fopen("Entradas.dat", "ab");
	if (fp == NULL) {
		printf("Erro na gravação de arquivo \n");
	}
	fwrite(pro, sizeof(Entrada), 1, fp);
//	fputs("\n",fp);
	fclose(fp);
}

Entrada* buscarEntrada(char* codBarras) {
	FILE* fp;
	Entrada* pro;

	pro = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entradas.dat", "rb");
	if (fp == NULL) {
		printf("Não existe nenhum dado \n");
	}
	while(fread(pro, sizeof(Entrada), 1, fp)) {
		if ((strcmp(pro->codBarras, codBarras) == 0)) {//&& (pro->status == True)
			fclose(fp);
			return pro;
		}
	}
	fclose(fp);
	return NULL;
}
void exibirEntrada(Entrada* pro) {
	if (pro == NULL) {
		printf("\n= = = Entrada Inexistente = = =\n");
	} else {
		printf("\n= = = Entrada Cadastrado = = =\n");
		printf("Codigo de Barras: %s\n", pro->codBarras);
		printf("Data de Entrada: %s\n", pro->datDentrada);
		printf("Quntidade do Produto: %d\n",pro->quantidade);
	}
	// printf("\n\nTecle ENTER para continuar!\n\n");
	// getchar();
}

void regravarEntrada(Entrada* pro) {
	int achou;
	FILE* fp;
	Entrada* proLido;

	proLido = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entradas.dat", "r+b");
	if (fp == NULL) {
		telaErroArquivoEntrada();
	}
	// while(!feof(fp)) {
	achou = False;
	while(fread(proLido, sizeof(Entrada), 1, fp) && !achou) {
		//fread(proLido, sizeof(Entrada), 1, fp);
		if (strcmp(proLido->codBarras, pro->codBarras) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Entrada), SEEK_CUR);
        	fwrite(pro, sizeof(Entrada), 1, fp);
			fputs("\n",fp);

			//break;
		}
	}
	fclose(fp);
	free(proLido);
}

void atualizarEntrada(void) {
	Entrada* pro;
	char* codBarras;
	codBarras = telaAtualizarEntrada();
	pro = buscarEntrada(codBarras);
    
	if (pro == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
          exibirEntrada(pro);
          pro = telaCadastrarEntrada();
          strcpy(pro->codBarras, codBarras);
		  regravarEntrada(pro);
		  free(pro);
          
	}
    free(codBarras);
}

char* telaAtualizarEntrada(void){
    char* codBarras;
    codBarras = (char*) malloc(12*sizeof(char));

    system("clear");
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
	printf("///           = = = = = = = = Atualiza  Entrada = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           Informe o codigo de barras do Entrada (apenas numeros): ");
	scanf("%[0-9]", codBarras);
    getchar();
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("\n");    
    delay(1); 
    return codBarras;  
}	

void excluirEntrada(void) {
	Entrada* pro;
	char *codBarras;

	codBarras = telaExcluirEntrada();
	pro = (Entrada*) malloc(sizeof(Entrada));
	pro = buscarEntrada(codBarras);
	if (pro == NULL) {
    	printf("\n\nEntrada nao encontrado!\n\n");
  	} else {
		  regravarEntrada(pro);
		  free(pro);
	}
	free(codBarras);
}
void telaErroArquivoEntrada(void) {
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
	printf("///           = = =  Nao foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = = = com informações sobre os Entradas = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
	printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}


char* telaExcluirEntrada(void) {
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
	printf("///           = = = = = = = =  Excluir Entrada  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o codigo de barras do Entrada (apenas numeros): ");
	scanf("%[0-9]", codBarras);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return codBarras;
}
