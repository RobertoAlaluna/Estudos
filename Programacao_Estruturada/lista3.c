#include <stdio.h>
#include <stdlib.h>

//QUESTÃO 1)
void pontoMedio(float xi, float xf, float yi, float yf, float *xm, float *ym){

    *xm = (xi + xf) / 2;
    *ym = (yi + yf) / 2;
}

int main(){

    float xi, xf, yi, yf;
    float xm = 0, ym = 0;

    printf("Digite as coordenadas (xi xf yi yf): ");
    scanf("%f %f %f %f", &xi, &xf, &yi, &yf);

    pontoMedio (xi, xf, yi, yf, &xm, &ym);

     printf("Ponto medio: (%.2f, %.2f)\n", xm, ym);

    return 0;
}


//QUESTÃO 2)
void somarRacionais(int nx, int dx, int ny, int dy, int *n, int *d) {
    *n = (nx * dy) + (ny * dx);
    *d = dx * dy;
}
void subtrairRacionais(int nx, int dx, int ny, int dy, int *n, int *d) {
    *n = (nx * dy) - (ny * dx);
    *d = dx * dy;
}
void multiplicarRacionais(int nx, int dx, int ny, int dy, int *n, int *d) {
    *n = nx * ny;
    *d = dx * dy;
}
void dividirRacionais(int nx, int dx, int ny, int dy, int *n, int *d) {
    *n = nx * dy; *d = dx * ny;
}

int main() {
    int nx, dx, ny, dy;
    int n, d;

    printf("Digite o numerador e denominador de X: ");
    scanf("%d %d", &nx, &dx);

    printf("Digite o numerador e denominador de Y: ");
    scanf("%d %d", &ny, &dy);

    printf("\nresultado:\n");

    somarRacionais(nx, dx, ny, dy, &n, &d);
    printf("Adicao: %d/%d\n", n, d);

    subtrairRacionais(nx, dx, ny, dy, &n, &d);
    printf("Subtracao: %d/%d\n", n, d);

    multiplicarRacionais(nx, dx, ny, dy, &n, &d);
    printf("Multiplicacao: %d/%d\n", n, d);

    dividirRacionais(nx, dx, ny, dy, &n, &d);
    printf("Divisao: %d/%d\n", n, d);

    return 0;
}
