/////////////////////////////////////////////////////////////////////////////////////////////
///                                                                                       ///
///                     Universidade Federal do Rio Grande do Norte                       ///
///                          Centro de Ensino Superior do Seridó                          ///
///                        Departamento de Computação e Tecnologia                 		  ///
///                          Disciplina DCT1106 -- Programação                     		  ///
///                       Projeto Sistema de Controle de Estoque                   		  ///
///                  Developed by  @dleonidas200 @MarlemM - Jan, 2021            		  ///
///                                                                         			  ///
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <moduloMain.h>
#include <moduloProduto.h>
#include <moduloRelatorio.h>
#include <moduloSaida.h>
#include <moduloSobre.h>

int main(void) {
	char opcao;
    do{

        opcao = menuPrincipal();
        switch (opcao){
            case '1': menuProduto();
                                break;
            case '2': menuAtualizar();
                                break;
            case '3': menuSaidaproduto();
                                break;
            case '4': menuEntradaproduto();
                                break:
            case '5': telaRelatorio();
                                break:  
            case '6': menuSobre(); 
                                break;   
        }                        
    }while(opcao != 0);
    return 0;
}  