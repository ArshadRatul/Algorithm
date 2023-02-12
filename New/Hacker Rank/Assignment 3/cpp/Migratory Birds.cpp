#include<iostream>
using namespace std;
int main()
{
    int n,maxi=0;
    cin>>n;
    int arr[n],h[6];
    for(int i=0;i<6;i++){h[i]=0;}
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        h[arr[i]]++;
    }
    for(int i=1;i<6;i++)
    {
        if(maxi<h[i]){maxi=h[i];}
    }
    for(int i=1;i<6;i++)
    {
        if(maxi==h[i])
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
