#include <stdio.h>
#include <string.h>

void validaNota() {
    float nota;
    do {
        printf("\n\nDigite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota invalida. Tente novamente.\n\n");
        }
    } while (nota < 0 || nota > 10);
    printf("\n\nNota válida: %.2f\n\n", nota);
}

void validaSenha() {
    char usuario[50], senha[50];
    do {
        printf("\n\nDigite o nome de usuario: ");
        scanf("%s", usuario);
        printf("Digite a senha: ");
        scanf("%s", senha);

        if (strcmp(usuario, senha) == 0) {
            printf("\n\n> Erro! A senha nao pode ser igual ao nome de usuario. Tente novamente.\n");
        }
    } while (strcmp(usuario, senha) == 0);
    printf("\n\n>> Usuário e senha cadastrados com sucesso.\n\n");
}

void validaInformacoes() {
    char sexo, estadoCivil;
    char nome[100];
    int idade;
    float salario;

    do {
        printf("\n\nDigite o nome (mais de 3 caracteres): ");
        scanf("%s", nome);
    } while (strlen(nome) <= 3);

    do {
        printf("Digite a idade (0-150): ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 150);

    do {
        printf("Digite o salário (maior que 0): ");
        scanf("%f", &salario);
    } while (salario <= 0);

    do {
        printf("Digite o sexo ('f' ou 'm'): ");
        scanf(" %c", &sexo);
    } while (sexo != 'f' && sexo != 'm');

    do {
        printf("Digite o estado civil ('s', 'c', 'v', 'd'): ");
        scanf(" %c", &estadoCivil);
    } while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd');

    printf("\n\n>> Informações validadas com sucesso.\n");
}

void imprimeNumeros1a20() {
    for (int i = 1; i <= 20; i++) {
        printf("%d\n", i);
    }
}

void imprimeNumeros1a20LadoALado() {
    for (int i = 1; i <= 20; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void maiorDeCincoNumeros() {
    int maior = -2147483648, num;
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
    }
    printf("\n\n>> O maior número é: %d\n", maior);
}

void somaEMediaDeCincoNumeros() {
    int soma = 0, num;
    for (int i = 0; i < 5; i++) {
        printf("\n\nDigite um número: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("\n\nSoma: %d\n", soma);
    printf("Media: %.2f\n\n", soma / 5.0);
}

void imprimeImpares1a50() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}

void intervaloEntreNumeros() {
    int num1, num2;
    printf("\n\nDigite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        for (int i = num2; i <= num1; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = num1; i <= num2; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void intervaloComSoma() {
    int num1, num2, soma = 0;
    printf("\n\nDigite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        for (int i = num2; i <= num1; i++) {
            printf("%d ", i);
            soma += i;
        }
    } else {
        for (int i = num1; i <= num2; i++) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\n\nSoma dos números: %d\n", soma);
}

void geradorTabuada() {
    int numero;
    printf("\n\nDigite um número entre 1 e 10 para gerar a tabuada: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 10) {
        printf("\n\nNúmero invalido. Digite um número entre 1 e 10.\n");
        return;
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int escolha;
    do {
        printf("\n========================================\n");
        printf("       ESCOLHA UMA OPÇÃO ABAIXO       ");
        printf("\n========================================\n");
        printf("1 - Validar nota\n");
        printf("2 - Cadastrar usuário e senha\n");
        printf("3 - Cadastrar informações pessoais\n");
        printf("4 - Imprimir números de 1 a 20 (um abaixo do outro)\n");
        printf("5 - Imprimir números de 1 a 20 (lado a lado)\n");
        printf("6 - Maior de 5 números\n");
        printf("7 - Soma e média de 5 números\n");
        printf("8 - Imprimir ímpares de 1 a 50\n");
        printf("9 - Intervalo entre dois números\n");
        printf("10 - Intervalo entre dois números com soma\n");
        printf("11 - Gerador de tabuada\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: validaNota(); break;
            case 2: validaSenha(); break;
            case 3: validaInformacoes(); break;
            case 4: imprimeNumeros1a20(); break;
            case 5: imprimeNumeros1a20LadoALado(); break;
            case 6: maiorDeCincoNumeros(); break;
            case 7: somaEMediaDeCincoNumeros(); break;
            case 8: imprimeImpares1a50(); break;
            case 9: intervaloEntreNumeros(); break;
            case 10: intervaloComSoma(); break;
            case 11: geradorTabuada(); break;
            case 0: printf("\nBEIJINHO, BEIJINHO, TCHAU TCHAU! \n\n"); break;
            default: printf("\n\nOpcao inválida! TCHAU\n\n");
        }
    } while (escolha != 0);

    return 0;
}
