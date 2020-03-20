#include <iostream>
using namespace std;

// Programa para explicar las funciones y las plantillas en el caso de ue haya que introducir más datos

// Prototipo de función
template <class TIPOD>
TIPOD absoluto (TIPOD numero);

// Al definir esta plantilla, la función absoulto no trabaja exclusivamente con un tipo de dato
// sino con lo que le metamos. Definimos una clase TIPOD que puede ser lo que sea

// Main
int main() {
	// Definimos los datos
	int entero;
	float flotante;
	double doble;
	
	// Pedimos los datos al usuario
	cout<<"Introduce un entero: "; cin>>entero;
	cout<<"Introduce un float: "; cin>>flotante;
	cout<<"Introduuce un doble: "; cin>>doble;
	
	//Llamamos a la función
	entero = absoluto(entero);
	flotante = absoluto(flotante);
	doble = absoluto(doble);
	
	// Imprimirmos los resultados
	cout<<"\nEl absoluto del numero entero es: "<<entero<<endl;
	cout<<"El absoluto del numero flotante es: "<<flotante<<endl;
	cout<<"El absoluto del numero doble es: "<<doble<<endl<<endl;
	
	system("pause");
	return 0;
}

// Funciones
template <class TIPOD>
TIPOD absoluto(TIPOD numero){
	if (numero < 0){
		numero = numero * -1;
	}
	
	return numero;
}
