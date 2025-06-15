#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vidas = 3;
    int pontos = 0;
    int portaPremiada, escolha;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    printf("=== Jogo das Portas Misteriosas ===\n");
    printf("Você tem 3 vidas. Escolha a porta certa para ganhar pontos!\n\n");

    while (vidas > 0) {
        // Sorteia a porta premiada (1, 2 ou 3)
        portaPremiada = (rand() % 3) + 1;

        // Mostra as opções ao jogador
        printf("Escolha uma porta (1, 2 ou 3): ");
        scanf("%d", &escolha);

        // Verifica se a entrada é válida
        if (escolha < 1 || escolha > 3) {
            printf("Escolha inválida! Digite 1, 2 ou 3.\n");
            continue; // volta para o começo do while
        }

        // Verifica se o jogador acertou
        if (escolha == portaPremiada) {
            pontos++;
            printf("Parabéns! Você escolheu a porta certa!\n");
        } else {
            vidas--;
            printf("Ops! A porta premiada era a %d. Você perdeu uma vida.\n", portaPremiada);
        }

        // Exibe o status atual
        printf("Vidas restantes: %d | Pontos: %d\n", vidas, pontos);
        printf("----------------------------------\n");
    }

    printf("Fim de jogo! Sua pontuação final foi: %d\n", pontos);

    return 0;
}