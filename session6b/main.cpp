#include <iostream>
using namespace std;
void imprimir_notas(int n, int notas [], int prom);
int main() {
    cout << "Ingrese la cantidad de alumnos" <<endl;
    int n = 0;
    cin>>n;
    string * codigos = new string[n];
    string * nombres = new string[n];
    int * edades = new int[n];
    char* sexo = new char [n];

    for(int i=0; i<n; i++){
        cin>>codigos[i];
        cin>>nombres[i];
        cin>>edades[i];
        cin>>sexo[i];
    }
    imprimir_tabla(codigos, nombres, edades, sexo);
    return 0;
}
void imprimir_tabla(int n, string codigos[], string nombres[],int edades, );
      for(int i=0; i<n; i++)