#include<iostream>

//Namespace = provides a solution for using same variable with two different values



namespace first{
    int x = 1;
    }
namespace second{

    int x = 5;
}
int main(){

    std::cout<<first::x<<'\n';
    
    std::cout<<second::x<<'\n';
    

    using namespace first;

    std::cout<<x<<'\n';
    
    return 0;
}

