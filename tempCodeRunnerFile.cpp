#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int dig;
	char *c;
	c = new char[50];
	
	cout << "Inserte un numero: ";
	cin >> c;
	
	while(*c != 46 && *c){	//calcula el numero de digitos antes del punto
		dig++;
		c++;
	}
	c -= dig;	//regresa el puntero al inicio del vector
	
	float *f;
	f = new float;
	
	while(*c){
		if(*c != 46 ){
			*f += (*c-48) * pow(10,dig-1); //se suma cada digito segun su posici�n
			dig--;
			}
		c++;
	}
	
	cout << *f;
	
	delete [] c;
	delete f;

	return 0;
}