/* 9. Rotar las componentes de un vector una posición hacia la derecha. */

#include <iostream>
using namespace std;

int main(){
	
	int i, aux,n;
	cout<<"INGRESE LA CANTIDAD TOTAL DE ELEMENTOS DEL ARREGLO: "; cin>>n;
	int arreglo[n];
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	cout<<"INGRESE LOS ELEMENTOS DEL ARREGLO: "<<endl;
	for(i=0;i<tam;i++){
		cin>>arreglo[i];
	}
	
	aux = arreglo[tam - 1];
	
	for (i=tam-1; i > 0; i--) {
		arreglo[i] = arreglo[i - 1];
	}
	
	arreglo[0] = aux;
	
	// Imprime los elementos de arreglo
	for(i = 0; i < tam; i++){
		cout << "Elemento(" << i + 1 << ") = " << arreglo[i] << endl;
	}
	
	return 0;
}