#include<iostream>

using namespace std;

int main()
{
    float principal,intrest,time;
    cout<<"pls enter principal amount ,intrest rate and time respectivly"<<endl;
    cin>>principal>>intrest>>time;

    float total=principal+(principal*intrest*time)/100;

    cout<<"your total after "<<time<<" years is "<<total<<endl;

    return 0;



}
