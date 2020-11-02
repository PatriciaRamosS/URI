/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: O Maior

Objetivos: 

Escrever: Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 

Utilize a fórmula:

maiorAB=((a+b+abs(a-b))/2);

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar 
no resultado esperado.

    Entradas: O arquivo de entrada contém três valores inteiros.

    Saida: Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() {
 
    // Declaração Locais   
    int A, B, C;
    int maiorAB;
    
    //Leitura dos Dados
    scanf("%d %d %d", &A, &B, &C);
    
    // Cálculos
    maiorAB=((A+B+abs(A-B))/2);
    maiorAB=((maiorAB+C+abs(maiorAB-C))/2);


    // Escrita dos Resultados
    printf("%d eh o maior\n", maiorAB);
    
    // Finalizacao do programa
    return 0;
}