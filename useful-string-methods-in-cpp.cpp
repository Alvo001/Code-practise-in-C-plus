#include <iostream>

int main()
{
    std::string name;

    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    if(name.length()> 12){
        std::cout<<"Your name can't be over 12 characters long";
    }

    if(name.empty()){
        std::cout<<"You didn't enter your name";
    }
    else{
        std::cout<<"hello welcome" <<name;
    
    
    }
    return 0;
}
