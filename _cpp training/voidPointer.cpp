#include <iostream>
#include <vector>

using namespace std;

void showValue(float *p)
{
    *p =  *p * 5;
    }


int main(){

float mem = 1;
float* p = &mem;
int deref = (float)*p;

cout << deref << "\n";
// ! vectors

cout << *p << "\n";

showValue(p);

cout << *p << "\n";

}


