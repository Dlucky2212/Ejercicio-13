#include <iostream>

using namespace std;
//13 Voltear un array usando punteros
void voltear_p(int arr[], int tam){
	int cont;
	int *p, *q;
	p = arr;
	q = arr;
	for(cont = 0; cont < tam/2; cont++, p++){
		int temp;
		temp = *p;
		*p = *(q + tam-1 -cont);
		*(q + tam-1- cont)= temp;
	}
}
//Imprimir array opcional
void impri_arr(int arr[], int tam){
	for( int i = 0; i < tam; i++){
		cout << arr[i] << endl;
	}
}
//Formar un array opcional
void formar(int arr[],int tam){
	cout << "Ingrese los valores de tu array: "<< endl;
	for(int i = 0; i < tam; i++){
	cin >> arr[i];
	}
}
int main()
{
    int tama;
    cout << "Ingrese el tamanio de su array: "<< endl;
	cin >> tama;
	int ararb[tama];

	formar(ararb, tama);
	cout << "Su array antes del volteo es: " << endl;
	impri_arr(ararb, tama);
	voltear_p(ararb,tama);
	cout << " Su array despues del volteo  usando punteros es: "<< endl;
	impri_arr(ararb, tama);
}
