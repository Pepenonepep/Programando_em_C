//*Pede ao usuário para digitar um número entre 1 e 100
//*Responde ao usuário se esse número desse intervalo é par ou impar


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
 int n;
printf("Digite um número entre 1 e 100: ");
 scanf("%d",&n);
 if(n>1 && n < 100){
    if(n%2==0){
        printf("O número é Par\n");
    }
    else {
        printf("O número é Impar\n");
    }
 }
 else {
    printf("Número fora do intervalo permitido\n");
 }
}