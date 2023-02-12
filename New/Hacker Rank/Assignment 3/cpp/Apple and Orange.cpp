#include<iostream>
using namespace std;
int main()
{
    int a,b,s,t,m,n,app=0,ora=0;
    cin>>s>>t>>a>>b>>m>>n;
    int apples[m],oranges[n];
    for(int i=0;i<m;i++)
    {
        cin>>apples[i];
        apples[i]=apples[i]+a;
        if(apples[i]>=s&&apples[i]<=t){app++;}
    }
    for(int i=0;i<n;i++)
    {
        cin>>oranges[i];
        oranges[i]=oranges[i]+b;
        if(oranges[i]>=s&&oranges[i]<=t){ora++;}
    }
    cout<<app<<"\n"<<ora;
    return 0;
}
