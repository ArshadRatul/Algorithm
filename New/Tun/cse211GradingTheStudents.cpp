#include<iostream>
using namespace std ;
int main ()
{
    int n=0;
    cin >> n ;
    int arr[n] ;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    for(int i=0;i<n;i++)
    {
        int x=0 ;
        if(arr[i]>=38)
        {
            x = arr[i] ;
            for (int j=0;j<5;j++)
            {
                if(x%5==0)
                {
                    if ((x-arr[i])<3)
                    {
                        cout << x << endl  ;
                    }
                    else
                    {
                        cout << arr[i] << endl  ;
                    }
                }
                x++ ;
            }
        }
        else
        {
            cout << arr[i] << endl ;
        }
    }
    return 0 ;
}
