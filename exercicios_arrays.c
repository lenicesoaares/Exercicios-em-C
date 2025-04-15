#include <stdio.h>

void exercicio1() {
    int num[5];
    printf("Digite 5 numeros inteiros: ");
    for(int i = 0; i < 5; i++) scanf("%d", &num[i]);
    printf("Numeros digitados: ");
    for(int i = 0; i < 5; i++) printf("%d ", num[i]);
    printf("\n");
}

void exercicio2() {
    float numero[10];
    printf("Digite 10 numeros reais: ");
    for(int i = 0; i < 10; i++) scanf("%f", &numero[i]);
    printf("Ordem inversa: ");
    for(int i = 9; i >= 0; i--) printf("%.2f ", numero[i]);
    printf("\n");
}

void exercicio3() {
    float notas[4], media = 0;
    printf("Digite 4 notas: ");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media /= 4;
    printf("Notas: ");
    for(int i = 0; i < 4; i++) printf("%.2f ", notas[i]);
    printf("\nMedia: %.2f\n", media);
}

void exercicio4() {
    char caracteres[10];
    int consoantes = 0;
    printf("Digite 10 caracteres: ");
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);
        if (!(caracteres[i] == 'a' || caracteres[i] == 'e' || caracteres[i] == 'i' || caracteres[i] == 'o' || caracteres[i] == 'u' || 
              caracteres[i] == 'A' || caracteres[i] == 'E' || caracteres[i] == 'I' || caracteres[i] == 'O' || caracteres[i] == 'U')) {
            consoantes++;
        }
    }
    printf("Total de consoantes: %d\n", consoantes);
}

void exercicio5() {
    int numeros[20], pares[20], impares[20], p = 0, imp = 0;
    printf("Digite 20 numeros inteiros: ");
    for(int i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) pares[p++] = numeros[i];
        else impares[imp++] = numeros[i];
    }
    printf("Numeros: "); for(int i = 0; i < 20; i++) printf("%d ", numeros[i]);
    printf("\nPares: "); for(int i = 0; i < p; i++) printf("%d ", pares[i]);
    printf("\nImpares: "); for(int i = 0; i < imp; i++) printf("%d ", impares[i]);
    printf("\n");
}

void exercicio6() {
    float notas[10][4], medias[10], media;
    int aprovados = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite 4 notas do aluno %d: ", i+1);
        media = 0;
        for(int j = 0; j < 4; j++) {
            scanf("%f", &notas[i][j]);
            media += notas[i][j];
        }
        medias[i] = media / 4;
        if (medias[i] >= 7.0) aprovados++;
    }
    printf("Numero de alunos com media >= 7.0: %d\n", aprovados);
}

void exercicio7() {
    int arr[5], soma = 0, mult = 1;
    printf("Digite 5 numeros inteiros: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        soma += arr[i];
        mult *= arr[i];
    }
    printf("Soma: %d\nMultiplicacao: %d\n", soma, mult);
}

void exercicio8() {
    int idades[5];
    printf("Digite 5 idades: ");
    for(int i = 0; i < 5; i++) scanf("%d", &idades[i]);
    printf("Ordem inversa: ");
    for(int i = 4; i >= 0; i--) printf("%d ", idades[i]);
    printf("\n");
}

void exercicio9() {
    int arr[10], soma = 0;
    printf("Digite 10 numeros inteiros: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        soma += arr[i] * arr[i];
    }
    printf("Soma dos quadrados: %d\n", soma);
}

void exercicio10() {
    int a1[10], b2[10], c3[20];
    printf("Digite 10 numeros para o primeiro array: ");
    for(int i = 0; i < 10; i++) scanf("%d", &a1[i]);
    printf("Digite 10 numeros para o segundo array: ");
    for(int i = 0; i < 10; i++) scanf("%d", &b2[i]);
    for(int i = 0, j = 0; i < 10; i++) {
        c3[j++] = a1[i];
        c3[j++] = b2[i];
    }
    printf("Array intercalado: ");
    for(int i = 0; i < 20; i++) printf("%d ", c3[i]);
    printf("\n");
}

int main() {
    int escolha;
    printf("Escolha um número aleatório para escolher um programa (1 a 10): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: exercicio1(); break;
        case 2: exercicio2(); break;
        case 3: exercicio3(); break;
        case 4: exercicio4(); break;
        case 5: exercicio5(); break;
        case 6: exercicio6(); break;
        case 7: exercicio7(); break;
        case 8: exercicio8(); break;
        case 9: exercicio9(); break;
        case 10: exercicio10(); break;
        default: printf("Opção inválida!\n");
    return 0;
        
    }
}