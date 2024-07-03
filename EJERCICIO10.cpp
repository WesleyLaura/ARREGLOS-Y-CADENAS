/*10. Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
tendencia central media, mediana y moda. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	float media;
	int Random,aux,contador,tam,moda,mediana,i,j;
	int maxRep=0;
	int sumatotal=0;
	int Array[30];
	tam=sizeof(Array)/sizeof(Array[0]);
	srand(time(0));
	for (i=0;i<30;i++) {
		Random=rand()%901+100;
		Array[i]=Random;
		sumatotal+=Random;
	}
	
	cout<<"Los 30 numeros generados aleatoriamente son: "<<endl;
	for (i=0;i<30;i++) {
		cout<<Array[i]<<" ";
	}
	cout<<endl;
	
		media=(float)sumatotal/tam; //MEDIA
	for (i=0;i<29;i++) { //Ordenamiento Ascendente
		for (j=i+1;j<30;j++) {
			if (Array[i]>Array[j]) {
				aux=Array[i];
				Array[i]=Array[j];
				Array[j]=aux;
			}
		}
	}
		mediana=Array[14]; //MEDIANA
	for (i=0;i<30;i++) { 
				contador=0;
		for (j=0;j<30;j++) {
				if (Array[i]==Array[j]) {
				contador++;
				}
			}
			if (contador>maxRep) {
					maxRep=contador;
					moda=Array[i]; //MODA
			}
	}
	cout<<"Ordenados ascendentemente: "<<endl;
	for (i=0;i<30;i++) {
		cout<<Array[i]<<" ";
	}
	cout<<endl;
	
	cout<<"La MEDIA es : "<<media<<endl;
	cout<<"La MEDIANA es : "<<mediana<<endl;
	
	if (maxRep!=1) {
		cout<<"La MODA es : "<<moda<<endl;
	} else {
		cout<<"La MODA NO EXISTE"<<endl;
	}
}