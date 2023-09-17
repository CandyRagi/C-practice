#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter a positive integer between 0 to 255"<<endl;
    cin>>a;

    int b1=a%2;
    int B1=a/2;
    int b2=B1%2;
    int B2=B1/2;
    int b3=B2%2;
    int B3=B2/2;
    int b4=B3%2;
    int B4=B3/2;
    int b5=B4%2;
    int B5=B4/2;
    int b6=B5%2;
    int B6=B5/2;
    int b7=B6%2;
    int B7=B6/2;
    int b8=B7%2;
    

    cout<<"the binary representation of the number "<<a<<" is "<<endl;

    cout<<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1;

    return 0;


    


}

