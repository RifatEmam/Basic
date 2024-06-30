#include <stdio.h>

int main()
{
    int i,j,a[3][3],b[3][3],multi[3][3],sum=0,k,c1,c2,r1,r2;
    printf("the element of array A is  row and colum = \n");
    scanf("%d %d",&c1,&r1);

    printf("the element of array B is  row and colum = \n");
    scanf("%d %d",&c2,&r2);

    while(c1 !=r2)
    {
        printf("this matrix is error \n");
        printf("the element of array A is  row and colum = \n");
        scanf("%d %d",&c1,&r1);

        printf("the element of array B is  row and colum = \n");
        scanf("%d %d",&c2,&r2);




    }






    printf("Enter the array elements of a is = \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the array elements of b is = \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the array of a is = \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("the array of b is = \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }




    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            sum=0;
            for(k=0; k<c1; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            multi[i][j]=sum;


        }

    }
    printf("the multiplication of a and b  is = \n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }














    return 0;
}


