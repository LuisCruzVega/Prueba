#include<iostream>
#define MAX 100
using namespace std;
int main (void)
{
	int n, pos, num, v[MAX];
	cout<<"\n Ingrese numero de elementos: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"\n Ingrese en la posicion: ["<<i<<"]: ";
		cin>>v[i];
	}
	cout<<"\n Ingrese la posicion de elemento a modificar: ";
	cin>>pos;
	cout<<"\n Ingrese el numero a remplazar: ";
	cin>>num;
	v[pos]=num;
	for(int i=1;i<=n;i++)
	{
		cout<<"\n "<<v[i]<<"\n";
	}
}
/*Diseñar un programa que permita ingresar
valores en un vector de n elementos,
luego el sw deberá permitir 
la modificación de uno de los
elementos del arreglo, 
desde una posición especifica.
*/
