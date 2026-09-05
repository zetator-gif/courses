std::string text;
std::getline(std::cin, text);

std::set<std::string> filter;

for(int i = 0; i < text.length(); i++){
    // filter.insert(text[i]); ::faulty
    filter.insert(std::string(1, text[i]));

}


#include <iostream>
#include <iomanip>
#include <string>
#include <set>

int main(){
    
    std::string text;
    std::getline(std::cin, text);
    
    std::set<std::string> filter;
    
    for(int i = 0; i< text.length(); i++){
        filter.insert(std::string(1, text[i]));
    }
    for (int value : text) {
        
     std::cout << text << " ";
     return 0;
    }
}
    
