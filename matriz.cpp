#include<iostream>

using namespace std;

int main(){

/*
/// Calculadora de tablas

    int num;
    int calc;

    cout << "Ingrese un num: ";
    cin >> num;
    cout << endl;

    for(int i = 1; i <= 10; i++)
    {
        calc = num*i;
        cout << num <<" x "<< i <<" = "<< calc << endl;
    }
*/
//#################################################################################################################################
/*
/// For dentro de otro for

    int tam = 5;

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
*/
//##################################################################################################################################
/*
///Matriz y busqueda

    int matriz[3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int numBus;
    bool flag = false;

    cout << "Ingrese el numero a buscar: ";
    cin >> numBus;
    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matriz[i][j] == numBus)
            {
                flag = true;
                cout << "El elemento "<< numBus << " se encontro en la matriz" << endl;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    if(!flag)
    {
        cout << "No se encontro el elem." << endl;
    }
*/
//##################################################################################################################################

///Como se constituye la matriz

    int filas,columnas;
    cout << "Ingrese numero de filas: ";
    cin >> filas;
    cout << "Ingrese numero de colum: ";
    cin >> columnas;

///Definir la matriz con los val q captamos

    int matriz [filas][columnas];

///Rellenar la matriz

    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            cout << "Ingrese un valor para la pos: " << i << ", " << j << endl;
            cin >> matriz[i][j];
        }
    }

///Mostrar la matriz

    cout << "La matriz ingresada es: " << endl;

    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
