#include<iostream> 
#include<math.h> //Libreria para funciones matematicas
 //Dar pausa para continuar
#include<conio.h> // 
using namespace std;
main()
	{
		setlocale(LC_CTYPE,"Spanish");
		int opcion;
		cout<<"Por favor presione una de las siguientes teclas del menu, segun su interes\n";
		cout<<"1 para estoy en uno\n";
		cout<<"2 para estoy en dos\n";
		cout<<"4 para estoy en cuatro\n";
		cout<<"Con otra tecla distinta termina el programa\n";
		cin>>opcion;
		system("cls");
		switch(opcion)		
		{
			case 1: cout<<"Estoy en uno\n";
					int n1,n2,r;
					n1=10;
					n2=20;
					r=n1+n2;
					cout<<"El resultado de la suma es: "<<r;
			break;
			case 2: getch(); cout<<"Estoy en dos\n";
			break;
			case 4: cout<<"Estoy en cuatro\n";
				double num1,num2,potencia;
				cout<<"Ingrese la base de la potencia: ";
				cin>>num1;
				cout<<"Ingrese el exponente de la potencia: ";
				cin>>num2;
				potencia=pow(num1,num2);
				cout<<"la potencia de "<<num1<<" elevado a la "<<num2<<" es: "<<potencia;
			break;
			default: cout<<"La eleccion no pertenece al menu";
		}
		cout<<endl;
		system("pause");
	}                                                                                             
