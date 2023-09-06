#include<iostream>

namespace first{
    int x=1;
}
namespace second{
    int x=2;
    float y=33.33;
}

int main(){
    int x=3;
    std::cout<<"This is main x "<<x<<'\n';
    std::cout<<"This is first x "<<first::x<<'\n';
    std::cout<<"This is second x "<<second::x<<'\n';

    float y=33.44;
    std::cout<<"This is main y "<<y<<'\n';
    std::cout<<"This is second y "<<second::y<<'\n';

    int z= x+y;

    std::cout<<"This is main z "<<z<<'\n';

    return 0;

}