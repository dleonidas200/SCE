struct Produto{
	char codBarras[13];
	char dataValidade[11];
	char nomeItem[51];
};
struct Registro{
	struct Produto produto;
	char dataCadastro[11];
	char inout[1]; //indica entrada('i') ou saida('o') de produtos 
};
void registrar(FILE *pont, struct Registro reg);
void cadastrar(FILE *pont);
void excluir(FILE *pont);
int pesquisar(FILE *pont, int opPesquisa);
int menuPesquisar(FILE *pont);
void retirar(void);