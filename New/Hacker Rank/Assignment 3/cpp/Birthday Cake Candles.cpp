#include<iostream>
using namespace std;
int main()
{
    int n,maxi=0,c=0;
    cin>>n;
    int candles[n];
    for(int i=0;i<n;i++)
    {
        cin>>candles[i];
        if(candles[i]==maxi){c++;}
        if(candles[i]>maxi)
        {
            maxi=candles[i];
            c=1;
        }
    }
    cout<<c;
    return 0;
}
