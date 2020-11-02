/*

Autor(es): Patrícia da Silva Ramos
Data de Criação: 02/11/2020
Data de Atualização: 02/11/2020

Nome: Distância Entre Dois Pontos

Objetivos: 

Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) 
e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: 

Utilize a fórmula:

distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    Entradas: O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: 
    x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

    Saida: Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/

// Bibliotecas de funções
#include <stdio.h>
#include <math.h>
 
int main() {
 
    // Declaração Locais   
    double x1, x2, x3, y1, y2, y3;
    double distancia;
    
    //Leitura dos Dados
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    // Cálculos
    x3 = x2-x1;
    y3 = y2-y1;
    distancia=(sqrt(pow(x3,2)+pow(y3,2)));

    // Escrita dos Resultados
    printf("%.4lf\n", distancia);
    
    // Finalizacao do programa
    return 0;
}