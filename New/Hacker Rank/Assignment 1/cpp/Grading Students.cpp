//Grading Students
#include<iostream>
using namespace std;
void gradingStudents(int grade[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(grade[i]>=38)
        {
            if ((grade[i]+1)%5==0)
            {
                grade[i]=grade[i]+1;
            }
            else if ((grade[i]+2)%5==0)
            {
                grade[i]=grade[i]+2;
            }
        }
    }
}
int main()
{
    int n=0;
    cin>>n;
    if(n>=1 && n<=60)
    {
        int grades[n];
        for(int i=0;i<n;i++)
        {
            cin>>grades[i];
        }
        gradingStudents(grades,n);
        for(int i=0;i<n;i++)
        {
            cout<<grades[i]<<endl;
        }
    }
    return 0;
}
