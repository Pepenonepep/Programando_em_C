//*Pede ao usuário o peso dele em kg e sua altura em metros, respectivamente.
//*Cálcula o IMC (Índice de massa corporal) do usuário.
//*Informa ao usuário se ele está abaixo do peso, com peso normal, sobrepeso ou obeso.

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese_Brazil");
    float Peso_kg,Altura_m;

    printf("Digite o seu peso em kg e altura em metros para saber o seu IMC(Índice de massa corporal), respectivamente\n");
    scanf("%f %f",&Peso_kg, &Altura_m);

    float imc;

    imc = Peso_kg/(Altura_m*Altura_m);

    if(imc < 18.5){
        printf("IMC = %.1f\n",imc);
        printf("Você está abaixo do peso\n");
    }
    else if(imc >= 18.5 && imc < 25.0){
        printf("IMC = %.1f\n",imc);
        printf("Você está com o peso normal\n");
    }
    else if(imc >= 25.0 && imc < 30.0){
        printf("IMC = %.1f\n",imc);
        printf("Você está com sobrepeso\n");
    }
    else if(imc >= 30.0){
        printf("IMC = %.1f\n",imc);
        printf("Você está obeso\n");
    }
}