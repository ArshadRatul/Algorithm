//Save the Prisoner!
#include<iostream>
using namespace std;
long int saveThePrisoner(long int n,long int m,long int s)
{
    while(m>1)
    {
        if(s>n)
        {
            s=1;
        }
        s++;
        m--;
    }
    return s;
}
int main()
{
    long int t=0,n=0,m=0,s=0;
    cin>>t;
    while (t!=0)
    {
        cin>>n>>m>>s;
        cout<<saveThePrisoner(n,m,s)<<endl;
        t--;
    }
    return 0;
}

