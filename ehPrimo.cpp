#include <iostream>

#define SUCESSO 0

using namespace std;

bool ehPrimo(int num){
    if (num < 2) return false;
    for(int i = (num-1); i > 1; i--){
        if(num % i==0) return false;
    }
    return true;
}

int main(){

    int num;

    std::cin >> num;
    if(ehPrimo(num)) std::cout << num << " é primo\n";
    else std::cout << num << " não é primo\n";

    return SUCESSO;
}