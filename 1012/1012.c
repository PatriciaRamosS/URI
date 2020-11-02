/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Área

Objetivos: 

Escrever: Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:

a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

    Entradas: O arquivo de entrada contém três valores com um dígito após o ponto decimal.

    Saida: O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, 
    sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado 
    com 3 dígitos após o ponto decimal.
*/

// Bibliotecas de funções
#include <stdio.h>
 
// Declarações Globais
// Constantes e Tipos de Dados
#define pi 3.14159
 
int main() {
 
    // Declaração Locais   
    double A, B, C;
    double area_Triangulo, area_Circulo, area_Trapezio, area_Quadrado, area_Retangulo;
    
    //Leitura dos Dados
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Cálculos
    area_Triangulo = ((A*C)/2);

    area_Circulo   = (pi*pow(C,2));

    area_Trapezio  = (((A+B)*C)/2);

    area_Quadrado  = (pow(B,2));

    area_Retangulo = A*B;
    
    // Escrita dos Resultados
    printf("TRIANGULO: %.3lf\n", area_Triangulo);
    printf("CIRCULO: %.3lf\n", area_Circulo);
    printf("TRAPEZIO: %.3lf\n", area_Trapezio);
    printf("QUADRADO: %.3lf\n", area_Quadrado);
    printf("RETANGULO: %.3lf\n", area_Retangulo);
    
    // Finalizacao do programa
    return 0;
}