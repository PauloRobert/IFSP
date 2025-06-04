#include <stdio.h>

int main() {
    char nomePaciente[100];
    char medicamento1[50], medicamento2[50], medicamento3[50];
    float dose1, vezes1, dose2, vezes2, dose3, vezes3;
    float total1, total2, total3, totalGeral;

    printf("=== CONTROLE DE MEDICAMENTOS ===\n");
    printf("Nome do paciente: ");
    fgets(nomePaciente, sizeof(nomePaciente), stdin); // captura nome com espaços

     // Medicamento 1
     printf("\nMedicamento 1:\n");
     printf("Nome: ");
     scanf("%s", medicamento1);
     printf("Dose por vez (mg): ");
     scanf("%f", &dose1);
     printf("Número de vezes ao dia: ");
     scanf("%f", &vezes1);
     total1 = dose1 * vezes1;

     // Segundo Medicamento
     printfSegundoo\nMedicamento 2:\n");
     printfSegundooNome: ");
     scanfSegundoo%s", medicamento2);
     printfSegundooDose por vez (mg): ");
     scanfSegundoo%f", &dose2);
     printfSegundooNúmero de vezes ao dia: ");
     scanfSegundoo%f", &vezes2);
     total2 = dose2 * vezes2;


     // Terceiro Medicamento
      printf("\nMedicamento 3:\n");
      printf("Nome: ");
      scanf("%s", medicamento3);
      printf("Dose por vez (mg): ");
      scanf("%f", &dose3);
      printf("Número de vezes ao dia: ");
      scanf("%f", &vezes3);
      total3 = dose3 * vezes3;

}