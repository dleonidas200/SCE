#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "moduloProduto.h"
#include "moduloRelatorio.h"
#include "moduloEntrada.h"
#include "moduloSaida.h"
#include "validador.h"

/////////////////////////////////////////////////////////////////////////////// 
/// 						Assinaturas das funções
///////////////////////////////////////////////////////////////////////////////

char menuPrincipal(void);
void moduloInformacoes(void);
void telaSobre(void);
void moduloRelatorio(void);

///////////////////////////////////////////////////////////////////////////////
///								Programa Principal
///////////////////////////////////////////////////////////////////////////////
int main(void) {
	char opcao;
	do {
		opcao = menuPrincipal();
		switch(opcao) {
			case '1': 
				moduloProduto();
				break;
			case '2':  
			 	moduloEntrada();
				break;
			case '3':  
				moduloSaida();
				break;
			case '4': 
				moduloRelatorio();
				break;
			case '5': 	
				moduloInformacoes();		
			break;
		} 		
	} while (opcao != '0');
	return 0;    
}
char menuPrincipal(void) {
	char op;
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
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Modulo Produto                                           ///\n");
	printf("///           2. Modulo entrada                                           ///\n");
	printf("///           3. Modulo Saida                                             ///\n");
	printf("///           4. Modulo Relatorios                                        ///\n");
	printf("///           5. Modulo Informacao                                        ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///           Escolha a opcao desejada: ");
	scanf("%c", &op);
	getchar();
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
	printf("///                   Projeto Sistema de Gestão se Estoque                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          =====================================================        ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = = =        ///\n");
	printf("///          =  SCE-Inventory-Um Sistema de Controle de Estoques =        ///\n");
	printf("///          = = = = # Projeto adapted of the @flgorgonio  = = = =        ///\n");
	printf("///          =================================================== =        ///\n");
	printf("///                                                                       ///\n");
	printf("/// # Finalidade                                                          ///\n");
    printf("///   As empresas da atualidade utilizam complexos sistemas gerenciais    ///\n");
	printf("///   para se ter um melhor controle do seu estoque, entre várias outras  ///\n");
	printf("///   funções com cadastrar produtos, listar os produtos do seu estoque   ///\n");
	printf("///   que serve para, gerenciar seu estoque de produtos. Gerenciar        ///\n");
	printf("///   estoques de maneira eficiente, sem a ajuda de um sistema            ///\n");
	printf("///   automatizado, eh algo dificil para as pequenas empresas e impossivel///\n");
	printf("///   para as grandes. O presente projeto tem como objetivo propor um     ///\n");
	printf("///   software que ofereça funcionalidades basicas relacionadas ao        ///\n");
	printf("///   controle de inventario de uma empresa, visando facilitar a          ///\n"); 
	printf("///   administração de estoques de produtos dos mais diversos tipos.      ///\n");
	printf("///   Tornando assim capaz a introducao das mais simples empresas poder   ///\n");
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

