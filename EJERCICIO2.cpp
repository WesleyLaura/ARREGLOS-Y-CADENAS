/*Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada. */
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

void palabra(string cadena) {
	int n=0;
	while (cadena[n]!='\0') {
		n++;
	}
	for (int i=0;i<n;i++) {
		if (cadena[i]!=' ') {
			cout<<cadena[i];
		} else {
		cout<<endl;
		}
	}
}
int main() {
	SetConsoleOutputCP(CP_UTF8);
	cout<<"INGRESE UNA ORACIÓN EN CADENA :"<<endl;
	string oracion;
	getline(cin,oracion); //Getline nos ayuda a almacenar espacios
	palabra(oracion);
	return 0;
}