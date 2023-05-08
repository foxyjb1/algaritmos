#include<iostream>
using namespace std;

int main(){
	float nota1, nota2, nota3 , notaf;
	cout<<"Informe a 1º nota: ";
	cin>>nota1;
	cout<<"Informe a 2º nota: ";
	cin>>nota2;	
	cout<<"Informe a 3º nota: ";
	cin>>nota3;
	notaf = (nota1 + nota2 + nota3)/3;
	
	if(notaf>=9){
		cout<<"Sua nota e A "<<notaf<<endl;
	}
	else if((notaf>=7.5)&&(notaf<9) ){
		cout<<"Sua notae e B "<<notaf<<endl;
	}
	
	else if((notaf>=6)&&(notaf<7.5)){
		cout<<"Sua nota e C "<<notaf<<endl;
		
	}
	
	else if((notaf>=4)&&(notaf<6)){
		cout<<"Sua nota e D "<<notaf<<endl;
	}
	
	else if(notaf<4){
		cout<<"Sua nota e E "<<notaf<<endl;
	}
}
