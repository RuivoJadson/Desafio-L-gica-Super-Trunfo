#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_CARTAS 10
#define TAM_NOME 30

typedef struct {
    char nome[TAM_NOME];
    int velocidade;
    int aceleracao;
    int potencia;
    int tracao;
    int peso;
} Carta;

Carta baralho[MAX_CARTAS];
int cartaJogador, cartaComputador;