#include<stdio.h>
#include<locale.h>
int main(){

setlocale(LC_NUMERIC, "");
int n;

printf("Enter an integer : ");
scanf("%d",&n);

printf("%'d\n",n);



return 0;
}
