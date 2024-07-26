#include <stdio.h>
void callbyvalue(int n1,int n2){
int temp;
temp=n1;
n1=n2;
n2=temp;
}
void callbyrefference(int *n1,int *n2){
int temp=*n1;

*n1=*n2;
*n2=temp;
}


int main() {
  int n1,n2;
  scanf("%d %d",&n1,&n2);
  callbyvalue(n1,n2);
  printf("the call by value \n n1= %d\n n2 = %d\n",n1,n2);
  callbyrefference(&n1,&n2);
  printf("the call by refference\n n1= %d\n n2 = %d\n",n1,n2);





    return 0;
}

