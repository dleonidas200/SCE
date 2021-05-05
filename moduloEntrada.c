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
			case '3': 	//
				break;
			case '4': 	//
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
	printf("///          = = = =                                     = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Realizar entrada de Produto                              ///\n");
	printf("///           2. Pesquisar entrada de Produto                              ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return op;
}
//--------------------------------------------------------
// produto arroz -> 1111111111111
// verificar  arroz -> 1111111111111 acionar quantidade
// 
//--------------------------------------------------------
void RelaizaEntrada(void) {
	char codBarras[12];
	Entrada *pro;
	printf("Inserir o Codigo de barras do Produto: ");
	scanf("%[0-9^\n]",codBarras);
	//getchar();
	//pedir o codigo de barra
	//verifica se existe
	if(existeEmProdutos(codBarras)==1){
		pro=telaCadastrarEntrada(); 
		gravarEntrada(pro);
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
	printf("///              Adapted of the  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Entrada = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	do {
		printf("///           Codigo de Barras (apenas números): ");
		scanf("%[^\n]", pro->codBarras);
		getchar();
	} while (!validarCodBarras(pro->codBarras));
	do {
		printf("///           Data de Validade (dd/mm/aaaa):  ");
		scanf("%[0-9/]", pro->val);
		getchar();
	} while (!validarVal(pro->val));
	do {
		printf("///           Informe a Quantidade do Produto:  ");
		scanf("%d",&pro->quantidade);
	} while (pro->quantidade<0);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
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
	printf("///              Adapted of the  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Pesquisar Entrada = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o codigo de barras do produto (apenas números): ");
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

	fp = fopen("Entradas.txt", "ab");
	if (fp == NULL) {
		printf("Erro na gravação de arquivo \n");
	}
	fwrite(pro, sizeof(Entrada), 1, fp);
	fclose(fp);
}

Entrada* buscarEntrada(char* codBarras) {
	FILE* fp;
	Entrada* pro;

	pro = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("Entradas.txt", "rb");
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
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}




// void regravarEntrada(Produto* pro) {
// 	int achou;
// 	FILE* fp;
// 	Produto* proLido;

// 	proLido = (Produto*) malloc(sizeof(Produto));
// 	fp = fopen("produtos.txt", "r+b");
// 	if (fp == NULL) {
// 		telaErroArquivoProduto();
// 	}
// 	// while(!feof(fp)) {
// 	achou = False;
// 	while(fread(proLido, sizeof(Produto), 1, fp) && !achou) {
// 		//fread(proLido, sizeof(Produto), 1, fp);
// 		if (strcmp(proLido->codBarras, pro->codBarras) == 0) {
// 			achou = True;
// 			fseek(fp, -1*sizeof(Produto), SEEK_CUR);
//         	fwrite(pro, sizeof(Produto), 1, fp);
// 			//break;
// 		}
// 	}
// 	fclose(fp);
// 	free(proLido);
// }




// void atualizarEntrada(void) {
// 	Produto* pro;
// 	char* codBarras;

// 	codBarras = telaAtualizarProduto();
// 	pro = buscarProduto(codBarras);
// 	if (pro == NULL) {
//     	printf("\n\nProduto não encontrado!\n\n");
//   	} else {
// 		  pro = telaCadastrarEntrada();
// 		  strcpy(pro->codBarras, codBarras);
// 		  regravarEntrada(pro);
// 		  // Outra opção:
// 		  // excluirProduto(codBarras);
// 		  // gravarEntrada(pro);
// 		  free(pro);
// 	}
// 	free(codBarras);
// }


// void excluirProduto(void) {
// 	Produto* pro;
// 	char *codBarras;

// 	codBarras = telaExcluirProduto();
// 	pro = (Produto*) malloc(sizeof(Produto));
// 	pro = buscarProduto(codBarras);
// 	if (pro == NULL) {
//     	printf("\n\nProduto não encontrado!\n\n");
//   	} else {
// 		  pro->status = False;
// 		  regravarEntrada(pro);
// 		  free(pro);
// 	}
// 	free(codBarras);
// }


// char menuProduto(void) {
// 	char op;
	
// 	limpaTela();
// 	printf("\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///              Adapted of the  @flgorgonio - Jan, 2021                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = = = = = = = = =  Menu Produto = = = = = = = = =           ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           1. Cadastrar um novo produto                                ///\n");
// 	printf("///           2. Pesquisar os dados de um produto                         ///\n");
// 	printf("///           3. Atualizar o cadastro de um produto                       ///\n");
// 	printf("///           4. Excluir um produto do sistema                            ///\n");
// 	printf("///           0. Voltar ao menu anterior                                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           Escolha a opção desejada: ");
// 	scanf("%c", &op);
// 	getchar();
// 	printf("///                                                                       ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("\n");
// 	delay(1);
// 	return op;
// }

// void telaErroArquivoProduto(void) {
// 	limpaTela();
// 	printf("\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///              Adapted of the  @flgorgonio - Jan, 2021                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
// 	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
// 	printf("///           = = = = com informações sobre os produtos = = =             ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
// 	printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("\n\nTecle ENTER para continuar!\n\n");
// 	getchar();
// 	exit(1);
// }



// char* telaAtualizarProduto(void) {
// 	char* codBarras;

// 	codBarras = (char*) malloc(12*sizeof(char));
// 	limpaTela();
// 	printf("\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///              Adapted of the  @flgorgonio - Jan, 2021                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = = = = = = = = Atualizar Produto = = = = = = =             ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           Informe o codigo de barras do produto (apenas números): ");
// 	scanf("%[0-9]", codBarras);
// 	getchar();
// 	printf("///                                                                       ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("\n");
// 	delay(1);
//   	return codBarras;
// }


// char* telaExcluirProduto(void) {
// 	char *codBarras;

// 	codBarras = (char*) malloc(12*sizeof(char));
//   	limpaTela();
// 	printf("\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        = = = =   Sistema de Controle de Estoque    = = = =            ///\n");
// 	printf("///        = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///          Developed by @dleonidas200 @MarlemM - Jan, 2021              ///\n");
// 	printf("///        ===================================================            ///\n");
// 	printf("///              Adapted of the  @flgorgonio - Jan, 2021                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = = = = = = = =  Excluir Produto  = = = = = = =             ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           Informe o codigo de barras do produto (apenas números): ");
// 	scanf("%[0-9]", codBarras);
// 	getchar();
// 	printf("///                                                                       ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("\n");
// 	delay(1);
// 	return codBarras;
// }
