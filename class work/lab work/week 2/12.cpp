#include<iostream>

using namespace std;

int printPrimes(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 'a';
        }
        

    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int x=2;x<=n;x++)
    {
        if(printPrimes(x)==true)
        {
            cout<<x;
        }
        
    }
    return 0;
}