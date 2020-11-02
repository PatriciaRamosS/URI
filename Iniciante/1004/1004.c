/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Produto Simples

Objetivos: 

Escrever: Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. 
A seguir mostre a variável PROD com mensagem correspondente. 

    Entradas: O arquivo de entrada contém 2 valores inteiros.
    Saida: Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. 
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    // Declaração Locais
    int A, B, PROD;

    //Leitura dos Dados
    scanf("%d %d", &A, &B);

    // Cálculo 
    PROD = A*B;

    // Escrita dos Resultados
    printf("PROD = %d\n", PROD);

    // Finalizacao do programa
    return 0;
}