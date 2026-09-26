#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <regex>
#include <string>

int main() {
 std::string text = "on e t wo t h r ee";
 
 // Regex pattern R"(\s+)"
 //const std::regex ws_re(R"(\s+1)"); 
  const std::regex ws_re(R"(\s+)"); 
 //const std::regex ws_re(R"()"); 
 
 std::vector<std::string>words;
 
 // The std::transform version explicitly converts each regex submatch to a std::string.
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

for (const auto& row : text) {
    std::cout << row << '\n';
}

 return 100;
}
    
    
    