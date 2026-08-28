#include <iostream>
#include <cctype>

bool accept3()
{
    int tries = 1;
    while(tries<4){
        std::cout<<"Do you want to proceed (y or n)\n";
        char answer = 0;
        std::cin>>answer;
        
        switch(answer){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout<<"Sorry, I don't understand that.\n";
            ++tries; 
        }
    }
    std::cout<<"Access Blocked";
    return false;
}

int main()
{
    bool result = accept3();
    
    if (result) {
        std::cout << "Proceeding...\n";
    } else {
        std::cout << "Stopping...\n";
    }
}
