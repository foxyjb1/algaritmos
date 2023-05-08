#include<iostream>
using namespace std;

int main() {
    const int tamanho_vetor = 10;
    string nomes[tamanho_vetor];
    
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << "Digite o nome da " << i+1 << "a pessoa: ";
        cin >> nomes[i];
    }
    
    cout << "Nomes cadastrados:" <<endl;
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << nomes[i] <<endl;
    }
    
    return 0;
}