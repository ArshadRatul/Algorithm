//findDigits
#include<iostream>
using namespace std;
int findDigits(int n)
{
    int cou=0,temp=n,h=0;
    while(temp>0)
    {
        h=temp/10;
        h=h*10;
        h=temp-h;
        if(h==0)
        {
            temp=temp/10;
            continue;
        }
        else
        {
            if(n%h==0)
            {
                cou++;
            }
        }
        temp=temp/10;
    }
    return cou;
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<findDigits(n)<<endl;
    }
    return 0;
}
