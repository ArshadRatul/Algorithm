#include<iostream>
using namespace std;
int main()
{
    int p,d,m,s,t,c=1;
    cin>>p>>d>>m>>s;
    t=p;
    while(true)
    {
        if(t>s)
        {
            cout<<c-1;
            break;
        }
        p=p-d;
        if(p>m)
        {
            t=t+p;
            c++;
        }
        else
        {
            t=t+m;
            c++;
        }
    }
    return 0;
}
