#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

#define M_PI 3.14159265358979323846

typedef struct Circulo
{
    float x;
    float y;
    float r;
}Circulo;

Circulo* circ_cria(float x, float y, float r)
{
    Circulo* c = (Circulo*)malloc(sizeof(Circulo));
    if (c != NULL)
    {
        c->x = x;
        c->y = y;
        c->r = r;
    }
    return c;
}

void circ_libera(Circulo* c) {
    free(c);
}

float circ_area(Circulo* c) {
    return M_PI * (c->r * c->r);
}

int circ_concentricos(Circulo* c1, Circulo* c2) {
    if (c1->x == c2->x && c1->y == c2->y) {
        return 1;
    }
    else {
        return 0;
    }
}

float circ_raio(Circulo* c) {
    return c->r;
}
