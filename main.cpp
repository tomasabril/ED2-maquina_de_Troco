///Tomás Abril
///André Badenas dos Santos
///Daniel Silva Curi

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

int* daTroco(int recebido,int pagar,int *notas,int n)
{
    int aux=recebido-pagar;
    //printf("%3d",aux);;
    int* trocos;
    int i;
    trocos=(int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
    {
        trocos[i]=aux/notas[i];
        aux=aux%notas[i];
    }
    return trocos;
}


int main()
{
    float recebido,pagar,troco=0;
    int r100,p100,i;
    int exemplo[10]={5000,2000,1000,500,200,100,50,25,10,5};
    int* troc;
    troc=(int*)malloc(10*sizeof(int));
    printf("digite o valor da conta e valor inserido\n");
    scanf("%f%f",&pagar,&recebido);
    p100=(int)(pagar*100);
    r100=(int)(recebido*100);
    troc=daTroco(r100,p100,exemplo,10);
    for(i=0;i<10;i++)
    {
        troco+=(exemplo[i]*troc[i]);
        //printf("%3d",troc[i]);
    }
    troco=(float)(troco/100.0);
    printf("o troco foi de %.2f",troco);
    return 0;
}
