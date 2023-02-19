/*
find the sum of following series- S=1-2+3-4.....n

if number is odd then +ve 
and is number is even then -ve
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of list:";
    cin>>n;
    int i,result=0;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
         result=result-i;
        else 
         result=result+i; 
    }
    cout<<"sum of n series is "<<result;
    return 0;
}