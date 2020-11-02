/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Média 1

Objetivos: 

Escrever: Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). 
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

    Entradas: O arquivo de entrada contém 2 valores com uma casa decimal cada um.
    Saida: Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, 
    com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade. 
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    // Declaração Locais
    double nota_1, nota_2, media;

    //Leitura dos Dados
    scanf("%lf %lf", &nota_1, &nota_2);

    // Cálculos
    media = ((nota_1*2)+(nota_2*7.5));
    media = media/11; 

    // Escrita dos Resultados
    printf("MEDIA = %.5lf\n", media);

    // Finalizacao do programa
    return 0;
}