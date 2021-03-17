#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void limpaTela(void){
	system("clear");
}

int testeDigito(char n){
  	int cont = 0;
  
  	if(isdigit(n)){
    	cont++;
	}
  
	if(cont >= 1){
		return 1;

	}else{
		return 0;
	}
}

int testeDigitos(char n[]){
	int cont = 0;
	int i;
	int tam;

	tam = strlen(n);

	for(i=0; i<tam; i++){

		if(isdigit(n[i])){
			cont++;
		}
	}

	if(cont >= 1){
		return 1;

	}else{
		return 0;
	}
}

int testeDigitosNumericos(char n[]){
	int cont = 0;
	int i;
	int tam;

	tam = strlen(n);

	for(i=0; i<tam; i++){

		if(!isdigit(n[i])){
			cont++;
		}
	}

	if(cont >= 1){
		return 1;

	}else{
		return 0;
	}
}

int testeDigitosNumericosData(char n[]){
	int cont = 0;
	int i;
	int tam;

	tam = strlen(n);

	for(i=0; i<tam; i++){

		if(!isdigit(n[i]) && n[i] != '/' ){
			cont++;
		}
	}

	if(cont >= 1){	
		return 1;

	}else{
		return 0;
	}
}

int testeDigitosNumericosHora(char n[]){
	int cont = 0;
	int i;
	int tam;

	tam = strlen(n);

	for(i=0; i<tam; i++){

		if(!isdigit(n[i]) && n[i] != ':' ){
			cont++;
		}
	}

	if(cont >= 1){
		return 1;

	}else{
		return 0;
	}
}

int testeDigitosNumericosValorFlutuante(char n[]){
	int cont = 0;
	int i;
	int tam;

	tam = strlen(n);

	for(i=0; i<tam; i++){

		if(!isdigit(n[i]) && n[i] != '.' ){
			cont++;
		}
	}

	if(cont >= 1){
		return 1;

	}else{
		return 0;
	}
}

int converteCharParaInt(char n[]){
	int i = 0;
	i = atoi (n);

	return i;
}

double converteCharParaDouble(char n[]){
	double i = 0;
	i = strtod (n, NULL);

	return i;
}

int validaOpcao(char n){

	if (n == 'S' || n == 's' || n == 'N' || n == 'n'){
		return 1;

	}else{
		return 0;
	}
}

int validaOpcaoMenu(char n, int q){

	if (q == 5){
		if (n == '1' || n == '2' || n == '3' || n == '4' || n == '5' || n == '0'  ){
			return 1;
		}else{
			return 0;
		}

	}else if(q == 4){
		if (n == '1' || n == '2' || n == '3' || n == '4' || n == '0'  ){
			return 1;
		}else{
			return 0;
		}
		
	}else if(q == 3){
		if (n == '1' || n == '2' || n == '3' || n == '0'  ){
			return 1;
		}else{
			return 0;
		}
		
	}else{
		return 0;
	}
	
	
}

int validaOpcaoLetrasAC(char n){

	if (n == 'a' || n == 'A' || n == 'b' || n == 'B' || n == 'c' || n == 'C' ){
		return 1;
	}else{
		return 0;
	}
}

int validaOpcaoLetrasAD(char n){

	if (n == 'a' || n == 'A' || n == 'b' || n == 'B' || n == 'c' || n == 'C' || n == 'd' || n == 'D' ){
		return 1;
	}else{
		return 0;
	}
}

int validaOpcaoLetrasAE(char n){

	if (n == 'a' || n == 'A' || n == 'b' || n == 'B' || n == 'c' || n == 'C' || n == 'd' || n == 'D' || n == 'e' || n == 'E' ){
		return 1;

	}else{
		return 0;
	}
}

int validaCodBarras(char codBarras[]){
 
	float somaPares = 0.0;  
	float somaImpares = 0.0;
	float somaTotal = 0.0; 
	float resultadoF = 0.0; 
	int resultadoI = 0;      
	char aux[2];            
	float numConv = 0.0;    
	int digitoI;            
	int digitoC;            
	int tamanho = 0;        

	tamanho = strlen(codBarras);

	if(tamanho == 13){

		for(int i = 0; i < (tamanho - 1); i ++){

			if (i % 2 == 0){
				aux[0] = codBarras[i];
				numConv = atoi(aux);
				somaPares += numConv ;

			}else{
				aux[0] = codBarras[i];
				numConv = atoi(aux);
				somaImpares += numConv;

			}
		}

		somaTotal = somaPares + (somaImpares * 3);
		resultadoF = somaTotal / 10;
		resultadoI = resultadoF;

		if ((resultadoF - resultadoI) >= 0.5){
			resultadoI += 1;
			aux[0] = codBarras[12];
			digitoI = atoi(aux);
			digitoC = ((resultadoI + 1) * 10) - somaTotal;

			if (digitoI == digitoC){
				return 1;

			}else{
				return 0;

			}

		}else{
			resultadoI = resultadoI;
			aux[0] = codBarras[12];
			digitoI = atoi(aux);
			digitoC = ((resultadoI + 1) * 10) - somaTotal;

			if (digitoI == digitoC){
				return 1;

			}else{
				return 0;

			}
		}

	}else{
		return 0;
		
	}

}

int testaBissexto(int ano) { 

// "adaptado de @flgorgonio, 2021" 
// "Disponível em: https://replit.com/@flaviusgorgonio/ValidaDataComFuncoesc#main.c"

	if (ano == 0){
		return 0;

	}else if (((ano % 4 == 0) && (ano % 100 != 0)) || ano % 400 == 0 ) {
    	return 1;

  	}else{
    	return 0;

  	}
}

int testaData(int dia, int mes, int ano, char n[]) {

	int diaM; 

	if (strlen(n) == 10){

		if (dia < 1 || dia > 31 ||mes < 1 || mes > 12 || ano == 0 || ano < 2000){
    		return 0;

		}else{

			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
				diaM = 31;
				
				if (dia >= 1 && dia <= diaM){
					return 1;
				}else{
					return 0;
				}

			}else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
				diaM = 30;

				if (dia >= 1 && dia <= diaM){
					return 1;

				}else{
					return 0;
				}
			
			}else if(mes == 2){

				if (!testaBissexto(ano)) {
					diaM = 28;

					if (dia >= 1 && dia <= diaM){
						return 1;

					}else{
						return 0;
					}

				}else{
					diaM = 29;
					if (dia >= 1 && dia <= diaM){
						return 1;
						
					}else{
						return 0;
					}
				}
			}else{
				return 0;
			}
		}

	}else{
		return 0;
	}
   	
}

int testaHora(int hora, int min, char n[]){

	if (strlen(n) == 5){
		if (hora > 23 || min > 59 ){
			return 0;

		}else if (hora >= 0 && hora <=23){
			if(min >= 0 && min <= 59){
				return 1;
			}else{
				return 0;
			}

		}else{
			return 0;
		}
	}else{
		return 0;
	}
}

int verificaNulo(char nome[]) {
  int tam;
  tam = strlen(nome);
  if (tam == 0) {
    return 1;
  }else {
    return 0;
  }
}