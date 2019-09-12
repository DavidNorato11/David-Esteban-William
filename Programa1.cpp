#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
main()
{
	double numero1, numero2, suma, n1, n2, resta,m1,m2,m,d1,d2,d,b,h,a;
	cout<<"Buenas tardes aprendices \n\n\n\n";
	cout<< endl;
	cout<<"Son mas de las 15 horas\n\n";
	cout<<"\n\n\n Es hora de sumar \n";
	cout<<"Ingrese el primer numero de la suma \n";
	cin>>numero1;
	cout<<"Ingrese el segundo numero de la suma \n";
	cin>>numero2;
	suma=numero1+numero2;
	cout<<"La suma es : \n"<<suma;
	cout<<"\n\n\n es hora de pedir datos \n";
	cout<<"Ingrese el primer numero de la resta \n";
	cin>>n1;
	cout<<"Ingrese el segundo numero de la resta \n";	
	cin>>n2;
	resta=n1-n2;
	cout<<"El resultado de la resta es: \n"<<resta;
	cout<<"\n\n\n Vamos a multiplicar \n";
	cout<<"Ingrese el primer numero de la multiplicacion \n";
	cin>>m1;
	cout<<"Ingrese el segundo numero de la multiplicacion \n";
	cin>>m2;
	m=m1*m2;
	cout<<"El resultado de la multiplicacion es: \n"<<m;
	cout<<"\n\n\n Vamos a dividir \n\n";
	cout<<"Ingrese el primer numero de la division \n";
	cin>>d1;
	cout<<"Ingrese el segundo numero de la division \n";
	cin>>d2;
	d=d1/d2;
	cout<<"El resultado de la division es: \n"<<d;
	cout<< endl;
	
	cout<<"\n Vamos a calcular el area de un triangulo";
	cout<< endl;
	cout<<"Ingrese la medida de la base del triangulo \n";
	cin>>b;
	cout<<"Ingrese la medida de la altura del triangulo \n";
	cin>>h;
	a=(b*h)/2;
	cout<<"El area del traingulo es: \n"<<a;
	
	
	
	
	system("pause");
	getch();
}
