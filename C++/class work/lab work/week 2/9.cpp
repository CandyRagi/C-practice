#include<iostream>

using namespace std;

int isDigit(char ch)
    {
        

        
        for(int i=48;i<=57;i++)
        {
            if(ch==i)
            {
                cout<<i;
                return 1;

            }
        }
        return 0;
    }

int main()
{
    char ch;

    cout<<"enter a digit please"<<endl;
    cin>>ch;

    
    


    if(isDigit(ch)==1)
    {
        cout<<"true digit";
    }
    else
    {
        cout<<"not a digit gand mara";
    }
    return 0;
}

