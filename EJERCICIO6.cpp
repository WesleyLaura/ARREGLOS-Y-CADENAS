/* 6. Calcular la suma de componentes de índice par e impar en un vector. */

#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int i,sumaPar = 0,sumaImpar = 0, n;
	
	 cout<<"INGRESE LA CANTIDAD DE ELEMENTOS DEL ARREGLO: "; cin>>n;
	 
	int arreglo[n];
	
	
	cout << "INGRESE LOS ELEMENTOS DEL ARREGLO:" << endl;
	for(i = 0; i <n; i++){
		cin >> arreglo[i];
	}

	for (i=0; i<n; i++){
		if(i % 2 == 0) {
			// par
			sumaPar += arreglo[i];
		} else {
			// impar
			sumaImpar += arreglo[i];
		}
	}
	
	cout << "La suma de los componentes del índice par es: " << sumaPar << endl;
	cout << "La suma de los componentes del índice impar es: " << sumaImpar << endl;
	
	return 0;
}