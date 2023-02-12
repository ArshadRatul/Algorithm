#include<iostream>
using namespace std;

int main()
{
    int t,n,c,m,cho,w,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>c>>m;
        cho=n/c;
        w=cho;
        while(w>1)
        {
            if(w<m){break;}
            s=w%m;
            w=w/m;
            cho=cho+w;
            w=w+s;
        }
        cout<<cho<<endl;
    }
    return 0;
}
