#include <stdio.h>

int main() {
    char nomePaciente[100];
    printf("Nome do paciente: ");
    fgets(nomePaciente, sizeof(nomePaciente), stdin);
}