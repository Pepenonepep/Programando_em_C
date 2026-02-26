//* Calcula a distância do ponto ao centro do círculo e verifica se está dentro;
//* Calcula os limites do quadrado com os vértices opostos;
//* Verifica se o ponto está fora do quadrado;
//* Exibe a mensagem correta conforme a condição.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int x,y,r;
    printf("Digite o 'x' do círculo: ");scanf("%d",&x);printf("\n");
    printf("Digite o 'y' do círculo: ");scanf("%d",&y);printf("\n");
    printf("Digite o raio do círculo: ");scanf("%d",&r);printf("\n");
    int x1,y1,x2,y2;
    printf("Digite os vértices opostos do quadrado: \n");
    printf("x1: ");scanf("%d",&x1);printf("\n");
    printf("y1: ");scanf("%d",&y1);printf("\n");
    printf("x2: ");scanf("%d",&x2);printf("\n");
    printf("y2: ");scanf("%d",&y2);printf("\n");
    int xp,yp;
    printf("Digite o ponto x: \n");scanf("%d",&xp);
    printf("Digite o ponto y: \n");scanf("%d",&yp);

    int distancia,circulo;
    distancia = sqrt(pow(xp-x,2)+pow(yp-y,2));
    if(distancia<r){
        circulo = 1;
    }
    else {
        circulo = 0;
    }
    int minX = (x1 < x2) ? x1 : x2;
    int maxX = (x1 > x2) ? x1 : x2;
    int minY = (y1 < y2) ? y1 : y2;
    int maxY = (y1 > y2) ? y1 : y2;

    int fora_quadrado = (xp < minX || xp > maxX || yp < minY || yp > maxY);

    if (circulo == 1  && fora_quadrado) {
        printf("O ponto está dentro do círculo e fora do quadrado.\n");
    } else {
        printf("O ponto NÃO está dentro do círculo e fora do quadrado.\n");
    }
}