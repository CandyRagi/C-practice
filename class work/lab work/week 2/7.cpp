#include<iostream>
#include<cstdlib>

using namespace std;

int main()

{
    
    srand(time(0));
    int a=1;
    int b=3;

    int count=b-a+1;

    int x = rand();
    

    x=x%count;
    x=x+a;
    cout<<x;
    if(x==1)
    {
        cout<<"Yes";
    }
    else if(x==2)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Not sure";
    }

    return 0;



}