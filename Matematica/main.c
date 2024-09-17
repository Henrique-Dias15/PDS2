#include "matematica.h"
#include <stdio.h>

void main()
{
    float angulo_radianos;
    printf("Digite um angulo em radianos: ");
    scanf("%f", &angulo_radianos);

    printf("Seno: %f\n", calcular_seno(angulo_radianos));
    printf("Cosseno: %f\n", calcular_cosseno(angulo_radianos));
    printf("Tangente: %f\n", calcular_tangente(angulo_radianos));
}