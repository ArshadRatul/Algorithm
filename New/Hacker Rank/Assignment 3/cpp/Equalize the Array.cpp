#include<iostream>
using namespace std;
int main()
{
    int n,maxi=0,help=0,maxi2=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxi){maxi=arr[i];}
    }
    int h[maxi+1];
    for(int i=0;i<maxi+1;i++){h[i]=0;}
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    for(int j=0;j<maxi+1;j++)
    {
        if(h[j]>maxi2)
        {
            maxi2=h[j];
        }
    }
    for(int j=0;j<maxi+1;j++)
    {
        if(h[j]==maxi2)
        {
            cout<<n-maxi2;
            break;
        }
    }
    return 0;
}
