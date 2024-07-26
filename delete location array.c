#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
int a[10],n,i,loc;
printf("how many elements i want : ");
scanf("%d",&n);
printf("the array elemts are : ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the location to  delete(0 to %d) ",n-1);
scanf("%d",&loc);
if(loc<0 || loc>=n){
    printf("location is invalid");

}else {

for(i=loc;i<n-1;i++){
    a[i]=a[i+1];
}
n--;


}
printf("the new array is : ");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}


    return 0;
}

