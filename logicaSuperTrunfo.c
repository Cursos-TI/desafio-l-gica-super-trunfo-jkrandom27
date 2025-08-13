#include <stdio.h>

typedef struct{
    char estado[10];
    int codigo;
    char nome[100];
    unsigned long int populacao;
    float area;
    float pib;
    int pTuristicos;
    float densidade;
    float pibCapita;
    float superPoder;
} Carta;

int compararCartas(Carta c1, Carta c2, int atributo1, int atributo2){

    int resultado1, resultado2;

    switch (atributo1){
    case 1:
        resultado1 = (c1.populacao > c2.populacao) ? 1 : (c1.populacao < c2.populacao) ? -1 : 0;
        break;
    case 2:
        resultado1 = (c1.area > c2.area) ? 1 : (c1.area < c2.area) ? -1 : 0;
        break;
    case 3:
        resultado1 = (c1.pib > c2.pib) ? 1 : (c1.pib < c2.pib) ? -1 : 0;
        break;
    case 4:
        resultado1 = (c1.pTuristicos > c2.pTuristicos) ? 1 : (c1.pTuristicos < c2.pTuristicos) ? -1 : 0;
        break;
    case 5:
        resultado1 = (c1.densidade < c2.densidade) ? 1 : (c1.densidade > c2.densidade) ? -1 : 0;
        break;
    default:
        break;
    }

    switch (atributo2){
    case 1:
        resultado2 = (c1.populacao > c2.populacao) ? 1 : (c1.populacao < c2.populacao) ? -1 : 0;
        break;
    case 2:
        resultado2 = (c1.area > c2.area) ? 1 : (c1.area < c2.area) ? -1 : 0;
        break;
    case 3:
        resultado2 = (c1.pib > c2.pib) ? 1 : (c1.pib < c2.pib) ? -1 : 0;
        break;
    case 4:
        resultado2 = (c1.pTuristicos > c2.pTuristicos) ? 1 : (c1.pTuristicos < c2.pTuristicos) ? -1 : 0;
        break;
    case 5:
        resultado2 = (c1.densidade < c2.densidade) ? 1 : (c1.densidade > c2.densidade) ? -1 : 0;
        break;
    default:
        break;
    }

    return (resultado1 + resultado2 > 0) ? 1 : (resultado1 + resultado2 < 0) ? -1 : 0;

}

int main(){

    Carta carta1, carta2;

    //Menu
    printf("Olá, Seja bem-vindo(a) ao Super Trunfo - Países\n");
    printf("\nCadastre as suas cartas...\n");

    //______________ Entrada de dados carta 1 ______________
    printf("\nCarta 01:\n");

    //Estado
    printf("Digite o nome do seu estado: "); scanf("%s", carta1.estado);
    //Código da Carta
    printf("Digite o código da carta: "); scanf("%d", &carta1.codigo);
    //Nome da Cidade
    printf("Digite o nome da sua cidade: "); scanf("%s", carta1.nome);
    //População
    printf("Digite a população: "); scanf("%lu", &carta1.populacao);
    //Área
    printf("Digite a área: "); scanf("%f", &carta1.area);
    //PIB
    printf("Digite o PIB(em bilhão): "); scanf("%f", &carta1.pib);
    //Número de pontos Turísticos
    printf("Digite a quantidade de pontos turísticos: "); scanf("%d", &carta1.pTuristicos);

    //Calcular densidade populacional, pib per capita e super poder
    carta1.densidade = (float) carta1.populacao / carta1.area;
    carta1.pibCapita = (float) (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = (float) (carta1.populacao + carta1.area + carta1.pib + carta1.pTuristicos + carta1.pibCapita + 1.0 / carta1.densidade);

    //______________ Entrada de dados carta 2 ______________
    printf("\nCarta 02:\n");

    //Estado
    printf("Digite o nome do seu estado: "); scanf("%s", carta2.estado);
    //Código da Carta
    printf("Digite o código da carta: "); scanf("%d", &carta2.codigo);
    //Nome da Cidade
    printf("Digite o nome da sua cidade: "); scanf("%s", carta2.nome);
    //População
    printf("Digite a população: "); scanf("%lu", &carta2.populacao);
    //Área
    printf("Digite a área: "); scanf("%f", &carta2.area);
    //PIB
    printf("Digite o PIB(em bilhão): "); scanf("%f", &carta2.pib);
    //Número de pontos Turísticos
    printf("Digite a quantidade de pontos turísticos: "); scanf("%d", &carta2.pTuristicos);

    //Calcular densidade populacional, pib per capita e super poder
    carta2.densidade = (float) carta2.populacao / carta2.area;
    carta2.pibCapita = (float) (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = (float) (carta2.populacao + carta2.area + carta2.pib + carta2.pTuristicos + carta2.pibCapita + 1.0 / carta2.densidade);

    //Menu Primeira Escolha
    int escolha1, escolha2;

    printf("\n1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - N° de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nEscolha o primeiro atributo para comparar\n");

    scanf("%d", &escolha1);

    //Menu Segunda Escolha
    printf("\n1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - N° de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nEscolha o segunda atributo para comparar\n");

    scanf("%d", &escolha2);

    int resultado = compararCartas(carta1, carta2, escolha1, escolha2);

    printf("\nResultado: ");

    //Resultado final (lógica)
    if (resultado > 0){
        printf("A carta 1 venceu!\n");
    } else if (resultado < 0){
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empatou!\n");
    }
    
    return 0;

}