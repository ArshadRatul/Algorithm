#include<iostream>
using namespace std;
int main()
{
    int n,k,e=100,i=0,t=0;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++){cin>>c[i];}
    for(t=0;t<n;t++)
    {
        i=(i+k)%n;
        if(c[i]%2==0){e--;}
        else{e=e-3;}
        if(i==0){break;}
    }
    cout<<e;
    return 0;
}

