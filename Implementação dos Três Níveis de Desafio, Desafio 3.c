void desafio3() {
    int atributo1, atributo2;
    
    printf("\n=== SUPER TRUNFO - DESAFIO 3 ===\n");
    printf("Escolha DOIS atributos para comparar:\n");
    printf("1. Velocidade\n");
    printf("2. Aceleração\n");
    printf("3. Potência\n");
    printf("4. Tração\n");
    printf("5. Peso\n");
    
    printf("Primeiro atributo: ");
    scanf("%d", &atributo1);
    printf("Segundo atributo: ");
    scanf("%d", &atributo2);
    limparBuffer();
    
    Carta jogador = baralho[cartaJogador];
    Carta computador = baralho[cartaComputador];
    
    printf("\nSua carta: %s\n", jogador.nome);
    printf("Carta do computador: %s\n", computador.nome);
    
    // Comparação usando operador ternário e lógica complexa
    int resultado1 = (atributo1 == 1) ? (jogador.velocidade - computador.velocidade) :
                    (atributo1 == 2) ? (computador.aceleracao - jogador.aceleracao) :
                    (atributo1 == 3) ? (jogador.potencia - computador.potencia) :
                    (atributo1 == 4) ? (jogador.tracao - computador.tracao) :
                    (computador.peso - jogador.peso);
    
    int resultado2 = (atributo2 == 1) ? (jogador.velocidade - computador.velocidade) :
                    (atributo2 == 2) ? (computador.aceleracao - jogador.aceleracao) :
                    (atributo2 == 3) ? (jogador.potencia - computador.potencia) :
                    (atributo2 == 4) ? (jogador.tracao - computador.tracao) :
                    (computador.peso - jogador.peso);
    
    if (resultado1 > 0 && resultado2 > 0) {
        printf("\nVocê venceu em ambos os atributos!\n");
    } else if (resultado1 < 0 && resultado2 < 0) {
        printf("\nComputador venceu em ambos os atributos!\n");
    } else {
        printf("\nEmpate parcial! Cada um venceu em um atributo.\n");
    }
}