#define True 1
#define False 0
typedef struct entrada Entrada;
struct entrada {
  char codBarras[12]; //entrada vai comparar com esse codBarra
  char val[12];       // validade
  char datDentrada[12];
  int quantidade;
};
void moduloEntrada(void);
char menuEntrada(void);
void RealizaEntrada(void);
Entrada* telaCadastrarEntrada(void);
void gravarEntrada(Entrada* pro);
int existeEmProdutos(char* cod);
char* telaPesquisarEntrada(void);
void pesquisarEntrada(void);

Entrada* buscarEntrada(char* codBarras);
void exibirEntrada(Entrada* pro);

void regravarEntrada(Entrada* pro);
void atualizarEntrada(void);
void excluirEntrada(void);
char menuEntrada(void);
void telaErroArquivoEntrada(void);
char* telaAtualizarEntrada(void);
char* telaExcluirEntrada(void);
int existeEmEntrada(char* cod);
























// Produto* telaCadastrarProduto(void);
// char* telaPesquisarProduto(void);
// char* telaAtualizarProduto(void);
// char* telaExcluirProduto(void);
// void telaErroArquivo(void);

// void cadastrarProduto(void);
// void pesquisarProduto(void);
// void atualizarProduto(void);
// void excluirProduto(void);
// void gravarProduto(Produto*);
// void exibirProduto(Produto*);

// Produto* buscarProduto(char*);
// void exibirProduto(Produto*);
// void regravarProduto(Produto*);