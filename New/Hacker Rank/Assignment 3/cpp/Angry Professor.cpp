#include<iostream>
using namespace std;
int main()
{
    int n,t,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p=0;
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]<=0){p++;}
        }
        if(p>=k){cout<<"NO\n";}
        else{cout<<"YES\n";}
    }
    return 0;
}

