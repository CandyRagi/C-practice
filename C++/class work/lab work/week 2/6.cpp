#include<iostream>

using namespace std;

int main()
{
    int y1,m1,d1;

    cout<<"enter date of birth of FIRST CHILD in yyyy mm dd format one by one"<<endl;
    cin>>y1>>m1>>d1;

    int y2,m2,d2;

    cout<<"enter date of birth of SECOND CHILD in yyyy mm dd format one by one"<<endl;
    cin>>y2>>m2>>d2;

    int totaldays;

    totaldays=((y1*360)+(m1*30)+d1)-((y2*360)+(m2*30)+d2);

    if(totaldays<0)
        totaldays=totaldays*(-1);

    int y=totaldays/360;
    int m=(totaldays-(y*360))/30;
    int d=(totaldays-(y*360)-m*30);


    cout<<"The difference between the date of birth of both child is "<<y<<" years "<<m<<" months "<<d<<" days ";
    return 0;            
    
    
}