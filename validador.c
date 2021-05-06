#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "moduloProduto.h"


///////////////////////////////////////////////////////////////////////////////
/// Faz uma pausa por n segundos, com n sendo passado como parâmetro
///
void delay(int segundos) {
  int tempo = 1000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}


///////////////////////////////////////////////////////////////////////////////
/// Limpa a tela; funciona em Linux / MacOS / Windows
///
void limpaTela(void) {
  if (system("clear") || system("cls")) {
    // limpa a tela, Linux, Mac e Windows
  }
}

///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se o caractere recebido for um dígito (entre 0 e 9)
/// retorna 0 caso contrário
///
int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}


///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se o caractere recebido for uma alfabético 
/// (letra entre 'A' e 'Z' ou 'a' e 'z') ou retorna 0 caso contrário
///
int ehLetra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}


///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se ano for bissexto (divisível por 4, não divisível por ...
/// 100 ou divisível por 400) e retorna 0 caso contrário
///
int ehBissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}


///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se dia, mes e ano correspondem a uma data válida, inclusive
/// em anos bissextos, ou retorna 0 caso contrário
///
int ehData(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (ehBissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;
  if (dd < 1 || dd > maiorDia)
    return 0;
  return 1;
}


///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido for exclusivamente alfabético ou
/// retorna 0 caso contrário
///
int validarNome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!ehLetra(nome[i])) {
      return 0;
    }
  }
	return 1;
}


///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a uma data válida (apenas dígitos
/// e no formato: ddmmaaaa) ou retorna 0 caso contrário
///
int validarData(char* data) {//   011220
  int tam, dia, mes, ano;
  tam = strlen(data);
  if (tam != 8) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(data[i])) {
      return 0;
    }
  }
  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[2] - '0') * 10 + (data[3] - '0');
  ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + 
        (data[6] - '0') * 10 + (data[7] - '0');
  if (!ehData(dia, mes, ano)) {
    return 0;
  }
  return 1;
}


///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a uma data de validade válida
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarVal(char* val) {//12/05/2021
    char dia[3]={val[0],val[1]};
    char mes[3]={val[3],val[4]};
    char ano[5]={val[6],val[7],val[8],val[9]};
    int diaInt,mesInt,anoInt;
    diaInt = atoi(dia);
    mesInt = atoi(mes);
    anoInt = atoi(ano);
    int ehValido = 0;
    if(anoInt<2021 ||(val[2]!='/')||(val[5]!='/')){
      return 0;
    }
    else if(ehData(diaInt,mesInt,anoInt)!=1){
      return 0;
    }
    return 1;
}

/////////////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número de codigo de produto válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarCodBarras(char* codBarras) {
  int tam;
  
  FILE* fp;
	Produto* pro;
	pro = (Produto*) malloc(sizeof(Produto));
	fp = fopen("produtos.dat","rb");
	if (fp == NULL) {
		return 1;
	}
	while(fread(pro, sizeof(Produto), 1, fp)) {
		if ((strcmp(pro->codBarras, codBarras) == 0) && (pro->status == 1)) {
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);

  tam = strlen(codBarras);
  
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(codBarras[i])) {
      return 0;
    }
  }
  return 1;
}