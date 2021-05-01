#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "validador.h"

int validarOpcao(int op, int lim){
	int retorno;
	if(op >= 0 && op <= lim){
		retorno = 1;
	}else{
		retorno = 0;
	}
	return retorno;
}