#include<iostream>
using namespace std;
int main()
{
    int n,m,maximum=0;
    cin>>n>>m;
    int c[m],longest[n];
    for(int i=0;i<m;i++){cin>>c[i];}
    for(int i=0;i<n;i++)
    {
        int near=0,near2=1000000;
        for(int j=0;j<m;j++)
        {
            if(c[j]>i){near=c[j]-i;}
            else{near=i-c[j];}
            if(near<near2){near2=near;}
        }
        longest[i]=near2;
    }
    for(int i=0;i<n;i++)
    {
        if(longest[i]>maximum){maximum=longest[i];}
    }
    cout<<maximum;
    return 0;
}
