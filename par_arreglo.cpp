#include<iostream>

using namespace std;

int main(){

    int arreglo = 0, i=0, valor=0;

    cout<<"Inserte la cantidad de numeros que quiere guardar: ";
    cin>>arreglo;
    cout<<endl;
    int numeros[arreglo];
    
    while (i<arreglo){
        cout<<"Inserte un numero: ";
        cin>>valor;
        int modulo = valor%2;

        if (modulo == 0){
            numeros[i] = valor;
            cout<<"Numero guardado"<<"\n";
        }

        else{
            i = i - 1;
            cout<<"Numero descartado"<<"\n";
        }
        i++;
    }
    
    for (int k = 0; k < arreglo; k++)
        {
            cout<<numeros[k]<<endl;
        }
        
    return 0;
}