//*Pede para o usuário digitar os vértices do opostos do primeiro retângulo
//*Pede para o usuário digitar os vértices do opostos do segundo retângulo
//*Calcula os limites do primeiro retângulo
//*Calcula os limites do segundo retângulo
//*Verifica se NÃO há sobreposição

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int x1,x2,y1,y2;
    printf("Digite os vértices opostos do primeiro retângulo\n");
    printf("x1: ");scanf("%d",&x1);printf("\n");
    printf("y1: ");scanf("%d",&y1);printf("\n");
    printf("x2: ");scanf("%d",&x2);printf("\n");
    printf("y2: ");scanf("%d",&y2);printf("\n");
    int x3,x4,y3,y4;
    printf("Digite os vértices opostos do primeiro retângulo\n");
    printf("x3: ");scanf("%d",&x3);printf("\n");
    printf("y3: ");scanf("%d",&y3);printf("\n");
    printf("x4: ");scanf("%d",&x4);printf("\n");
    printf("y4: ");scanf("%d",&y4);printf("\n");
    
    // Calcula os limites do primeiro retângulo
    int minX1 = (x1 < x2) ? x1 : x2;
    int maxX1 = (x1 > x2) ? x1 : x2;
    int minY1 = (y1 < y2) ? y1 : y2;
    int maxY1 = (y1 > y2) ? y1 : y2;

    // Calcula os limites do segundo retângulo
    int minX2 = (x3 < x4) ? x3 : x4;
    int maxX2 = (x3 > x4) ? x3 : x4;
    int minY2 = (y3 < y4) ? y3 : y4;
    int maxY2 = (y3 > y4) ? y3 : y4;

    // Verifica se NÃO há sobreposição
    if (maxX1 < minX2 || maxX2 < minX1 || maxY1 < minY2 || maxY2 < minY1) {
        printf("Os retângulos NÃO se sobrepõem.\n");
    } else {
        printf("Os retângulos se sobrepõem.\n");
    }
}