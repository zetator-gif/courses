#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <regex>
#include <string>

int main() {
 std::string text = "on e t wo t h r ee";
 const std::regex ws_re(R"(\s+)"); 
 //const std::regex ws_re(R"()"); 
 
 std::vector<std::string>words;
 
 std::transform(
    std::sregex_token_iterator(
        text.cbegin(), text.cend(), ws_re, -1
        ),
    std::sregex_token_iterator(),
    std::back_inserter(words),
    [](const std::ssub_match& match) {
        return match.str();
    }
);







for (const auto& row : words) {
    std::cout << row << '\n';
}

 return 100;
}
    
    
    