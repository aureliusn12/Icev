/*1-Implementar um Algoritmo utilizando a função Struct para cadastrar
5 produtos, com os seguintes dados ( Código, Nome, Quantidade e
valor Unitário)*/
#include <stdio.h>
#include <stdlib.h>

struct produto
{
char codigo[50];
char nome[50];
int quantidade;
int valor;
};

int main(){
    struct produto listaProdutos[5];
    for (int i = 0; i < 5; i++){
        printf("Insira o codigo do produto: \n");
        scanf("%s", &listaProdutos[i].codigo);
        printf("Insira o nome do produto: \n");
        scanf("%s", &listaProdutos[i].nome);
        printf("Insira a quantidade do produto: \n");
        scanf("%d", &listaProdutos[i].quantidade);
        printf("Insira o valor do produto: \n");
        scanf("%d", &listaProdutos[i].valor);
        printf("\n");
    }
    for(int i=0; i < 5; i++){
        printf("%s", listaProdutos[i].codigo);
        printf("\n");
        printf("%s", listaProdutos[i].nome);
        printf("\n");
        printf("%d", listaProdutos[i].quantidade);
        printf("\n");
        printf("%d", listaProdutos[i].valor);
        printf("\n");
    }
}

