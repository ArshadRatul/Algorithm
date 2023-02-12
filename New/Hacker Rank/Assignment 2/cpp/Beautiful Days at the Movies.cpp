//Beautiful Days at the Movies
#include<iostream>
using namespace std;
int beautifulDays(int i,int j,int k)
{
    int sum;
    for(int m=i;m<=j;m++)
    {
        int temp1=0,temp2=0;
        for(int r=m;r>0;r=r/10)
        {
            temp1=r/10;
            temp1=temp1*10;
            temp1=r-temp1;
            temp2=(temp2*10)+temp1;
        }
        if((m-temp2)%k==0)
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    cout<<beautifulDays(i,j,k);
    return 0;
}
