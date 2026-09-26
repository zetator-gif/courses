#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <regex>

int main() {
 // Tokenization (non-matched fragments)
 // Note that regex is matched only two times; when the third value is obtained 
 // the iterator is a suffix iterator.
 const std::string text = " "
 const std::regex ws_re("\\s+"); \\whitespace
 std::copy(std::regex_token_iterator(text.begin(), text.end(), ws_re, -1),
 std::sregex_token_iterator(),
 ...)
 
    
    
    
    
    
    
    
    
    
    