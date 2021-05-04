///////////////////////////////////////////////////////////////////////////////
///								Módulo Produto
///////////////////////////////////////////////////////////////////////////////

typedef struct produto Produto;

struct produto {
  char codBarras[12];
  char nome[51];
  char cad[11];
  char val[12];
  int status;
};

void moduloProduto(void);
char menuProduto(void);

Produto* telaCadastrarProduto(void);
char* telaPesquisarProduto(void);
char* telaAtualizarProduto(void);
char* telaExcluirProduto(void);
void telaErroArquivo(void);

void cadastrarProduto(void);
void pesquisarProduto(void);
void atualizarProduto(void);
void excluirProduto(void);
void gravarProduto(Produto*);
void exibirProduto(Produto*);

Produto* buscarProduto(char*);
void exibirProduto(Produto*);
void regravarProduto(Produto*);