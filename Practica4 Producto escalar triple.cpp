#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	double v1[2];
	double v2[2];
    double v3[2];
    double vectorI;
	double vectorJ;
	double vectorK;
	double producto_escalarTriple;
	double prod_escA;
	double prod_escB;
	double prod_escC;
	double prod_Cruz_BxC;
	
	for(int i=0; i<3; i++){
		cout << "Ingresa el valor de x" << i+1 << ":"<< endl;
		cin >> v1[i];
		cout << "Ingresa el valor de y" << i+1 << ":"<< endl;
		cin >> v2[i];
		cout << "Ingresa el valor de z" << i+1 << ":"<< endl;
		cin >> v3[i];
	}
	
    vectorI = ((v2[1] * v3[2]) - (v3[1] * v2[2]));
	vectorJ = ((v1[1] * v3[2]) - (v3[1] * v1[2]));
	vectorK = ((v1[1] * v2[2]) - (v2[1] * v1[2]));
	cout <<"El vectorI es: "<< vectorI << endl <<"El vestorJ es:"<< vectorJ << endl <<"El vectorK es: "<< vectorK;
	
	prod_escA = ((v2[1] * v3[2]) - (v3[1] * v2[2])) * v1[0];
	prod_escB = ((v1[1] * v3[2]) - (v3[1] * v1[2])) * v2[0];
	prod_escC = ((v1[1] * v2[2]) - (v2[1] * v1[2])) * v3[0];
	
	producto_escalarTriple = prod_escA - prod_escB + prod_escC;
	cout << "\n\n";
	prod_Cruz_BxC = vectorI - vectorJ + vectorK;
	cout << "El producto cruz BxC es: " << prod_Cruz_BxC << "\n";
	
	cout << "El producto escalar es: " << prod_escA << "\n";
	cout << "El producto escalar es: " << prod_escB << "\n";
	cout << "El producto escalar es: " << prod_escC << "\n";
	cout << "El producto escalar triple es: " << producto_escalarTriple;
}
