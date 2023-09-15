#include<iostream>

using namespace std;

int onepower(int i)

    
    
    {
        int s;

        s=-1;
        for(int j=1;j<=i;j++)
        {
            s=s*(-1);

        }
        return s;
    }


int main()
{
    double y;

    int n;

    do
    {
        cout<<"Please enter a positive integer"<<endl;
        cin>>n;
    }while(n<=0);
    double sum=0;

    for(int i=1;i<=n;i++)
    {
        sum=sum+((1/static_cast<float>(i))*onepower(i));       
    }

    cout<<sum;

    return 0;
}