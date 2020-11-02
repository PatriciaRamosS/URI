/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 01/11/2020
Data de Atualização: 01/11/2020

Nome: Área do Círculo

Objetivos: 

Escrever: 
A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.


    Entradas: A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.
    Saida: Apresentar a mensagem "A=" seguido pelo valor da variável area, com 4 casas após o ponto decimal.
*/

// Bibliotecas de funções
#include <stdio.h>
 
int main() 
{
    //Variáveis Locais
    double area, raio, pi=3.14159;

    //Leitura dos dados
    scanf("%lf", &raio);

    //Cálculo
    area = (pow(raio,2)*pi);

    // Escrita da saida pedida
    printf("A=%.4lf\n",area);
    
    // Finalizacao do programa
    return 0;
}