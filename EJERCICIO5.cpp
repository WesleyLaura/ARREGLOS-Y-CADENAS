/*Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.*/
#include <iostream>
#include <windows.h>
using namespace std;

int contador(int arreglo[], int tam, int numero) {
	int i, contador = 0;
	
	for (i=0; i<tam; i++){
		if (numero == arreglo[i]){
			contador++;
		}
	}
	
	return contador;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int i, j, aux,n;
	 cout<<"INGRESE LA CANTIDAD DE NÚMEROS: "; cin>>n;
	 
	int arreglo[n];
	
	cout << "INGRESE LOS ELEMENTOS DEL ARREGLO:" << endl;
	for(i = 0; i < n; i++){
		cin >> arreglo[i];
	}

	
	// Ordena el arreglo de forma ascendente
	for (i=0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if(arreglo[i] > arreglo[j]) {
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
			}
		}
	}
	
	int menor = arreglo[0];
	int mayor = arreglo[n-1];
	
	int totalMenor = contador(arreglo, n, menor);
	int totalMayor = contador(arreglo, n, mayor);
	
	cout << "El número mayor es: " << mayor << " y se repite " << totalMayor << " veces" << endl;
	cout << "El número menor es: " << menor << " y se repite " << totalMenor << " veces" << endl;
	
	return 0;
}