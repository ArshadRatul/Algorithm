#include<iostream>
using namespace std;
long int comp(long int a,long int b,long int c)
{
    if(a<b)
    {
        if(a<c){return a;}
        else{return c;}
    }
    else
    {
        if(b<c){return b;}
        else{return c;}
    }
}
int main()
{
    long int t,b,w,z,bc,wc,t1,t2,t3;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>b>>w>>bc>>wc>>z;
        t1=(b*bc)+(w*wc);
        t2=(b*(wc+z))+(w*wc);
        t3=(b*bc)+(w*(bc+z));
        //cout<<t1<<" "<<t2<<" "<<t3<<endl;
        cout<<comp(t1,t2,t3)<<endl;
    }
    return 0;
}
