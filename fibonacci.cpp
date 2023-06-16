#include <iostream>

#define SUCESSO 0

using namespace std;

void Fibonacci(int num){
    int a = 1, b = 0;
    for (int i = 0; i < num; i++){
        std::cout << a << "\n";
        a += b;
        b = a - b;
    }
}

int main(){

    int num;

    std::cin >> num;

    Fibonacci(num);

    return SUCESSO;
}