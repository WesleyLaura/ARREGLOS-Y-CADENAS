/*13. Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h */

#include <iostream>
using namespace std;

char* mistrcpy(char str2[], char str1[]){
	
	int n = 0;
	
	while (str2[n]!= '\0'){
		n++;
	}
	for (int i = 0; i<n; i++) {
		str1[i] = str2[i];
	}
		
		return str1;

}

int main(){
	
	char str1[100]="";
	char str2[]="HOLA MUNDO";

	mistrcpy(str2, str1);
	
	cout <<str1;
	
	return 0;
}
	