/* 1. Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" → "Cáceres
Patrimonio De La Humanidad"  */

#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

string ponerMayus(string cadena) {
	int n=0;
	while (cadena[n]!='\0') {
		n++;
	}
	for (int i=0;i<n;i++) {
		if (i==0) {
		cadena[i]=toupper(cadena[i]);
	} else if (cadena[i]==' ') {
		cadena[i+1]=toupper(cadena[i+1]);
	}
}
	return cadena;
}
int main() {
	SetConsoleOutputCP(CP_UTF8);
	string array="cáceres patrimonio de la humanidad"; 
	cout<<ponerMayus(array); //cadena con palabras iniciales en mayuscula
	return 0;
}