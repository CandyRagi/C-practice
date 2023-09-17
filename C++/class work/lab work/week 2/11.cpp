#include<iostream>

using namespace std;

int reverseinteger(int a)
{
    int revnum=0;
    while(a>0)
    {
        revnum=(revnum*10)+(a%10);
        a=a/10;
    }
    return revnum;
}

int main()
{
    int number;
    cout<<"enter a number";
    cin>>number;
    int x=reverseinteger(number);

    cout<<x;
    return 0;
}
