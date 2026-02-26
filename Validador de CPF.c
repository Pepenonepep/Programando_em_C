//* Primeiro, ele verifica se o CPF fornecido tem exatamente 11 dígitos. Se tiver mais, retorna uma mensagem de erro.
//* Em seguida, calcula o primeiro dígito verificador. Ele faz isso multiplicando cada um dos 9 primeiros dígitos do CPF, da esquerda para a direita, por números de 10 a 2. 
//* A soma desses resultados é dividida por 11, e o resto é obtido.
//* Se o resto for menor que 2, o primeiro dígito verificador é 0. Caso contrário, o dígito verificador é o resultado de 11 menos o resto.
//* O cálculo para o segundo dígito verificador é similar, mas usa os 10 primeiros dígitos do CPF (incluindo o primeiro dígito verificador recém-calculado). A multiplicação é feita por números de 11 a 2.
//* Finalmente, o programa compara os dois dígitos verificadores calculados com os dois últimos dígitos do CPF original. Se eles coincidirem, o CPF é considerado válido. Caso contrário, é inválido.

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char cpf[12];
     int i, soma = 0, resto, div_1, div_2;
    printf("Digite o seu CPF sem pontos. ex: 12345678910\n");
    scanf("%11s",&cpf);

    if(strlen(cpf) != 11){
         printf("CPF não está dentro dos 11 dígitos, tente novamente\n");
        return 1;
    }
    
int todos_iguais = 1;
    for (i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            todos_iguais = 0;
            break;
        }
    }
    if (todos_iguais) {
        printf("CPF inválido (todos os dígitos iguais)\n");
        return 1;
    }

    for (i=0; i < 9; i++){
        soma += (cpf[i] - '0') *  (10-i);
    }

     resto = soma % 11;
     
    (resto<2) ? div_1=0 : (div_1 = 11 - resto);

    soma = 0;

    for (i=0; i < 9; i++){
        soma += (cpf[i] - '0') *  (11-i);
    }
    soma += div_1 * 2;
    resto = soma % 11;

    (resto < 2) ? div_2=0 : (div_2=11-resto);

    div_1 == (cpf[9] - '0') && div_2 == (cpf[10] - '0') ?  printf("Esse CPF é válido\n") : printf("Esse CPF não é válido\n");
       
    
    

    return 0;
}