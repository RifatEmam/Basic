#include<stdio.h>
int main()
{

    double x;
 int intpart,fracpart;

        scanf("%lf",&x);


    intpart=(int)x;
    fracpart=(int)((x-intpart)*100+0.5);

    int notes[6]= {100, 50, 20, 10,5, 2};
    int coins[6]= { 50, 25, 10, 5, 1};
    printf("NOTAS:\n");
    for(int i=0; i<6; i++)
    {
        int count=intpart/notes[i];
        printf("%d nota(s) de R$ %d.00\n",count,notes[i]);
        intpart=intpart%notes[i];
    }

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",intpart);

    for(int i=0; i<5; i++)
    {
       int count=fracpart/coins[i];
        printf("%d moeda(s) de R$ %.2lf\n",count,coins[i]/100.0);
        fracpart=fracpart % coins[i];
    }


    return 0;
}
