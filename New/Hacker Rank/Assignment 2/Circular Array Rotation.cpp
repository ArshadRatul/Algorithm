#include<iostream>
using namespace std;
int main()
{
    int n=0,k=0,q=0,temp=0;
    cin>>n>>k>>q;
    int *a=new int[n];
    int *queries=new int[q];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>queries[i];
    }
    for(int j=0;j<k;j++)
    {
        temp=a[n-1];
        for(int j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<q;i++)
    {
        cout<<a[queries[i]]<<endl;
    }
    delete[] a;
    delete[] queries;
    return 0;
}
