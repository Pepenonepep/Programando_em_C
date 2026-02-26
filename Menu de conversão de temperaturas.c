//*Pede ao usuário para digitar 1 ou 2 para a transformações da temparatura
//*Se o usuário digitar 3 o programa acaba
//*Se o usuário digitar um numero diferente desses 3 o programa devolve "Opção invalida"


#include <stdio.h>
#include <locale.h> 

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("Escolha:\n");
    printf("Digite 1 se quer transformar Celsius para Fahrenheit\n");
    printf("Digite 2 se quer transformar Fahrenheit para Celsius\n");
    printf("Digite 3 se quer Sair\n");
    int x;
    float celsius,fahrenheit;
    scanf("%d",&x);
    if(x==1 || x==2 || x==3){
        switch (x){
        case 1:
        printf("Digite a temperatura em Celsius: "); 
        scanf("%f",&celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("Resultado: %.2f F\n",fahrenheit);
        break;

        case 2:
        printf("Digite a temperatura em Fahrenheit: "); 
        scanf("%f",&fahrenheit);
        celsius = (((fahrenheit - 32)*5)/9);
        printf("Resultado: %.2f C\n",celsius);
        break;

        case 3:
        break;

        }
    }
    else { 
        printf("Opção inválida\n");
    }

}