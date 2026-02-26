//* Pede ao usuário dois números 
//* Pede ao usuário que digite um simbolo dessas operações básicas (+, -, *, /)
//* Faz a operação entre os dois números com o simbolo da operação básica digitada pelo usuário



#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    float n1,n2, resultado;
    char simbolo[3];
    printf("Digite o primeiro número:\n");
    scanf("%f",&n1);
    printf("Digite o segundo número:\n");
    scanf("%f",&n2);
     printf("Digite a operação (+, -, *, /):\n");
    scanf("%s",simbolo);
    if((strcmp(simbolo,"+")==0) || (strcmp(simbolo,"-")==0) || (strcmp(simbolo,"*")==0) || (strcmp(simbolo,"/")==0)){
        if (strcmp(simbolo, "+") == 0) {
        resultado = n1 + n2;
        printf("Resultado = %.2f\n", resultado);
    }
    else if (strcmp(simbolo, "-") == 0) {
        resultado = n1 - n2;
        printf("Resultado = %.2f\n", resultado);
    }
    else if (strcmp(simbolo, "*") == 0) {
        resultado = n1 * n2;
        printf("Resultado = %.2f\n", resultado);
    }
    else if (strcmp(simbolo, "/") == 0) {
        if (n2 == 0) {
            printf("Divisão por zero não permitida\n");
        } else {
            resultado = n1 / n2;
            printf("Resultado = %.2f\n", resultado);
        }
    }
    }
    else {
        printf("Os símbolos não pertencem aos indicados\n"); 
    }
    

    return 0;
}