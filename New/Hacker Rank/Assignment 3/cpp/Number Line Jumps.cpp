#include<iostream>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=0;i<=10000;i++)
    {
        if ((x1+(i*v1))==(x2+(i*v2)))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
