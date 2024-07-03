/*4. Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos. */
#include <iostream>
using namespace std;
int main() {
	int n;
	int i,j;
	string aux;
	
	cout<<"INGRESE EL TOTAL DE ELEMENTOS DEL ARREGLO:"<<endl;
	cin>>n;
	string arreglo[n];
	cout<<"INGRESE LOS NOMBRES:"<<endl;
	for (i=0;i<n;i++) {
		cin>>arreglo[i];
		}
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (arreglo[i]>arreglo[j]) {
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;			}
		}
	}
	cout<<"\nLos nombres ordenados alfabeticamentes son:\n "<<endl;
	for (i=0;i<n;i++) {
		cout<<arreglo[i]<<endl;
		}
}