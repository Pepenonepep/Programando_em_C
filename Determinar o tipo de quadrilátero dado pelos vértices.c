//* Pede para o usuário digitar os vértices do quadrilátero
//* Calcula os lados e as diagonais.
//* Verifica se é quadrado, losango, retângulo, paralelogramo ou é um quadrilátero genérico.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Digite os vértices do quadrilátero\n");
    //*A
    printf("x1: ");
    scanf("%d",&x1);
    printf("y1: ");
    scanf("%d",&y1);
    //*B
     printf("x2: ");
     scanf("%d",&x2);
    printf("y2: ");
    scanf("%d",&y2);
    //*C
     printf("x3: ");
     scanf("%d",&x3);
    printf("y3: ");
    scanf("%d",&y3);
    //*D
     printf("x4: ");
     scanf("%d",&x4);
    printf("y4: ");
    scanf("%d",&y4);
    // Calcula os lados
    double DAB = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    double DBC = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    double DCD = sqrt(pow(x4-x3,2)+pow(y4-y3,2));
    double DDA = sqrt(pow(x1-x4,2)+pow(y1-y4,2));

    // Calcula as diagonais
    double diagAC = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    double diagBD = sqrt(pow(x4-x2,2)+pow(y4-y2,2));

    // Verifica se é quadrado ou retângulo
    if (fabs(DAB - DBC) < 0.0001 && fabs(DAB - DCD) < 0.0001 && fabs(DAB - DDA) < 0.0001) {
        // Todos os lados iguais
        if (fabs(diagAC - diagBD) < 0.0001) {
            printf("O quadrilátero é um quadrado.\n");
        } else {
            printf("O quadrilátero é um losango.\n");
        }
    } else if (fabs(DAB - DCD) < 0.0001 && fabs(DBC - DDA) < 0.0001) {
        // Lados opostos iguais
        if (fabs(diagAC - diagBD) < 0.0001) {
            printf("O quadrilátero é um retângulo.\n");
        } else {
            printf("O quadrilátero é um paralelogramo.\n");
        }
    } else {
        printf("É um quadrilátero genérico.\n");
    }

    return 0;
}
