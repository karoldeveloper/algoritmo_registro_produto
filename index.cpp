    #include <stdio.h>
    #include <conio.h>
    int main(void)
    {
      	/*Criando a struct */
	    struct registro_produto
	    {
	    char nome[50];
	    char tipo[30];
	    char fornecedor[50];
	    float quantidade_estoque;
	    float quantidade_loja;
	    };
	      
	    /*Criando a variável produto que será do tipo struct registro_produto */
	    struct registro_produto produto;
	      
	    printf("\n---------- Registro do PRODUTO - MERCADO -----------\n\n\n");
      
		//      
      	printf("Nome do produto ......: ");
      	fflush(stdin);	        
	    fgets(produto.nome, 50, stdin);
	      
	    printf("tipo ......: ");
	    fflush(stdin);
	    fgets(produto.tipo, 30, stdin);
	    
	    printf("fornecedor ......: ");
	    fflush(stdin);
	    fgets(produto.fornecedor, 50, stdin);
	      
	    printf("Informe quantos tem no estoque ..: ");
	    scanf("%f", &produto.quantidade_estoque);
	      
	    printf("Informe quantos tem na loja ..: ");
	    scanf("%f", &produto.quantidade_loja);
	      
	    printf("\n\n --------- Lendo os dados da registro ---------\n\n");
	    printf("Nome ...........: %s", produto.nome);
	    printf("Tipo .....: %s", produto.tipo);
	    printf("Fornecedor .....: %s", produto.tipo);
	    printf("Quantidade no estoque ...: %.2f\n" , produto.quantidade_estoque);
	    printf("Quantidade na loja ...: %.2f\n" , produto.quantidade_loja);
	      
	    getch();
      	return(0);
    }
