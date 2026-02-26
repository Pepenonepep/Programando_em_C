//* O codigo pede as coordenadas x e y do ponto 1,2 e 3;
//* Forma uma matriz 3x3;
//* Faz o cálculo com a regra de Sarrus para achar o determinante;
//* Se o determinante for igual a zero os pontos são colineares.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("Digite o valor das coordenadas do ponto 1:\n");
    printf("x: ");
    scanf("%d",&x1);
    printf("y: ");
    scanf("%d",&y1);
    printf("Digite o valor das coordenadas do ponto 2:\n");
     printf("x: ");
     scanf("%d",&x2);
    printf("y: ");
    scanf("%d",&y2);
    printf("Digite o valor das coordenadas do ponto 3:\n");
     printf("x: ");
     scanf("%d",&x3);
    printf("y: ");
    scanf("%d",&y3);
    
    printf("\n");
    printf("Matriz 3x3: \n");
    printf("\n");
        printf("| %d | ",x1); printf(" %d | ",y1); printf(" 1 |\n");
        printf("| %d | ",x2); printf(" %d | ",y2); printf(" 1 |\n");
        printf("| %d | ",x3); printf(" %d | ",y3); printf(" 1 |\n");
    printf("\n");

    printf("Repetindo as duas primeiras colunas: \n");
    printf("\n");
        printf("| %d | ",x1); printf(" %d | ",y1); printf(" 1 |");printf(" %d | ",x1); printf(" %d | \n",y1);
        printf("| %d | ",x2); printf(" %d | ",y2); printf(" 1 |");printf(" %d | ",x2); printf(" %d | \n",y2);
        printf("| %d | ",x3); printf(" %d | ",y3); printf(" 1 |");printf(" %d | ",x3); printf(" %d | \n",y3);
    printf("\n");

    printf("Multiplicando as diagonais principais da esquerda para direita: \n");
    printf("\n");
    int diagonal_1,diagonal_2,diagonal_3,diagonal_11,diagonal_22,diagonal_33;
    diagonal_1 = x1*y2*1;
    diagonal_2 = y1*1*x3;
    diagonal_3 = 1*x2*y3;
    diagonal_11 = x3*y2*1;
    diagonal_22 = y3*1*x1;
    diagonal_33 = 1*x2*y1;
    printf("Diagonal 1 da esquerda para direita: %d \n",diagonal_1);
    printf("Diagonal 2 da esquerda para direita: %d \n",diagonal_2);
    printf("Diagonal 3 da esquerda para direita: %d \n",diagonal_3);
    int diagonal_esqdir, diagonal_diresq;
    diagonal_esqdir = diagonal_1+diagonal_2+diagonal_3;
    diagonal_diresq = diagonal_11+diagonal_22+diagonal_33;
    printf("\n");
     printf("Multiplicando as diagonais principais da direita para esquerda: \n");
    printf("\n");
    printf("Diagonal 1 da direita para esquerda: %d \n",diagonal_11);
    printf("Diagonal 2 da direita para esquerda: %d \n",diagonal_22);
    printf("Diagonal 3 da direita para esquerda: %d \n",diagonal_33);
    printf("\n");
    int determinante;
    determinante = diagonal_esqdir - diagonal_diresq;
    if(determinante == 0){
        printf("Os pontos são colineares.\n");
    }
    else{
        printf("Os pontos não são colineares.\n");
    }
}