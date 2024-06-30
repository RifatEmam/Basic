#include <stdio.h>

int main() {
   int i,j,a[2][2],b[2][2],sum[2][2];
   printf("Enter the array elements of a is = \n");
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
   }printf("Enter the array elements of b is = \n");
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&b[i][j]);
    }
   }
   printf("the array of a is = \n");
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }printf("the array of b is = \n");
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
   }




   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];

    }

   }
   printf("the sum of a and b  is = \n");

   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
   }














    return 0;
}

