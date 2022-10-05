#include<iostream>


int main()
{

//&& = check if two conditions are trur


int temp;

std::cout << "Enter the temperature: ";
std::cin>> temp;

if(temp > 0 && temp < 30){
    std::cout << "The temperature is good!";

}else{
    std::cout << "The temperature is bad";
}

// || = check if atleast one of the two condition is true

if(temp <= 0 || temp >=30){
    std::cout << "The temperature is bad\n";
}


//! = reverses the logical state of its operand

bool sunny = true;

if(sunny){
    std::cout <<"it is sunny outside!\n";

} else{
    std::cout<<"It is cloudy outside\n";
}

return 0;

}




