//* Pede os coeficientes "a", "b" e "c" para calcular, se existirem, as raízes de uma equação quadrática.
//* O programa verifica se "a" é diferente de zero. Se for, continua; se não, encerra o programa.
//* Calcula o discriminante (delta = b² - 4ac).
//* Se delta < 0, não existem raízes reais.
//* Se delta = 0, existe uma raiz real única, que é exibida ao usuário.
//* Se delta > 0, existem duas raízes reais distintas, que são exibidas ao usuário.


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    float a,b,c;
    printf("Para calcular as reizes reais da equação quadrática, se elas existem, digite o coeficiente 'a': ");
    scanf("%f",&a);
    printf("Digite o coeficiente 'b':  ");
    scanf("%f",&b);
    printf("Digite o coeficiente 'c':  ");
    scanf("%f",&c);
    if(a!=0){
    float delta;
    delta = b*b - 4*a*c;
    printf("Delta = %.2f\n",delta);
    if(delta< 0){
        printf("Não existem raizes reais.\n");
    }
    else if (delta >= 0){
            float Bhaskara1, Bhaskara2, raiz_unica;
            if(delta==0){
            raiz_unica = -(b)/2*a;
            printf("Delta = 0\n");
            printf("Raiz Única = %.2f\n", raiz_unica);
            }
            else{
            Bhaskara1 = (-(b)+sqrt(delta))/ 2*a;
            Bhaskara2 = (-(b)-sqrt(delta))/ 2*a;
            printf("Delta > 0\n");
            printf("Raiz 1 = %.2f e Raiz 2 = %.2f\n", Bhaskara1,  Bhaskara2);

            }
    }
    }
    else {
        printf("O coeficiente 'a' tem que ser diferente de zero, tente novamente.\n");
    }
}


