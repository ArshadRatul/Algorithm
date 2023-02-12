#include<iostream>
using namespace std;
int main()
{
    int n,cou=0;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++){cin>>c[i];}
    for(int i=0;i<n;)
    {
        if(c[i+2]==0)
        {
            i=i+2;
            cou++;
        }
        else
        {
            i=i+1;
            cou++;
        }
    }
    cout<<cou-1;
    return 0;
}
