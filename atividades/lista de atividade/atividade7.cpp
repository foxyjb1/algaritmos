#include<iostream>
using namespace std;

int main() {
    const int tamanho_vetor = 10;
    int valores[tamanho_vetor];
    
   
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> valores[i];
    }
    
    //maior
    int maior = valores[0];
    for (int i = 1; i < tamanho_vetor; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    //menor
    int menor = valores[0];
    for (int i = 1; i < tamanho_vetor; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    
    cout << "Maior valor: " << maior <<endl;
    cout << "Menor valor: " << menor <<endl;
    
    return 0;
}