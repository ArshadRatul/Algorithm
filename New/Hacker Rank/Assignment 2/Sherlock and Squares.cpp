#include<iostream>
#include<cmath>
using namespace std;
int squares(int a,int b)
{
    float h=0.0;
    int c=0;
    for(int i=a;i<=b;i++)
    {
        h=sqrt(i);
        if(h-int(h)==0)
        {
            c++;
        }
    }
    return c;
}
void help(int n)
{
    int a,b;
    cin>>a>>b;
    if(n>0)
    {
        cout<<squares(a,b)<<endl;
        help(n--);
    }
}

int main()
{
    int a=0,b=0,n=0;
    cin>>n;
    help(n);
    return 0;
}
