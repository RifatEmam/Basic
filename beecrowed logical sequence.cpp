#include<iostream>
using namespace std;
int main()
{

    int n,i,j,k;
    cin>>n;

    int a=1;
    if(n>1&&n<1000)
    {
        for(i=1; i<=n; i++)
        {

            cout<<a<<" "<<a*a<<" "<<a*a*a<<endl;
            cout<<a<<" "<<(a*a)+1<<" "<<(a*a*a)+1<<endl;
            a++;




        }

    }




    return 0;





}
