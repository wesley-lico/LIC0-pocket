#include <stdio.h>
int main(){
    int dias;
    int lampada, chuveiro, freezer,geladeira;
    int Clampada,Cchuveiro,Cgeladeira,Cfreezer;
    float Hlampada,Hchuveiro,Hgeladeira,Hfreezer;
    int total_consumo, valor_consumo;
    printf("---calculo de gasto de energia mensal--- \n");
    printf("digite o tempo de uso da lampada diario: ");
    scanf("%f", &Hlampada);
    printf("digite o tempo de uso do chuveiro diario: ");
    scanf("%f", &Hchuveiro);
    printf("digite o tempo de uso da geladeira diario: ");
    scanf("%f", &Hgeladeira);
    printf("digite o tempo de uso do freezer diario: ");
    scanf("%f", &Hfreezer);
    printf("digite a potencia em watts da lampada: ");
    scanf("%d",&lampada);
    printf("digite a potencia em watts do chuveiro: ");
    scanf("%d",&chuveiro);
    printf("digite a potencia em watts da geladeira: ");
    scanf("%d",&geladeira);
    printf("digite a potencia em watts do freezer: ");
    scanf("%d",&freezer);
    dias=30;
    Clampada=(lampada*Hlampada*dias)/1000;
    Cchuveiro=(chuveiro*Hchuveiro*dias)/1000;
    Cgeladeira=(geladeira*Hgeladeira*dias)/1000;
    Cfreezer=(freezer*Hfreezer*dias)/1000;

    total_consumo=Clampada+Cchuveiro+Cgeladeira+Cfreezer;
    valor_consumo=total_consumo*0.3;
    
    printf("o con sumo total eh de: %d khw \n", total_consumo);
    printf("o valor do consumo eh de: %d R$\n", valor_consumo);

}