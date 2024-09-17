#include <stdio.h>
#include "circulo.h"

void main() {
    Circulo* c1 = circ_cria(1, 1, 1);
    Circulo* c2 = circ_cria(0, 0, 2);

    printf("Area do circulo 1: %f\n", circ_area(c1));
    printf("Area do circulo 2: %f\n", circ_area(c2));

    printf("Raio do circulo 1: %f\n", circ_raio(c1));
    printf("Raio do circulo 2: %f\n", circ_raio(c2));

    if (circ_concentricos(c1, c2) == 1)
    {
        printf("Os dois circulos tem o mesmo centro\n");
    }
    else {
        printf("Os dois circulos nao tem o mesmo centro\n");
    }

    circ_libera(c1);
    circ_libera(c2);
}