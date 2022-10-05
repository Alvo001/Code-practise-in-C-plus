#include <iostream>
#include <ctime>
 

int main()
{

    srand(time(0));
    int randNum = rand() %5 + 1;

    switch(randNum){
        case1:std::cout<<"You win a bumper sticker!\n";
            break;
        case2:std::cout<<"You win a t-shirt!\n";
            break;
        case3:std::cout<<"You win a free lunch!\n";
            break;
        case4:std::cout<<"You win a gift card!\n";
            break;
        case5:std::cout<<"You win a concert ticket!\n";
            break;
            
    }


    return 0;
}
