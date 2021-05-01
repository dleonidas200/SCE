#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "moduloPrincipal.h"
#include "moduloProdutos.h"
#include "validador.h"

int main(void){
	
	FILE *pont_arq;
	//validarArquivo(pont_arq);
	int opcao;
	struct Registro reg;
	do{
		opcao = menuPrincipal();
		switch(opcao){
			case 0:
				printf("Encerrar");
				break;
			case 1:
				cadastrar(pont_arq);                             //OK
				break;
			case 2:
				excluir(pont_arq);
				printf("Excluir");
				break;
			case 3:
				printf("Atualizar");
				break;
			case 4:
				printf("Historico");
				break;
			default:
				printf("opcao invalida");
				break;
		}
			
	}while(opcao!=0 && opcao <= 4);
	return 0;
}
