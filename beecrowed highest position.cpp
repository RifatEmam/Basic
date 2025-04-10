#include<iostream>
using namespace std;
int main(){

int a[100];
int i;


for (i=0;i<100;i++){
    cin>>a[i];
}
int pos=1;
int max=a[0];
for (i=1;i<100;i++){


if(a[i]>max){
    max=a[i];
    pos=i+1;
}

   }


cout<<max<<"\n"<<pos<<endl;







return 0;

}
