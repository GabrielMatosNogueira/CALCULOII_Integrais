#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
    double h, R;  // h = deslocamento horizontal, R = raio
    int n;

    // Entrada dos parâmetros
    printf("Digite o deslocamento horizontal do centro (h): ");
    scanf("%lf", &h);
    printf("Digite o raio da circuferencia (R): ");
    scanf("%lf", &R);
    printf("Digite o numero de subdivisoes para a integracao (n): ");
    scanf("%d", &n);

    double a = -R, b = R;  // Limites de integracao
    double delta_y = (b - a) / n; // Tamanho do passo
    double soma = 0.0;

    // Soma os valores das alturas nos pontos internos
    for (int i = 1; i < n; i++) {
        double y = a + i * delta_y;
        soma += 2 * sqrt(R * R - y * y);
    }

    // Aplica a formula do metodo dos trapezios
    soma = (2 * sqrt(R * R - a * a) + 2 * soma + 2 * sqrt(R * R - b * b)) * (delta_y / 2.0);

    // Cálculo do volume
    double volume = 2 * PI * h * soma;

    // Exibicao do resultado
    printf("O volume do solido gerado e aproximadamente: %.6lf * pi^2\n", volume / (PI * PI));

    return 0;
}
