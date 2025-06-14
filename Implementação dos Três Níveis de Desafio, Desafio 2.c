void desafio2() {
    int atributo;
    
    printf("\n=== SUPER TRUNFO - DESAFIO 2 ===\n");
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
    
    switch(atributo) {
        case 1: // Velocidade
            if (jogador.velocidade > computador.velocidade) {
                printf("\nVocê venceu! Velocidade: %d x %d\n", jogador.velocidade, computador.velocidade);
            } else if (jogador.velocidade < computador.velocidade) {
                printf("\nComputador venceu! Velocidade: %d x %d\n", jogador.velocidade, computador.velocidade);
            } else {
                printf("\nEmpate! Velocidade: %d x %d\n", jogador.velocidade, computador.velocidade);
            }
            break;
            
        case 2: // Aceleração (quanto menor, melhor)
            if (jogador.aceleracao < computador.aceleracao) {
                printf("\nVocê venceu! Aceleração: %d x %d\n", jogador.aceleracao, computador.aceleracao);
            } else if (jogador.aceleracao > computador.aceleracao) {
                printf("\nComputador venceu! Aceleração: %d x %d\n", jogador.aceleracao, computador.aceleracao);
            } else {
                printf("\nEmpate! Aceleração: %d x %d\n", jogador.aceleracao, computador.aceleracao);
            }
            break;
            
        // Implementar outros casos...
    }
}