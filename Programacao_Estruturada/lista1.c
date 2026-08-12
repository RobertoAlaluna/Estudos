#include <stdio.h>
#include <stdlib.h>

/*
1) Você deve escrever um módulo para receber um único parâmetro do tipo texto 
e escrevê-lo de volta à tela do computador. Atenção: este módulo não retorna 
resultado; apenas executa o processamento referente à escrita de um texto na 
saída do computador. Em seguida, chame esse módulo a partir de uma função 
main para testar seu programa.
*/
void escreverTexto(char* texto){
    printf("%s", texto);
}
    
int main(){
    escreverTexto("Hello World!");
    return 0;
}


/*
2) Uma empresa necessita cadastrar seus funcionários, considerando o seguinte:

a) o nome do funcionário; 
b) sua data de nascimento (divida a data de nascimento em três dados individuais: dia, mês e ano);
c) seu salário; 
d) uma  informação que identifica se o funcionário é chefe dentro da empresa (‘S’ para sim; ‘N’ para não).

Escreva um módulo exclusivamente para receber estes dados e escrever uma frase que contemple estes dados na tela. 
Em seguida, chame esse módulo a partir de uma função main para testar seu programa
*/

void cadastroFuncionario(){

    char nome[50];
    int diaNasc, mesNasc, anoNasc;
    float salario;
    char cargo;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o dia de nascimento: ");
    scanf("%d", &diaNasc);

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mesNasc);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("E chefe da empresa (S/N)? ");
    scanf(" %c", &cargo);

    printf("\n--- Dados do Funcionario ---\n");
    printf("Nome do funcionario: %s\nData de nascimento: %02d/%02d/%d\nSalario: R$ %.2f\nEh chefe: %c\n", nome, diaNasc, mesNasc, anoNasc, salario, cargo);
}

int main(){
    cadastroFuncionario();
    return 0;

}


/*
3) Escreva um módulo para receber o primeiro nome de uma pessoa em seu 
primeiro parâmetro. Este módulo possui ainda um segundo parâmetro que deve 
receber o sobrenome desta mesma pessoa. Como resultado de seu 
processamento, este módulo deve imprimir um texto no seguinte formato: 
sobrenome, seguido de uma vírgula, seguido do nome. Em seguida, chame
esse módulo a partir de uma função main para testar seu programa. Escreva 
um comentário logo no início do arquivo abordando o seu nome e a data de 
quando o programa foi criado
*/

//Roberto Alaluna Ferreira - 12/08/2026

void nomeSobrenome(char* nome, char* sobrenome){

    printf("%s, %s", sobrenome, nome);
}

int main(){

    char nome [50];
    char sobrenome [50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    nomeSobrenome(nome, sobrenome);
    return 0;
}