#include <iostream>
using namespace std;

#define MAX 30


int main() {
    char stack[MAX];
    string kata;
    int top = -1;

    cout << "Silahkan masukkan sebuah kata \nprogram akan membalikan susunan hurufnya: ";
    cin >> kata;

    for (int i = 0; i<kata.length() ;i++){
        top++;
        stack[top] = kata[i];
    }

    cout << "\nIsi stacknya setelah kata dibalik: \n";
    for (int i = top; i>=0 ;i--){
        cout << stack[i];
        
    }


}
