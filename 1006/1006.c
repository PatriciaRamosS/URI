/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Média 2

Objetivos: 

Escrever: Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

    Entradas: O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).
    Saida: Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 dígito após o ponto decimal
    e com um espaço em branco antes e depois da igualdade.
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    // Declaração Locais
    double nota_1, nota_2, nota_3, media;

    //Leitura dos Dados
    scanf("%lf %lf %lf", &nota_1, &nota_2, &nota_3);

    // Cálculos
    media = ((nota_1*2)+(nota_2*3)+(nota_3*5));
    media = media/10; 

    // Escrita dos Resultados
    printf("MEDIA = %.1lf\n", media);

    // Finalizacao do programa
    return 0;
}