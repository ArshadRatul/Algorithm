//Simple Array Sum
#include<iostream>
using namespace std;
int simpleArraySum(int ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    return sum;
}
int main()
{
    int n=0,input,results;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    results=simpleArraySum(ar,n);
    cout<<results;

    return 0;
}
