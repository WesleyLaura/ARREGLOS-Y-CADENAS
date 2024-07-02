/* 7. Invertir un vector e imprimirlo. */

#include <iostream>
using namespace std;

int main(){
	int i, j, aux,n;
	cout<<"INGRESE LA CANTIDAD DE ELEMENTOS DEL ARREGLO: "; cin>>n;
	int arreglo[n];
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	cout<<"INGRESE LOS ELEMENTOS DEL ARREGLO: "<<endl;
	for(i=0; i<tam;i++){
		cin>>arreglo[i];
	}
	
	for (i=0; i < tam - 1; i++) {
		for (j = i + 1; j < tam; j++) {
			aux = arreglo[i];  
	        arreglo[i] = arreglo[j];  
	        arreglo[j] = aux; 
		}
	}
	
	// Imprime los elementos de arreglo ya invertidos
	for(i = 0; i < tam; i++){
		cout << "Elemento(" << i + 1 << ") = " << arreglo[i] << endl;
	}
	
	return 0;
}