//Torres de Hanoi

#include <iostream>
using namespace std;

void hanoi(char torreA, char torreB, char torreC, int n) // Función hanoi
{
	if(n==1) //Base
	{
		cout<<"Mover disco "<<n<<" desde torre "<<torreA
		<<" a torre "<<torreC<<endl;
	}
	else //Recursividad
	{
		hanoi(torreA, torreC, torreB, n-1);
		cout<<"Mover disco "<<n<<" desde torre "<<torreA
		<<" a torre "<<torreC<<endl;
		hanoi(torreB, torreA, torreC, n-1);
	}
}

int main()
{
	hanoi('A','B','C',5); //Valores de la función hanoi
	return 0;
}
