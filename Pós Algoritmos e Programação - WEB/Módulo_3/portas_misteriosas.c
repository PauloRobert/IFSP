#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vidas = 3;
    int pontos = 0;
    int escolha;

    printf("=== Jogo das Portas Misteriosas ===\n");
    printf("Você tem 3 vidas. Escolha a porta certa para ganhar pontos!\n");

    while (vidas > 0) {

            printf("Escolha uma porta (1, 2 ou 3): ");
            scanf("%d", &escolha);

            printf("Você escolheu a porta %d\n", escolha);
            vidas--; // teste para ver o loop funcionar

        }

        printf("Fim de jogo! Sua pontuação final foi: %d\n", pontos);

    return 0;
}