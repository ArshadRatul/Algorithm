#include<iostream>
using namespace std;
int main()
{
    int n,maxi=0,c=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>maxi){maxi=ar[i];}
    }
    int h[maxi+1];
    for(int i=0;i<maxi+1;i++){h[i]=0;}
    for(int i=0;i<n;i++){h[ar[i]]++;}
    for(int i=1;i<maxi+1;i++)
    {
        if(h[i]!=0)
        {
            c=c+(h[i]/2);
        }
    }
    cout<<c;
    return 0;
}
