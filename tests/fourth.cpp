#include <iostream>

using namespace std;

void efeito(){
    cout << "Efeito Borboleta\n";

}

int somar(int x, int y){
    int soma;
    soma = x + y;
    return soma;
}

int main(){
    
    efeito();

    int a = 5, b = 4;
    int s;
    s = somar(a, b);
    cout << "Soma: " << s << endl;

    return 0;
}