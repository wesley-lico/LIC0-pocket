/* Programa: calculadora conversora de bases
   autor:Wesley Rodrigues da Silva
   descrição: esse programa converte bases numericas.
   ele se limita entre as possibilidades de decimal para binario,decimal para ocatal,decimal para hexadeciaml
   binario para decimal, octal para decimal, hexadeciamal para decimal*/
#include <stdio.h>
#include <math.h>
void decprabin()// função responsavel por conversão de numeros decimais para binarios
{ 
	int numdec ; // Valor para ser convertido
	char c[33];// vetor para os numero em binario
    
    printf("numero em decimal:");// captura e print do valor digitado
    scanf("%d", &numdec);

	itoa(numdec, c, 2);  // converter na base 2

	printf("numero em binario: %s\n", c);// print do valor em binario

	getchar();
}
void decpraoct()// função responsavel por conversão de numeros decimais para ocatais
{
    int numdec;

    printf("numero em decimal: ");//captura e print do valor digitado
    scanf("%d", &numdec);
    printf("numero em octal:%o\n", numdec);//print do valor em octal

}
void decprahex()// função responsavel por conversão de numeros decimais para hexadecimais
{
    int numdec;

    printf("numero em decimal: ");//captura e print do valor digitado
    scanf("%d", &numdec);
    printf("numero em hexadecimal:%x\n", numdec);//print do valor em hexadecimal
}
void binpradec()// função responsavel por conversão de numeros binarios para decimais
{
    int numbin, numdec = 0, i;
    printf("numero em binario: ");//print e captura do valor digitado
    scanf("%d", &numbin);
    for(i = 0; numbin > 0; i++)// loop e condicional
    {
        numdec = numdec + pow(2, i) * (numbin % 10);
        numbin = numbin / 10;
    }
    printf("numero em decimal:  %d\n", numdec);// print do valor em decimal
}
void octpradec()// função responsavel por conversão de numeros octais para deciamais
{
    int numoct;

    printf("numero em octal: ");//print e captura do valor digitado
    scanf("%o", &numoct);
    printf("numero em decimal:%d\n", numoct);//print do valor em octal
}
void hexpradec()// função responsavel por conversão de numeros hexadecimais para decimais
{
    int numhex;

    printf("numero em hexadecimal: ");//print e captura do valor digitado
    scanf("%x", &numhex);
    printf("numero em decimal:%d\n", numhex);//print do valor em hexadecimal
}
int main(){
        int conv; //"conv" são as opções de conversão//
        char sair=0;
    do // faça do loop
    {

    
        printf("****digite o numero da sua opcao de conversao****\n");
        printf("1-decimal para binario\n2-decimal para octal\n3-decimal para hexadecimal\n");
        printf("4-binario para decimal\n5-octal para decimal\n6-hexadecimal para decimal\n");
        printf("7-para sair do programa\n");
        printf("opcao:");
        scanf("%d",&conv);//variavel de para o numero de opção para conversão
        switch(conv)
        {
            case 1:printf("digite um numero decimal\n");
            decprabin();
            break;
            case 2:printf("digite um numero decimal\n");
            decpraoct();  
            break;
            case 3:printf("digite um numero decimal\n");
            decprahex();
            break;
            case 4:printf("digite um numero binario\n");
            binpradec();
            break;
            case 5:printf("digite um numero octal\n");
            octpradec();
            break;
            case 6:printf("digite um numero hexadecimal\n");
            hexpradec();
            break;
            case 7:printf("saindo...");//finalisação do programa
                   sair=7;
            break;
            default:
            printf("voce digitou um numero invalido\n");
        }
    }
    while(!sair);// string de controle do loop

    
    return 0;
}