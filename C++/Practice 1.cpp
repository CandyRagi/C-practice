#include<iostream>

using namespace std;

namespace first{

    int x=1;
}

int main()
{
    float x=3.5;

    cout<<x<<endl;

    cout<<first::x<<endl;

    return 0;

    
}