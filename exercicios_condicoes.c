#include <stdio.h>

void maiorNumero() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else {
        printf("O maior número é: %d\n", num2);
    }
}

void positivoOuNegativo() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O valor é positivo.\n");
    } else {
        printf("O valor é negativo.\n");
    }
}

void verificaSexo() {
    char sexo;
    printf("Digite o sexo (F para Feminino ou M para Masculino): ");
    scanf(" %c", &sexo);  // Espaco antes de %c para consumir qualquer caractere extra

    if (sexo == 'F' || sexo == 'f') {
        printf("Feminino\n");
    } else if (sexo == 'M' || sexo == 'm') {
        printf("Masculino\n");
    } else {
        printf("Sexo Inválido!\n");
    }
}

void verificaVogalOuConsoante() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra %c é uma vogal.\n", letra);
    } else {
        printf("A letra '%c' é uma consoante.\n", letra);
    }
}

void mediaAluno() {
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    if (media == 10) {
        printf("Aprovado com distinção\n");
    } else if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

void maiorTresNumeros() {
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("O maior número é: %d\n", num3);
    }
}

void maiorEMenorTresNumeros() {
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int maior = num1, menor = num1;

    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;

    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
}

void compraProduto() {
    float produto1, produto2, produto3;
    printf("Digite o preço do primeiro produto: ");
    scanf("%f", &produto1);
    printf("Digite o preço do segundo produto: ");
    scanf("%f", &produto2);
    printf("Digite o preço do terceiro produto: ");
    scanf("%f", &produto3);

    if (produto1 < produto2 && produto1 < produto3) {
        printf("O produto mais barato custa: %.2f\n", produto1);
    } else if (produto2 < produto1 && produto2 < produto3) {
        printf("O produto mais barato custa: %.2f\n", produto2);
    } else {
        printf("O produto mais barato custa: %.2f\n", produto3);
    }
}

void ordemDecrescente() {
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Ordem decrescente: %d %d %d\n", num1, num2, num3);
        } else {
            printf("Ordem decrescente: %d %d %d\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Ordem decrescente: %d %d %d\n", num2, num1, num3);
        } else {
            printf("Ordem decrescente: %d %d %d\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("Ordem decrescente: %d %d %d\n", num3, num1, num2);
        } else {
            printf("Ordem decrescente: %d %d %d\n", num3, num2, num1);
        }
    }
}

void turnoEstudo() {
    char turno;
    printf("Digite o turno em que voce estuda (M-matutino, V-vespertino, N-noturno): ");
    scanf(" %c", &turno);

    if (turno == 'M' || turno == 'm') {
        printf("Bom Dia!\n");
    } else if (turno == 'V' || turno == 'v') {
        printf("Boa Tarde!\n");
    } else if (turno == 'N' || turno == 'n') {
        printf("Boa Noite!\n");
    } else {
        printf("Valor Inválido!\n");
    }
}

void reajusteSalario() {
    float salario, novoSalario, aumento;
    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    if (salario <= 280.00) {
        aumento = salario * 0.20;
        novoSalario = salario + aumento;
        printf("Salário antes do reajuste: %.2f\n", salario);
        printf("Percentual de aumento: 20%%\n");
    } else if (salario <= 700.00) {
        aumento = salario * 0.15;
        novoSalario = salario + aumento;
        printf("Salário antes do reajuste: %.2f\n", salario);
        printf("Percentual de aumento: 15%%\n");
    } else if (salario <= 1500.00) {
        aumento = salario * 0.10;
        novoSalario = salario + aumento;
        printf("Salário antes do reajuste: %.2f\n", salario);
        printf("Percentual de aumento: 10%%\n");
    } else {
        aumento = salario * 0.05;
        novoSalario = salario + aumento;
        printf("Salário antes do reajuste: %.2f\n", salario);
        printf("Percentual de aumento: 5%%\n");
    }

    printf("Valor do aumento: %.2f\n", aumento);
    printf("Novo salário: %.2f\n", novoSalario);
}

int main() {
    int escolha;
    do {
        printf("\n========================================\n");
        printf("       ESCOLHA UMA OPÇÃO ABAIXO       ");
        printf("\n========================================\n");
        printf("1 - Descobrir qual Maior número\n");
        printf("2 - Digite um número para descobrir se o número é Positivo ou Negativo\n");
        printf("3 - Digite para descobrir o Sexo\n");
        printf("4 - Digite uma letra para descobrir se é Vogal ou Consoante\n");
        printf("5 - Descobrir aprovação do Aluno\n");
        printf("6 - Digite três números para descobrir o maior\n");
        printf("7 - Digite três números para descobrir o Maior e Menor\n");
        printf("8 - Compra do Produto mais barato\n");
        printf("9 - Ordem decrescente de três numeros inteiros\n");
        printf("10 - Me conte seu turno de estudo\n");
        printf("11 - Descubra se você teve reajuste de salário\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: maiorNumero(); break;
            case 2: positivoOuNegativo(); break;
            case 3: verificaSexo(); break;
            case 4: verificaVogalOuConsoante(); break;
            case 5: mediaAluno(); break;
            case 6: maiorTresNumeros(); break;
            case 7: maiorEMenorTresNumeros(); break;
            case 8: compraProduto(); break;
            case 9: ordemDecrescente(); break;
            case 10: turnoEstudo(); break;
            case 11: reajusteSalario(); break;
            case 0: printf("BEIJINHO, BEIJINHO, TCHAU TCHAU! \n"); break;
            default: printf("Opcao inválida! TCHAU\n");
        }
    } while (escolha != 0);

    return 0;
}
