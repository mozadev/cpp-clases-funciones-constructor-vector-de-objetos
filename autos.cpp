#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <string>  
#include <vector>  



using namespace std;

class Auto
{
public:

	int CalcularPrecio();
	void MostrarDatos();
	Auto(string,int,string,int);

	Auto();
	~Auto();

private:
	string marca;
	int velocidad;
	string alarma;
	int numPuertas;
	};

int Auto::CalcularPrecio()
{
	int precio = (velocidad * 50) * numPuertas;
	if (marca == "audi")precio =precio+ 5000;
	if (marca == "porsche")precio =precio*2;
	if (marca == "jeep")precio =precio*20;

	return precio;

}

void Auto::MostrarDatos()

{	
	int precio = this->CalcularPrecio();
	cout << "marca: " << marca << " velocidad: " << velocidad << " alarma: " << alarma << " Num Puertas: " << numPuertas << " precio: " << precio<<endl;
}



Auto::Auto(string _marca, int _velocidad, string _alarma, int _numPuertas)
{
	 marca      =_marca  ;
	 velocidad  = _velocidad;
	 alarma     = _alarma;
	 numPuertas = _numPuertas;
	 }

Auto::Auto()
{
}

Auto::~Auto()
{
}

int main() {

	Auto obAuto1 = Auto("audi", 100, "alarmaSI", 4);
	Auto obAuto2 = Auto("porsche", 150, "alarmaNO", 4);
	Auto obAuto3 = Auto("jeep", 200, "alarmaSI", 4);

	cout<<"el precio del auto 1 es: "<< obAuto1.CalcularPrecio()<<endl;
	cout<<"el precio del auto 2 es: "<< obAuto2.CalcularPrecio()<<endl;
	cout<<"el precio del auto 3 es: "<< obAuto3.CalcularPrecio()<<endl;
	
	cout << endl;

	vector <Auto> autos;

	Auto obAuto4 = Auto("porsche", 150, "alarmaNO", 4);
	Auto obAuto5 = Auto("jeep", 200, "alarmaSI", 4);

	autos.push_back(obAuto1);
	autos.push_back(obAuto2);
	autos.push_back(obAuto3);
	autos.push_back(obAuto4);
	autos.push_back(obAuto5);

	for (int i = 0; i < autos.size(); i++)
	{
		autos[i].MostrarDatos();
	}
	cout << endl;

	int suma = 0;
	for (int i = 0; i < autos.size(); i++)
	{
		suma=suma+autos[i].CalcularPrecio();
	}
	cout << "la suma total de los precios de todos los autos es: " << suma <<endl;

	return 0;
}