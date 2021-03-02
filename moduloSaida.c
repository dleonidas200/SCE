#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menuSaidaproduto(void) {
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                           ///\n");
	printf("///          ===================================================              ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          = = = =   Sistema de Controle de Estoque    = = = =        	  ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =         	  ///\n");
	printf("///          ===================================================        	  ///\n");
	printf("///            Developed by @dleonidas200 @MarlemM - Jan, 2021         	 	  ///\n");
	printf("///                                                                      	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");                                                                      ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
	printf("///           = = = = = = = =  Saida de produto = = = = = = =           	  ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =           	  ///\n");
	printf("///                                                                    		  ///\n");
	printf("///           Nome:                                                     	  ///\n");
    printf("///           Codigo de barra:                                          	  ///\n");
    printf("///           Validade:                                                 	  ///\n");
	printf("///            - Data de saida (dd/mm/aaa):                                   ///\n");
    scanf("%[0-9/]", data);
    getchar();
    printf("///            - Horário de saida (hh:mm:ss):                                ///\n");
    scanf("%[0-9:]", horario);
    getchar();
	printf("///           0. Voltar ao menu anterior                               	      ///\n");
	printf("///                                                                           ///\n");
	printf("///           Escolha a opção desejada:                                       ///\n");
	printf("///                                                                           ///\n");
	printf("///                                                                     	  ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();	
    printf("///            - Data de saida (dd/mm/aaa): ");
    scanf("%[0-9/]", data);
    getchar();
    printf("///            - Horário de saida (hh:mm:ss): ");
    scanf("%[0-9:]", horario);
    getchar();
    printf("///                                                                      ///\n");
    printf("///             Data d saida: %s \n", data);
    printf("///             Horário de saida: %s \n", horario);
    printf("///                                                                      ///\n");  
    printf("///          Não há registro de saida para as                            ///\n");    
    printf("///          informações fornecidas.                                     ///\n");    
    printf("///                                                                      ///\n");
    printf("///            - Confirmar operação (S/N): ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", &resposta);
    getchar();
    if (resposta == 'S' || resposta == 's'){
        printf("///                                                                   ///\n");
        printf("///            Saida confirada com sucesso!                           ///\n"); 
        printf("///                                                                   ///\n");
        printf("/////////////////////////////////////////////////////////////////////////\n\n");
        printf("\t\t              >>> Tecle <ENTER> para continuar...\n");
        getchar();

    }else if (resposta == 'N' || resposta == 'n'){
        printf("///                                                                   ///\n");
        printf("///            Operação cancelada!                                    ///\n"); 
        printf("///                                                                   ///\n");
        printf("/////////////////////////////////////////////////////////////////////////\n\n");
        printf("\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

    }else{
        printf("///                                                                   ///\n");
        printf("///            Você informou um valor inválido!                       ///\n"); 
        printf("///                                                                   ///\n");
        printf("/////////////////////////////////////////////////////////////////////////\n\n");
        printf("\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

    }

}
	time_t timer;
    struct tm *horarioLocal;

    time(&timer); 
    horarioLocal = localtime(&timer); 

    int dia = horarioLocal->tm_mday;
    int mes = horarioLocal->tm_mon + 1;
    int ano = horarioLocal->tm_year + 1900;

    int hora = horarioLocal->tm_hour;
    int min  = horarioLocal->tm_min;
    int sec  = horarioLocal->tm_sec;

    int vetor[6]= {dia,mes,ano,hora,min,sec};
