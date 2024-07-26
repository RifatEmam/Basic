#include<stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
printf("\n\n");
if(1<n && n<1000){
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
                for(k=1;k<=i+j;k++){
                     printf("%d \n\n",j);
                }

        }

}


}
 return 0;
}
