#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*A biblioteca math.h oferece algumas funções matemáticas. Supondo a
inexistência desta biblioteca, implemente uma função para calcular:
a) o piso de um número real, tal como a função floor;
b) o teto de um número real, tal como a função ceil.
Em seguida, chame estas funções a partir de um módulo main para testar seu
programa.*/

int calculaPiso(float num){
    return (int)num;
}

int calculaTeto(float num){
    int inteiro = (int)num;

    if(num > inteiro){
        return inteiro + 1;
    }

    return inteiro;
}

int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("Piso: %d\n", calculaPiso(num));
    printf("Teto: %d\n", calculaTeto(num));

    return 0;
}


/*Implemente uma função para calcular o fatorial de um número. O fatorial de 0
é 1, por definição. Para qualquer outro número inteiro positivo n, o seu fatorial
é dado por n x (n-1) x (n-2) x ... x 3 x 2 x 1. Em seguida, chame esta função a
partir de um módulo main para testar seu programa.
*/

int calcFatorial(int num){

    if (num == 0) {
        return 1;
    }

    int i;

    for(i = num - 1; i > 0; i--){
        num = num * i;
    }

    return num;
}


int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int resultado = calcFatorial(num);
    printf("O fatorial eh: %d\n", resultado);

    return 0;
}






/*Implemente uma função para calcular a potência entre dois números inteiros
quaisquer. Em seguida, chame esta função a partir de um módulo main para
testar seu programa*/

// Função que calcula a potência de uma base elevada a um expoente
double calcularPotencia(int base, int expoente) {
    double resultado = 1.0;
    int expAbsoluto = expoente < 0 ? -expoente : expoente;

    // Multiplica a base pelo número de vezes do expoente absoluto
    for (int i = 0; i < expAbsoluto; i++) {
        resultado *= base;
    }

    // Se o expoente for negativo, inverte o resultado (1 / resultado)
    if (expoente < 0) {
        return 1.0 / resultado;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("--- Teste de Calculo de Potencia ---\n\n");

    base = 2; expoente = 3;
    printf("%d elevado a %d = %.2f\n", base, expoente, calcularPotencia(base, expoente));

    base = 2; expoente = -3;
    printf("%d elevado a %d = %.2f\n", base, expoente, calcularPotencia(base, expoente));

    base = -3; expoente = 2;
    printf("%d elevado a %d = %.2f\n", base, expoente, calcularPotencia(base, expoente));

    base = -3; expoente = -2;
    printf("%d elevado a %d = %.2f\n", base, expoente, calcularPotencia(base, expoente));

    return 0;
}
