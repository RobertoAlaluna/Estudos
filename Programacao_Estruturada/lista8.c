/*1. Considerando os estados civis solteiro, casado, viúvo, separado e desquitado,
escreva definições de tipos de dados para:
a. sexo;
b. estado civil.
Escreva uma aplicação para manipular a entrada e a saída de valores para esses
tipos*/


// a. Tipo de dado para Sexo
typedef enum {
    MASCULINO,
    FEMININO,
    OUTRO
} Sexo;

// b. Tipo de dado para Estado Civil
typedef enum {
    SOLTEIRO,
    CASADO,
    VIUVO,
    SEPARADO,
    DESQUITADO
} EstadoCivil;

// Função para exibir o Sexo
void imprimirSexo(Sexo s) {
    switch (s) {
        case MASCULINO:
            printf("Masculino\n");
            break;
        case FEMININO:
            printf("Feminino\n");
            break;
        case OUTRO:
            printf("Outro\n");
            break;
        default:
            printf("Sexo inválido!\n");
    }
}

// Função para exibir o Estado Civil
void imprimirEstadoCivil(EstadoCivil ec) {
    switch (ec) {
        case SOLTEIRO:
            printf("Solteiro(a)\n");
            break;
        case CASADO:
            printf("Casado(a)\n");
            break;
        case VIUVO:
            printf("Viúvo(a)\n");
            break;
        case SEPARADO:
            printf("Separado(a)\n");
            break;
        case DESQUITADO:
            printf("Desquitado(a)\n");
            break;
        default:
            printf("Estado civil inválido!\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Sexo meuSexo;
    EstadoCivil meuEstadoCivil;
    int opcao;


    printf("=== CADASTRO DE DADOS ===\n\n");

    printf("Informe o sexo (0 - Masculino, 1 - Feminino, 2 - Outro): ");
    scanf("%d", &opcao);
    meuSexo = (Sexo)opcao;

    printf("\nInforme o estado civil:\n");
    printf("0 - Solteiro\n1 - Casado\n2 - Viúvo\n3 - Separado\n4 - Desquitado\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    meuEstadoCivil = (EstadoCivil)opcao;

    printf("\n=== DADOS INFORMADOS ===\n");
    printf("Sexo: ");
    imprimirSexo(meuSexo);

    printf("Estado Civil: ");
    imprimirEstadoCivil(meuEstadoCivil);

    return 0;
}




/*2. Um endereço compõe-se de tipo (Rua, Avenida, Largo, Jardim, Estrada etc.),
logradouro, número, complemento, bairro, cidade, estado e CEP. Escreva uma
definição para um tipo de dado capaz de representar um endereço. Escreva uma
aplicação para manipular a entrada e a saída de valores para um endereço.*/

#include <stdio.h>
#include <string.h>

// Definição do novo tipo de dado
typedef struct {
    char tipo[20];
    char logradouro[100];
    int numero;
    char complemento[50];
    char bairro[50];
    char cidade[50];
    char estado[3];
    char cep[10];
} Endereco;

// Função para remover a quebra de linha (\n) lida pelo fgets
void limparQuebraDeLinha(char *texto) {
    texto[strcspn(texto, "\n")] = '\0';
}

int main() {
    Endereco meuEndereco;

    printf("=== CADASTRO DE ENDERECO ===\n\n");

    printf("Tipo (Rua, Avenida, Estrada, etc.): ");
    fgets(meuEndereco.tipo, sizeof(meuEndereco.tipo), stdin);
    limparQuebraDeLinha(meuEndereco.tipo);

    printf("Logradouro (Nome da rua/avenida): ");
    fgets(meuEndereco.logradouro, sizeof(meuEndereco.logradouro), stdin);
    limparQuebraDeLinha(meuEndereco.logradouro);

    printf("Numero: ");
    scanf("%d", &meuEndereco.numero);
    getchar();

    printf("Complemento (deixe em branco se nao houver): ");
    fgets(meuEndereco.complemento, sizeof(meuEndereco.complemento), stdin);
    limparQuebraDeLinha(meuEndereco.complemento);

    printf("Bairro: ");
    fgets(meuEndereco.bairro, sizeof(meuEndereco.bairro), stdin);
    limparQuebraDeLinha(meuEndereco.bairro);

    printf("Cidade: ");
    fgets(meuEndereco.cidade, sizeof(meuEndereco.cidade), stdin);
    limparQuebraDeLinha(meuEndereco.cidade);

    printf("Estado (Sigla, ex: RJ): ");
    fgets(meuEndereco.estado, sizeof(meuEndereco.estado), stdin);
    limparQuebraDeLinha(meuEndereco.estado);

    printf("CEP (ex: 28600-000): ");
    fgets(meuEndereco.cep, sizeof(meuEndereco.cep), stdin);
    limparQuebraDeLinha(meuEndereco.cep);

    printf("\n=== ENDERECO CADASTRADO ===\n");
    printf("%s %s, %d", meuEndereco.tipo, meuEndereco.logradouro, meuEndereco.numero);

    if (strlen(meuEndereco.complemento) > 0) {
        printf(" - %s", meuEndereco.complemento);
    }

    printf("\nBairro: %s\n", meuEndereco.bairro);
    printf("%s - %s\n", meuEndereco.cidade, meuEndereco.estado);
    printf("CEP: %s\n", meuEndereco.cep);

    return 0;
}






/*6. Devemos definir um telefone compondo as seguintes informações: DDD +
número + tipo (residencial, comercial e móvel). Um contato de uma agenda
telefônica precisa ser definido com o nome da pessoa e o seu telefone. Escreva
definições para tipos de dados capazes de representar o tipo do telefone, o
telefone e o contato da agenda. Escreva uma aplicação para manipular a entrada
e a saída de valores para um contato de uma agenda telefônica.
*/


// Definição do tipo do telefone
typedef enum {
    RESIDENCIAL = 1,
    COMERCIAL,
    MOVEL
} TipoTelefone;

// Definição da estrutura
typedef struct {
    int ddd;
    char numero[15];
    TipoTelefone tipo;
} Telefone;

// Definição da estrutura Contato
typedef struct {
    char nome[100];
    Telefone telefone;
} Contato;

// Função  para remover o '\n'
void limparBuffer(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Função para ler os dados de um contato
Contato lerContato() {
    Contato c;
    int opcaoTipo;

    printf("Digite o nome do contato: ");
    fgets(c.nome, sizeof(c.nome), stdin);
    limparBuffer(c.nome);

    printf("Digite o DDD (ex: 22): ");
    scanf("%d", &c.telefone.ddd);
    getchar(); // Limpa o '\n'

    printf("Digite o numero do telefone: ");
    fgets(c.telefone.numero, sizeof(c.telefone.numero), stdin);
    limparBuffer(c.telefone.numero);

    do {
        printf("Escolha o tipo do telefone (1 - Residencial, 2 - Comercial, 3 - Movel): ");
        scanf("%d", &opcaoTipo);
        getchar(); // Limpa o '\n'

        if (opcaoTipo < 1 || opcaoTipo > 3) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcaoTipo < 1 || opcaoTipo > 3);

    c.telefone.tipo = (TipoTelefone)opcaoTipo;

    return c;
}

// Função para exibir os dados de um contato
void exibirContato(Contato c) {
    printf("\n--- DADOS DO CONTATO ---\n");
    printf("Nome: %s\n", c.nome);
    printf("Telefone: (%02d) %s\n", c.telefone.ddd, c.telefone.numero);

    printf("Tipo: ");
    switch (c.telefone.tipo) {
        case RESIDENCIAL:
            printf("Residencial\n");
            break;
        case COMERCIAL:
            printf("Comercial\n");
            break;
        case MOVEL:
            printf("Movel\n");
            break;
        default:
            printf("Desconhecido\n");
    }
    printf("------------------------\n");
}

int main() {
    Contato meuContato;

    printf("=== CADASTRO DE AGENDA TELEFONICA ===\n\n");

    meuContato = lerContato();
    exibirContato(meuContato);

    return 0;
