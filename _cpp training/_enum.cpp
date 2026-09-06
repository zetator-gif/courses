//  2.3.3 Enumeration is strongly typed - ensures enumerators do not pollute global namespace, enumerators are scoped
enum class Name {enumerator1, enum2, enum3};
Name z = Name::enum3;
    cin >> z;
int main() {
    Name z = Name::enum3;  // ✓ Correct scope
    
    // To read from cin:
    int input;
    cin >> input;
    if (input >= 0 && input <= 2) {
        z = static_cast<Name>(input);  // Cast int to enum
    }
    
    return 0;