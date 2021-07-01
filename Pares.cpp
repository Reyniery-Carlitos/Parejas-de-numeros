#include <iostream>

using namespace std;

int Pares(int n, int m);

int main(){
    int n, m;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Posicion a retornar: ";
    cin>>m;

    cout<<Pares(n, m);

    return 0;
}

int Pares(int n, int m){
    int count = 0;
    int digitos[20];

    while (n > 0){
        digitos[count] = n % 10;
        n = n / 10;
        count ++;
    }

    // Le asigna un valor de 0 a los valores que no contengan un par de numeros.
    if((sizeof digitos[count] + 1) % 2 == 1){
        digitos[count] = 0;
    }

    // Itera el array para agrupar en pares el numero ingresado.
    for(int i = (m * 2) - 1 ; i == (m * 2) - 1; i--){
        // Valida si el valor ingresado por el usuario es mayor que el valor del tamanio del array.
        if(((m*2)-1) > sizeof digitos[count]+1){
            cout<<0<<endl;
        } else{
            cout<<digitos[i]<<digitos[i-1]<<endl;
        }
        return 0;
    }
}