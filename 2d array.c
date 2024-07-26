#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
int  a[3][3] ,sum=0;

   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);

       }
   }


printf(" the element of array is : \n");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d ",a[i][j]);
       }
 printf("\n");

   }




     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j] %4==0 || a[i][j] % 7==0 ){
                 sum=sum+a[i][j];
                         printf("%d \n",a[i][j]);

       }

        }
   }



printf("\nsum = %d ",sum);






return 0;}
