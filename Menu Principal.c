int main() {
    inicializarBaralho();
    sortearCartas();
    
    int opcao;
    
    do {
        printf("\n=== MENU SUPER TRUNFO ===\n");
        printf("1. Desafio 1 (1 atributo - if/else)\n");
        printf("2. Desafio 2 (1 atributo - switch)\n");
        printf("3. Desafio 3 (2 atributos - lógica avançada)\n");
        printf("4. Ver minha carta\n");
        printf("5. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        limparBuffer();
        
        switch(opcao) {
            case 1:
                desafio1();
                break;
            case 2:
                desafio2();
                break;
            case 3:
                desafio3();
                break;
            case 4:
                exibirCarta(baralho[cartaJogador]);
                break;
            case 5:
                printf("\nSaindo do jogo...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }
    } while (opcao != 5);
    
    return 0;
}