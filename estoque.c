///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///	           Developed by @dleonidas200 @MarlemM - Jan, 2021              ///
///                Adapted of the  @flgorgonio - Jan, 2021                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "moduloProduto.h"
#include "validador.h"

/////////////////////////////////////////////////////////////////////////////// 
/// 						Assinaturas das funções
///////////////////////////////////////////////////////////////////////////////

char menuPrincipal(void);
void moduloInformacoes(void);
void telaSobre(void);


void moduloRelatorio(void);
void delay(int);


///////////////////////////////////////////////////////////////////////////////
///								Programa Principal
///////////////////////////////////////////////////////////////////////////////


int main(void) {
	char opcao;
	do {
		opcao = menuPrincipal();
		switch(opcao) {
			case '1': 	moduloProduto();
						break;
			case '2': 	moduloInformacoes();
						break;
		} 		
	} while (opcao != '0');
	return 0;    
}


char menuPrincipal(void) {
	char op;
    //limpaTela();
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
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Modulo produto                                           ///\n");
	printf("///           2. Informacoes sobre o sistema                              ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
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


void telaSobre(void) {
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///              Universidade Federal do Rio Grande do Norte              ///\n");
	printf("///                  Centro de Ensino Superior do Seridó                  ///\n");
	printf("///                Departamento de Computação e Tecnologia                ///\n");
	printf("///                   Disciplina DCT1106 -- Programação                   ///\n");
	printf("///                   Projeto Sistema de Gestão Escolar                   ///\n");
	printf("///                 Developed by  @flgorgonio - Jan, 2021                 ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          =====================================================        ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = = =        ///\n");
	printf("///          =  SIG-Inventory-Um Sistema de Controle de Estoques =        ///\n");
	printf("///          = = = = # Projeto adapted of the @flgorgonio  = = = =        ///\n");
	printf("///          =================================================== =        ///\n");
	printf("///                                                                       ///\n");
	printf("/// # Finalidade                                                          ///\n");
    printf("///   As empresas da atualidade utilizam complexos sistemas gerenciais    ///\n");
	printf("///   para se ter um melhor controle do seu estoque, entre várias outras  ///\n");
	printf("///   funções com cadastrar produtos, listar os produtos do seu estoque   ///\n");
	printf("///   que serve para, gerenciar seu estoque de produtos. Gerenciar        ///\n");
	printf("///   estoques de maneira eficiente, sem a ajuda de um sistema            ///\n");
	printf("///   automatizado, eh algo difícil para as pequenas empresas e impossível ///\n");
	printf("///   para as grandes. O presente projeto tem como objetivo propor um     ///\n");
	printf("///   software que ofereça funcionalidades básicas relacionadas ao        ///\n");
	printf("///   controle de inventário de uma empresa, visando facilitar a          ///\n"); 
	printf("///   administração de estoques de produtos dos mais diversos tipos.      ///\n");
	printf("///   Tornando assim capaz a introdução das mais simples empresas poder   ///\n");
	printf("///   aderir o sistema de forma simples e eficaz.                         ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void moduloInformacoes(void) {
	// modulo em desenvolvimento
	telaSobre();

}

