#include<iostream>
using namespace std;

int main(){
	int valor, cont= 1, valorf;
	cout<<"Digite valor: ";
	cin>>valor;
	while(cont<11){
		valorf = valor + cont;
		cout<<valorf<<endl;
		cont++;
	}
	return 0 ;
}
