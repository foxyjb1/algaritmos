#include<iostream>
using namespace std;

int main(){
    int valor, produto =1;
    cout<<"Digite um valor(ou zero para encerrar): ";
    cin>>valor;
    while(valor != 0){
        produto *= valor;
        cout<<"Digite outro valor (ou zero para encerrar):";
        cin>>valor;
    }
    cout <<"O produto dos numeros digitados e: "<<produto<<endl;
    return 0;
}