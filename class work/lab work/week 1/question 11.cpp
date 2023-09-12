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
    cout << pointmoney << endl;

    int quater=pointmoney/25;

    int dime=(pointmoney-(quater*25))/10;

    int nickel=(pointmoney-(quater*25)-(dime*10))/5;

    int penny=(pointmoney-(quater*25)-(dime*10)-(nickel*5));


    cout<<"The amount in coins is "<<tonnie<<" tonnie "<<loonie<<" lonnie "<<quater<<" quater "<<dime<<" dime "<<nickel<<" nickel "<<penny<<" penny "<<endl;



    int x = money * 100;
    cout << x/200 << endl;
    x = x % 200;
    cout << x / 100 << endl;
    x = x % 100;
    cout << x / 25 << endl;
    x = x % 25;
    cout << x / 10 << endl;
    x = x % 10;
    cout << x / 5 << endl;
    x = x % 5;
    cout << x / 1 << endl;



    return 0;
}