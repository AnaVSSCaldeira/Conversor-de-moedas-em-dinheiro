#include <stdio.h>

///@param TOTAL quantidade de dinheiro
///@param M valor da moeda
///@param Q quantidade da moeda
float somar(float TOTAL,float M,int Q){
    return (M*Q)+TOTAL;
}

int main(void) {

    float qtdtotal=0, moeda; //somatorio das moedas e valor da moeda
    int q; //quantidade das moedas
    printf("Digite o numero de moedas de 1 real: ");//informar o numero de moedas
    scanf("%d", &q);
    moeda=1; //atualizando o valor da moeda
    qtdtotal=somar(qtdtotal,moeda,q);//chamando a funcao para somar

    printf("Digite o numero de moedas de 50 centavos: ");
    scanf("%d", &q);
    moeda=0.5;
    qtdtotal=somar(qtdtotal,moeda,q);

    printf("Digite o numero de moedas de 25 centavos: ");
    scanf("%d", &q);
    moeda=0.25;
    qtdtotal=somar(qtdtotal,moeda,q);

    printf("Digite o numero de moedas de 10 centavos: ");
    scanf("%d", &q);
    moeda=0.1;
    qtdtotal=somar(qtdtotal,moeda,q);

    printf("Digite o numero de moedas de 5 centavos: ");
    scanf("%d", &q);
    moeda=0.05;
    qtdtotal=somar(qtdtotal,moeda,q);

    printf("Digite o numero de moedas de 1 centavo: ");
    scanf("%d", &q);
    moeda=0.01;
    qtdtotal=somar(qtdtotal,moeda,q);

    printf("\nVoce possui %.2f reais em dinheiro", qtdtotal);

    return 0;
}