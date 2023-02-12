#include<iostream>
using namespace std;
int bonAppetit(int bill[],int n,int k,int b)
{
    int sum=0,s=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+bill[i];
    }
    s=sum/2;
    if(s==b)
    {
        s=bill[k]/2;
        return s;
    }
    else
    {
        s=0;
        return s;
    }
}
int main()
{
    int n=0,k=0,b=0,answer=0;
    cin>>n>>k;
    int bill[n];
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }
    cin>>b;
    answer=bonAppetit(bill,n,k,b);
    if(answer==0)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<answer;
    }
    return 0;
}
