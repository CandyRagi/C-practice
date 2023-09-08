#include<iostream>

using namespace std;

int main()
{
    int d1,m1,y1,d2,m2,y2;

    cout<<"enter birthdate , month and year of first child respectively ";
    cin>>d1>>m1>>y1;
    cout<<"enter birthdate , month and year of second child respectively ";
    cin>>d2>>m2>>y2;

    int daysdiff=(d1+(m1*30)+(y1*360))-(d2+(m2*30)+(y2*360));

    int y=daysdiff/360;
    int m=(daysdiff-y*360)/30;
    int d=(daysdiff-y*360-m*30);

    cout<<"the difference between their birthdates is off "<<d<<" days "<<m<<" months "<<y<<" years ";
    
    return 0;


}