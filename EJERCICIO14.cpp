/*14. Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de
String.h */
#include <iostream>
using namespace std;
char* mistrcat(char cadena1[],char cadena2[]) {
	int i=0;
	while (cadena1[i]!='\0') {
		i++;
	}
	int j=0;
	while (cadena2[j]!='\0') {
		cadena1[i]=cadena2[j];
			i++;
			j++;
	}
	return cadena1;
}
int main() {
	
	char str1[]="Wesley ";
	char str2[]="Rivaldo";
	mistrcat(str1,str2);
	cout<<str1;
	return 0;
}