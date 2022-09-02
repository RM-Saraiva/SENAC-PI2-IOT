#include <stdio.h>
#include <stdlib.h>

int main() {
  float temp_cel = 0.0;
  float temp_fah = 0.0;
  int resposta = 0;
  _Bool parametro = 0;
  printf("Bem vindo ao conversor de Temperatura de Celsius para Fahreinth\n");
  do {
    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f", &temp_cel);

    while ((temp_cel < 30) || (temp_cel > 90)) {
      printf("\nTemperatura inadequada ao processo, informe uma temperatura "
             "entre 30°C - 90°C\n Digite novamente: \n");
      scanf("%f", &temp_cel);
    }

    temp_fah = ((temp_cel * 9 / 5) + 32);
    printf("A temperatura de %.1f°C e equivalente há %.1f°F \n ", temp_cel,
           temp_fah);

    printf("\nDeseja refazer o cálculo?\n ('1' -->SIM, '0' -->NÃO): ");
    scanf("%i", &resposta);

    if (resposta == 1) {
      parametro = 1;
    } else {
      printf(
          "\nObrigado por usar o Conversor de Temperatura. \nAté a próxima!\n");
      parametro = 0;
    }
  } while (parametro == 1);
  return 0;
}
