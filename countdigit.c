#include<stdio.h>
int main(){
  unsigned n ;
    int count=0;

printf("Enter the number : ");
scanf("%u",&n);
do{
    n/=10;
    count++;
}while(n>0);

printf("\n%d",count);

return 0;
}
