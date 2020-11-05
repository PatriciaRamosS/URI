/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Gasto de Combustível

Objetivos: 

Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. 
Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na 
viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos 
litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

    Entradas: O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a 
    velocidade média durante a mesma (em km/h).

    Saida: Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal
*/

// Bibliotecas de funções
#include <stdio.h>
#include <stdlib.h>
#include<locale.h> //necessário para usar setlocale
#include <math.h>
 
int main() 
{
    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    // Declaração Locais   
    double horas, velocidade;
    double litros;
    
    //Leitura dos Dados
    scanf("%lf %lf", &horas, &velocidade);
    
    // Cálculos
    litros = (horas * velocidade) / 12;

    // Escrita dos Resultados
    printf("%.3lf\n", litros);
    
    // Finalizacao do programa
    return 0;
}