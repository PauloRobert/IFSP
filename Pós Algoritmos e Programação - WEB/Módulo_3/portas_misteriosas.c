#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vidas = 3;
    int pontos = 0;
    int escolha, portaPremiada;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    printf("=== Jogo das Portas Misteriosas ===\n");
    printf("Você tem 3 vidas. Escolha a porta certa para ganhar pontos!\n");

    while (vidas > 0) {
        portaPremiada = (rand() % 3) + 1; // 1 a 3

        printf("Escolha uma porta (1, 2 ou 3): ");
        scanf("%d", &escolha);

        if (escolha == portaPremiada) {
            printf("Parabéns! Você acertou a porta premiada!\n");
            pontos++;
        } else {
            printf("Que pena! A porta premiada era a %d.\n", portaPremiada);
            vidas--;
        }

        printf("Vidas: %d | Pontos: %d\n", vidas, pontos);
        printf("-------------------------------\n");
    }

    printf("Fim de jogo! Sua pontuação final foi: %d\n", pontos);

    return 0;
}