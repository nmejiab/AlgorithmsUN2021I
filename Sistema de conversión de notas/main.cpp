#include <iostream>
#include <stdlib.h>

using namespace std;
float UtG(float unidades){
    return (unidades * 2) / 5;
}
float GtU(float gians){
    return (gians * 5) / 2;
}
int main()
{
    int eleccion;
    float valor;
    cout << "Programa que convierte de unidades de nota standard a gians o viseversa" << endl << endl;
    cout << "Que desea hacer?:" << endl << endl;
    cout << "1. Convertir de Unidades(standard) a Gians" << endl;
    cout << "2. Convertir de Gians a Unidades(standard)" << endl;
    cin >> eleccion;
    while(eleccion != 1 && eleccion != 2){
        cout << "Valor de eleccion invalido intentelo de nuevo, recuerde que las opciones son:"<<endl;
        cout << "1. Convertir de Unidades(standard) a Gians" << endl;
        cout << "2. Convertir de Gians a Unidades(standard)" << endl;
        cin >> eleccion;
    }
    cout << endl << "Su nota fue:" << endl;
    cin >> valor;
    if(eleccion == 1){
        while(valor < 0 || valor > 5){
            cout << "Valor de nota invalido intentelo de nuevo, recuerde que las undades(Standard) se encuentran en un intervalo entre 0 y 5:"<<endl;
            cin >> valor;
        }
        cout << "Usted saco " << UtG(valor) << " Gians" << endl << endl <<endl;
    }else{
        while(valor < 0 || valor > 2){
            cout << "Valor de nota invalido intentelo de nuevo, recuerde que los gians se encuentran en un intervalo entre 0 y 2:"<<endl;
            cin >> valor;
        }
        cout << "Usted saco " << GtU(valor) << " Unidades(standard)" << endl << endl <<endl;
    }
    string dn;

    cout << "Desea volver a inentarlo? Y/N: ";
    cin >> dn;
    while(dn != "Y" && dn != "y" && dn != "N" && dn != "n"){
        cout << "Valor de eleccion invalido intentelo de nuevo, recuerde que las opciones son Y/N"<<endl;
        cin >> dn;
    }
    if(dn == "Y" || dn == "y"){
        system("CLS");
        return main();
    }else{
        exit (EXIT_SUCCESS);
    }
    return 0;
}
