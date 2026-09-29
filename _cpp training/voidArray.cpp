#include <array>
#include <iostream>
// function of type void = no .size() member
void maxArray(double* x, const double* y) {
    for (int i = 0; i < 65536; i++) {
        if (y[i] > x[i]) x[i] = y[i];
    }
}
    
int main() {
    double o[65536] = {};
    double p[65536] = {};
    
    maxArray(o, p);
        for(int i = 0; i < 65536; i ++){
            std::cout << maxArray[i];
            };
    
    return 0;
    
    }

