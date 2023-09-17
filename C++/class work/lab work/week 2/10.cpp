#include<iostream>

using namespace std;

double printincreasingorder(float n1, float n2,float n3)
    {
        if(n1<n2 && n2<n3) 
        {
            return n1,n2,n3;
        }
        if(n1>n2 && n2>n3)
        {
            return n3,n2,n1;
        }
        if(n1<n2 && n2>n3)
        {
            return n1,n2,n3;
        }
    }

int main()
{




    return 0;
}