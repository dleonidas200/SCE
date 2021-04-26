#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

bool validarOpcao(char op, int lim){
	bool retorno;
	if(op >= 0 && op <= lim){
		retorno = true;
	}else{
		retorno = false;
	}
	return retorno;
}

int main(){
	return 0;
}
