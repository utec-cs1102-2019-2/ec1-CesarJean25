#include <iostream>
using namespace std;

void imprimir_notas(int notas [],int n);
int calcular_promedio(int notas[],int n);
int calcular_notamayor(int notas[],int n);
int calcular_notamenor(int notas[],int n);
int main(){
    int n=0;
    cout<<"Ingrese la cantidad de alumnos:";
    cin>>n;
    int *notas= new int [n];
    for (int i=0; i <n; i++){
        cin>>notas[i];
    }
    return 0;
}
void imprimir_notas (int notas []){
    cout<<"indie \t valor"<< endl;
    cout<<"--------|------------";
    for (int i=0; i<n ; i++)
      cout<<i<<"\t"<<notas[i]<<endl;
}

int calcular_promedio(int notas[],int n){
    int suma=0;
    for(int i=0;i<n;i++)
        suma= suma + notas[1];
}
    return suma/n;
