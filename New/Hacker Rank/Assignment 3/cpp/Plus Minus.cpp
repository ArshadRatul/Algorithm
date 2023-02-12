#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=0,po=0,ne=0,z=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0){z++;}
        else if(arr[i]>0){po++;}
        else{ne++;}
    }
    cout<<fixed;
    cout<<setprecision(6)<<(po/float(n))<<endl;
    cout<<setprecision(6)<<(ne/float(n))<<endl;
    cout<<setprecision(6)<<(z/float(n))<<endl;

    return 0;
}
