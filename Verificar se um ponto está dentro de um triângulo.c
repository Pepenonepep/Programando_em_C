//* Pede ao usuário os vértices do triângulo (x1 y1 x2 y2 x3 y3)
//* Pede ao usuário os pontos "x" e "y".
//* Calcula  a área total do triângulo ABC
//* Calcula as áreas PAB, PBC, e PCA
//* Se a soma das áreas PAB + PBC + PCA for igual à área ABC, o ponto está dentro.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    int x1, y1, x2, y2, x3, y3;
    printf("Digite os vértices do triângulo (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    int pontox, pontoy;
    printf("Digite o ponto (x y): ");
    scanf("%d %d", &pontox, &pontoy);

    float areaABC = 0.5 * fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    float areaPAB = 0.5 * fabs(pontox*(y1-y2) + x1*(y2-pontoy) + x2*(pontoy-y1));
    float areaPBC = 0.5 * fabs(pontox*(y2-y3) + x2*(y3-pontoy) + x3*(pontoy-y2));
    float areaPCA = 0.5 * fabs(pontox*(y3-y1) + x3*(y1-pontoy) + x1*(pontoy-y3));

    if (fabs((areaPAB + areaPBC + areaPCA) - areaABC) < 0.0001) {
        printf("O ponto está dentro do triângulo.\n");
    } else {
        printf("O ponto não está dentro do triângulo.\n");
    }
    return 0;
    }