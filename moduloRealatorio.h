typedef struct relatorio Relatorio;

struct relatorio {
  char codBarras[12]; //entrada vai comparar com esse codBarra
  char val[12];
  int status;
  int quantidade;
};
 void moduloRelatorio(void);
 char menuRelatorio(void);