//* Pede ao usuário um número inteiro
//* Responde ao usuário se o número é perfeito, deficiente ou abundante, ou seja, se a soma dos divisores desse número dado pelo usuário é igual, menor ou maior.


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("Digite um número INTEIRO aleatório para o programa dizer se a soma dos divisores desse número é perfeito, abundante ou deficiente: ");
    int numero,i,soma=0,resto;
    scanf("%d",&numero);
    for(i=1;i<numero;i++){
        resto= numero%i;
        if(resto == 0){
            soma += i;
        }
    }
    if(soma==numero){
        printf("O número %d é perfeito (a soma dos divisores é igual ao número).",numero);
    }
    else if (soma<numero){
         printf("O número %d é deficiente (a soma dos divisores é menor que o número).",numero);
    }
    else {
        printf("O número %d é abundante (a soma dos divisores é maior que o número).",numero);
    }
    

} 
