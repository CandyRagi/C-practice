#include<iostream>

using namespace std;

int main()
{
    float money;
    cout<<"enter the amount ";
    cin>>money;

    int a=money;

    int tonnie=a/2;
    int loonie=a%2;

    int pointmoney=(money-a)*100;

    int quater=pointmoney/25;

    int dime=(pointmoney-(quater*25))/10;

    int nickel=(pointmoney-(quater*25)-(dime*10))/5;

    int penny=(pointmoney-(quater*25)-(dime*10)-(nickel*5));


    cout<<"The amount in coins is "<<tonnie<<" tonnie "<<loonie<<" lonnie "<<quater<<" quater "<<dime<<" dime "<<nickel<<" nickel "<<penny<<" penny "<<endl;

    return 0;
}