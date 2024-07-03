/*15. Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las 
cadenas son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de 
String.h*/

#include <iostream>
using namespace std;
int mistrcmp(char cadena1[],char cadena2[]) {
 	int i = 0;
    while (cadena1[i]!='\0' && cadena1[i]==cadena2[i]) {
        i++;
    }
    if (cadena1[i] < cadena2[i]) {
        return -1;
    } else if (cadena1[i] > cadena2[i]) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
	int resultado;
	char str1[]="Mundo";
	char str2[]="Hola";
	resultado=mistrcmp(str1,str2);
	cout<<"La cadena 1 es '"<<str1<<"'"<<endl;
	cout<<"La cadena 2 es '"<<str2<<"'"<<endl;
 	if (resultado == 0) {
        cout << "\nLas cadenas son iguales." << endl;
    } else if (resultado < 0) {
        cout << "\nLa cadena "<<"str1= "<<str1 <<" es menor que cadena" <<"str2= "<<str2<< endl;
    } else {
        cout << "\nLa cadena "<<"str1= "<<str1 <<" es mayor que cadena" <<"str2= "<<str2<< endl;
    }

    return 0;
}