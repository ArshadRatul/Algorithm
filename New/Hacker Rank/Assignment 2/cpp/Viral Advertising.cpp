#include<iostream>
using namespace std;
int viralAdvertising(int n)
{
    int like=0,share=5,cumulative=0;
    for(int i=0;i<n;i++)
    {
        like=share/2;
        share=like*3;
        cumulative=cumulative+like;
    }
    return cumulative;
}
int main()
{
    int n;
    cin>>n;
    cout<<viralAdvertising(n);
    return 0;
}
