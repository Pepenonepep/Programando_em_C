//* Solicita ao usúario 3 lados de um triângulo;
//* Verifica se forma um triângulo;
//* Verifica se o triângulo é equilatero,isosceles ou escaleno.
//* Solicita ao usúario 3 lados de um triângulo;
//* Verifica se forma um triângulo;
//* Verifica se o triângulo é equilatero,isosceles ou escaleno.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    float lado1, lado2, lado3;
    printf("Digite o primeiro lado do triângulo: \n");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do triângulo: \n");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado do triângulo: \n");
    scanf("%f", &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triângulo é equilátero\n");
        } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
            printf("O triângulo é escaleno\n");
        } else {
            printf("O triângulo é isósceles\n");
        }
    } else {
        printf("Não forma um triangulo\n");
    }
}