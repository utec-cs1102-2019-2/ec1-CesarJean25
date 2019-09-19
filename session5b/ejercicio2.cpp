#include <iostream>
using namespace std;
int main() {
    int* ptrMonton = nullptr;
    int* ptrVar = nullptr;
    int var = 20;
    ptrVar = &var;
    ptrMonton = new int;
    *ptrMonton = 10;
    delete ptrMonton;


}
// Created by cesar.gonzales on 19/09/2019.
//

