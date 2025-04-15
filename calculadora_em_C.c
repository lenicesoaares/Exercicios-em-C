#include <stdio.h>

int soma(int a, int b){
    int soma = a + b; 
    printf("A soma de %d + %d é: %d\n\n", a, b, soma);
}

int sub(int c, int d){
    int sub = c - d; 
    printf("A subtração de %d - %d é: %d\n\n", c, d, sub);
}

int multi(int e, int f){
    int multi = e * f; 
    printf("A multiplicação de %d * %d é: %d\n\n", e,f, multi); 
}

int div(int g, int h){
    int div = g / h; 
    printf("A divisao de %d / %d é: %d\n\n", g,h, div);
}

int main() {
    
    int operador; 
    int num1, num2; 
    
    do{ printf("OPERAÇÕES NÚMERICAS\n");
    printf("SOMA--------------1\n");
    printf("SUBTRAÇÃO---------2\n");
    printf("MULTIPLICAÇÃO-----3\n");
    printf("DIVISÃO-----------4\n\n");
    printf("SAIR-----------0\n\n");
    printf("Digite sua opção: ");
    scanf("%d", &operador);
    if (operador == 0) {  
        printf("TCHAU!\n");
        break;  
        }
    printf("Agora, digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Agora, digite o segundo número: ");
    scanf("%d", &num2);

        switch(operador){
        case 1: 
        soma(num1,num2);
        
        break; 
        
        case 2: 
        sub(num1,num2);
        break;

        case 3: 
        multi(num1,num2);
        break; 
        
        case 4:
        div(num1,num2);
        break;
        
        case 0:
        printf("TCHAU, BEIJOS!");
        break;
    }
    } while(operador != 0);
    
    return 0;
}