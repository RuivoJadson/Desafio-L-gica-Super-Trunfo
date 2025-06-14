void limparBuffer() {
    while (getchar() != '\n');
}

void inicializarBaralho() {
    // Cartas de carros esportivos (exemplo)
    strcpy(baralho[0].nome, "Ferrari SF90");
    baralho[0].velocidade = 340;
    baralho[0].aceleracao = 2;
    baralho[0].potencia = 1000;
    baralho[0].tracao = 95;
    baralho[0].peso = 1570;

    strcpy(baralho[1].nome, "Porsche 911 Turbo");
    baralho[1].velocidade = 330;
    baralho[1].aceleracao = 3;
    baralho[1].potencia = 650;
    baralho[1].tracao = 90;
    baralho[1].peso = 1650;

    // Adicione mais cartas conforme necessário...
}

void sortearCartas() {
    srand(time(NULL));
    cartaJogador = rand() % MAX_CARTAS;
    cartaComputador = rand() % MAX_CARTAS;
    
    // Garantir que o computador não sorteie a mesma carta do jogador
    while (cartaComputador == cartaJogador) {
        cartaComputador = rand() % MAX_CARTAS;
    }
}

void exibirCarta(Carta carta) {
    printf("\n--- Dados da Carta ---\n");
    printf("Nome: %s\n", carta.nome);
    printf("Velocidade (km/h): %d\n", carta.velocidade);
    printf("Aceleração (0-100 km/h em segundos): %d\n", carta.aceleracao);
    printf("Potência (cv): %d\n", carta.potencia);
    printf("Tração (%%): %d\n", carta.tracao);
    printf("Peso (kg): %d\n", carta.peso);
}