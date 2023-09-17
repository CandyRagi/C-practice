#include<iostream>
#include<cstdlib>

using namespace std;
    
bool alleven(int n)

{   
    bool flag=true;
    do
    {   
        
        int a=-20;
        int b=20;
        int x=rand();
        int count=b-a+1;
        x=x%count;
        x=x+a;
        cout<<x<<endl;


        if(x%2!=0)
        {
            flag=false;
        }
        n=n-1;

        

    }while(n>0);
    return flag;
}

int main()


{   
    int n;
    cout<<"enter a proper integer";

    cin>>n;

    cout<<"answer is "<<alleven<<endl;




    return 0;


}