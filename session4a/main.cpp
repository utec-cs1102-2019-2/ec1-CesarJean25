#include <iostream>

int main() {
int ival = 42;
int*pival = &ival;
std::cout << pival << "\t" << *pival << "\t" << &pival;
    return 0;
}