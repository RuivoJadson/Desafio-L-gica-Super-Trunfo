void desafio1() {
    int atributo;
    
    printf("\n=== SUPER TRUNFO - DESAFIO 1 ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1. Velocidade\n");
    printf("2. Aceleração\n");
    printf("3. Potência\n");
    printf("4. Tração\n");
    printf("5. Peso\n");
    printf("Opção: ");
    scanf("%d", &atributo);
    limparBuffer();
    
    Carta jogador = baralho[cartaJogador];
    Carta computador = baralho[cartaComputador];
    
    printf("\nSua carta: %s\n", jogador.nome);
    printf("Carta do computador: %s\n", computador.nome);
    
    if (atributo == 1) {
        if (jogador.velocidade > computador.velocidade) {
            printf("\nVocê venceu! Velocidade: %d x %d\n", jogador.velocidade, computador.velocidade);
        } else if (jogador.velocidade < computador.velocidade) {
            printf("\nComputador venceu! Velocidade: %d x %d\n", jogador.velocidade, computador.velocidade);
        } else {
            printf("\nEmpate! Velocidade: %d x %d\n", jogador.velocidade, computador.velocidade);
        }
    } 
    // Repetir para outros atributos...
}