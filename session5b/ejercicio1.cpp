#include <iostream>
using namespace std;

int varGlobal=20;
int main() {
    cout << "ejercicio 1";
    int var_local =10;
    int*ptr_var_local = &var_local;

    cout<<var_local<<"\n";
    return 0;
}
//
// Created by cesar.gonzales on 19/09/2019.
//

