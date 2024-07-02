/*11. Calcular la suma de elementos positivos y negativos en un arreglo. */
#include <iostream>
using namespace std;
int main(){
	int i,n;
	int SumaPositivo=0;
	int SumaNegativo=0;
	cout<<"INGRESE LA CANTIDAD TOTAL DEL ARREGLO: "; cin>>n;
	int arreglo[n];
	int tam = sizeof(arreglo)/sizeof(arreglo[0]);
	cout<<"INGRESE LOS ELEMENTOS DEL ARREGLO: "<<endl;
	for(i=0;i<tam;i++){
		cin>>arreglo[i];
		if(arreglo[i]<0){
		SumaNegativo+=arreglo[i];
		}else{
		SumaPositivo+=arreglo[i];
		}
	}
	
	cout<<"LA SUMA DE ELEMENTOS POSITIVOS ES: "<<SumaPositivo<<endl;
	cout<<"LA SUMA DE ELEMENTOS NEGATIVOS ES: "<<SumaNegativo<<endl;
		return 0;
}