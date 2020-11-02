/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Extremamente Básico

Objetivos: 

Escrever: Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na variável X.

    Entradas: A entrada contém 2 valores inteiros.
    Saida: Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da variável X e pelo final de linha.
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    //Variáveis Locais 
    int A, B, X;

    //Entrada de dados
    scanf("%d %d", &A, &B);

    //Cálculo
    X = A+B;

    // Escrita da saida pedida
    printf("X = %d\n", X);

    // Finalizacao do programa
    return 0;
}