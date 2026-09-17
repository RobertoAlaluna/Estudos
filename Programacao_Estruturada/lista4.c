#include <stdio.h>
#include <stdlib.h>

/*Programe uma função para receber em seus parâmetros dois números
inteiros. Sua função deve indicar se o primeiro parâmetro é divisível pelo
segundo. Em seguida, chame esta função a partir de um módulo main para
testar seu programa. Neste programa, informe se um número fornecido pelo
usuário é par ou ímpar.*/

int ehDivisivel(int num1, int num2){

    if (num1 % num2 == 0) {
        return 1; // true
    } else {
        return 0; // false
    }
}

int main(){
    int a, b;

    printf("Digite seu primeiro numero: ");
    scanf("%d", &a);

    printf("Digite seu segundo numero: ");
    scanf("%d", &b);


    if(ehDivisivel(a, b)){
        printf("%d eh divisivel por %d\n", a, b);
    }else{
        printf("%d nao eh divisivel por %d\n", a, b);
    }


    if(a % 2 == 0){
        printf("O primeiro numero (%d) eh PAR.\n", a);
    }else{
        printf("O primeiro numero (%d) eh IMPAR.\n", a);
    }

    if(b % 2 == 0){
        printf("O segundo numero (%d) eh PAR.\n", b);
    }else{
        printf("O segundo numero (%d) eh IMPAR.\n", b);
    }

    return 0;
}



/*Primeiramente, programe uma função para receber dois números e retornar o
maior entre eles. Posteriormente, programe outra função para receber três
números e retornar o maior entre eles. Tente escrever esta segunda função
fazendo com que ela tenha uma única linha de código. Fique à vontade para
chamar a primeira função para implementar a segunda. Em seguida, chame
as funções criadas a partir de um módulo main para testar seu programa. */

int maiorNum(int num1, int num2){
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int maiorValor(int num1, int num2, int num3){
    return maiorNum(num1, maiorNum(num2, num3));
}

int main(){

    int a, b, c;

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Maior entre %d e %d: %d\n", a, b, maiorNum(a, b));
    printf("Maior entre %d, %d e %d: %d\n", a, b, c, maiorValor(a, b, c));

    return 0;
}



/*O Índice de Massa Corpórea (IMC) indica o grau de obesidade de um
paciente. A tabela a seguir ilustra os diferentes níveis de obesidade em que
uma pessoa pode se encontrar:
IMC (kg/m2)
Tipo de obesidade
< 25 Ausente
≥ 25 e < 30 Sobrepeso
≥ 30 e < 35 Obesidade Grau I
≥ 35 e < 40 Obesidade Grau II
≥ 40 Obesidade Mórbida
O Índice de Massa Corpórea é calculado pela expressão IMC = Peso/altura²
Programe um módulo para receber em seus parâmetros o peso e a altura de
uma pessoa para retornar:
▪ 0, para ausente de obesidade;
▪ 1, para sobrepeso;
▪ 2, para obesidade grau 1;
▪ 3, para obesidade grau 2;
▪ 4, para obesidade mórbida.
Em seguida, a partir de um módulo main, peça para o usuário fornecer seu
peso e sua altura para, em seguida, conhecer seu tipo de obesidade.*/

int calculaIMC(float p, float a) {
    float imc = p / (a * a);

    if (imc < 25) {
        return 0;
    } else if (imc >= 25 && imc <30) {
        return 1;
    } else if (imc >= 30 && imc <35) {
        return 2;
    } else if (imc >= 35 && imc <40) {
        return 3;
    } else {
        return 4;
    }
}

int main(void) {
    float p, a;

    printf("Digite seu peso (kg) e sua altura (m): ");
    scanf("%f %f", &p, &a);

    int classificacao = calculaIMC(p, a);

    printf("Sua classificacao: %d\n", classificacao);

    return 0;
}



/* Programe um módulo para receber um valor inteiro entre 1 e 12 e retornar o 
nome do mês equivalente. Se o parâmetro não for um inteiro válido para um 
mês do ano, o retorno da função deve ser um texto vazio. Em seguida, chame
a função criada a partir de um módulo main para testar seu programa.
*/

const char* mes(int num) {
    switch (num) {
        case 1:  return "Janeiro";
        case 2:  return "Fevereiro";
        case 3:  return "Março";
        case 4:  return "Abril";
        case 5:  return "Maio";
        case 6:  return "Junho";
        case 7:  return "Julho";
        case 8:  return "Agosto";
        case 9:  return "Setembro";
        case 10: return "Outubro";
        case 11: return "Novembro";
        case 12: return "Dezembro";
        default: return "";
    }
}

int main(void) {
    int n;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &n);

    const char* nome = mes(n);

    if (nome[0] == '\0') {
        printf("Mes invalido!\n");
    } else {
        printf("Mes correspondente: %s\n", nome);
    }

    return 0;
}
