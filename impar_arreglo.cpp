#include<iostream>

using namespace std;

int main(){

    int arreglo[3];
    int numeros = 0;
    int j=0;
    int modulo = 0;
    int num_impar[3];
    int valor = 0;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Inserte un numero: ";

        cin>>arreglo[i];

          modulo = arreglo[i] % 2;

          switch (modulo){
          case 1:
            valor = arreglo[i];
            num_impar[i] = valor;
            break;

            case 0:
            num_impar[i] = 0;
            break;
          
          default:
            break;
          }
    }

    cout<<"Los numeros impares son:\n";

    for (int i = 0; i < 3; i++)
    {
     cout<<num_impar[i]<<endl;   
    }
    
    return 0;
}