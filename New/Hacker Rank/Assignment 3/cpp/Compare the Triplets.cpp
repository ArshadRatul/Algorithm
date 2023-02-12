#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3];
    int as=0,bs=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
        if(a[i]>b[i]){as++;}
        else if(a[i]<b[i]){bs++;}
    }
    cout<<as<<" "<<bs;

    return 0;
}
