#include<iostream>
using namespace std;
bool leap_year(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int main()
{
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year;
    cin>>year;
    if(year>1918)
    {
        if(leap_year(year)==true)
        {
            cout<<12<<".09."<<year;
        }
        else
        {
            cout<<13<<".09."<<year;
        }
    }
    else if(year==1918){cout<<"26.09.1918";}
    else
    {
        if(year%4==0)
        {
            cout<<12<<".09."<<year;
        }
        else
        {
            cout<<13<<".09."<<year;
        }
    }


    return 0;
}
