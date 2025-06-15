#include <stdio.h>

int main() {

    int vidas = 3;
    int pontos = 0;
    int escolha;

    printf("=== Jogo das Portas Misteriosas ===\n");
    printf("Você tem 3 vidas. Escolha a porta certa para ganhar pontos!\n");

    while (vidas > 0) {
            // Aqui será a lógica do jogo
            printf("Ainda temos %d vidas...\n", vidas);
        }

        printf("Fim de jogo! Sua pontuação final foi: %d\n", pontos);

    return 0;
}