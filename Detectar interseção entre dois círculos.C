//* Pede as coordenadas dos circulos e os raios.
//* Responde se os círculos sao tangentes, se intersectam ou um está completamente dentro do outro.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil"); 
    float x1,y1,r1,x2,y2,r2,d;
    printf("Digite o 'x' do círculo 1: ");scanf(" %f", &x1);
    printf("Digite o 'y' do círculo 1: ");scanf(" %f", &y1);
    printf("Digite o raio do círculo 1: ");scanf(" %f", &r1);
    printf("Digite o 'x' do círculo 2: ");scanf(" %f", &x2);
    printf("Digite o 'y' do círculo 2: ");scanf(" %f", &y2);
    printf("Digite o raio do círculo 2: ");scanf(" %f", &r2);
    
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    if (fabs(d - (r1 + r2)) < 0.0001 || fabs(d - fabs(r1 - r2)) < 0.0001) {
        printf("Os círculos são tangentes\n");
    }
    else if ((fabs(r1-r2)) < d && d < (r1+r2)){
        printf("Os círculos se intersectam\n");
    }
    else if (d < (fabs(r1-r2))){
        printf("Um círculo está completamente dentro do outro\n");
    }
    else{
        printf("Os círculos não se tocam\n");
    }
}