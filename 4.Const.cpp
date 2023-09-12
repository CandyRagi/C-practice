#include<iostream>

using namespace std;

namespace first{

    const int x=3;

    // int x=7;

}

int main()
{
    const int x = 5;

    cout<<first::x<<endl;

    return 0;
}