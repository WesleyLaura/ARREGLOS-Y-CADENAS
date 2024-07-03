/*8. Comprobar si un número de 10 cifras es capicúa usando un arreglo. */
#include <iostream>
#include <windows.h>
using namespace std;

bool verifica(string cadena) {
	bool valida;
	int n=0;
	int i;
	while (cadena[n]!='\0') {
		n++;
	}
	//Verificacion capicua
	valida=true;
	for (i=0;i<n;i++) {
        if (cadena[i]!=cadena[9-i]) {
            valida=false;
            break;
        }
	}
	   return valida;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    string array;
    bool validacion;
  		cout<<"Ingrese un número de 10 dígitos"<<endl;
  		cin>>array;
  		validacion=verifica(array);
  	if (validacion==true) {
  		cout<<"El número ingresado ES CAPICÚA";
 	} else {
  		cout<<"El número ingresado NO ES CAPICÚA";
  	}
}