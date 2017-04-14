#include <iostream>

int get_input();
int get_multiples(const int& n, const int& i);

int main(void){

        int n = get_input();

        for (int i = 1; i <= 10; i++){
                std::cout << n << " x " << i << " = ";
                std::cout << get_multiples(n,i) << std::endl;
        }
        return 0;
}// end function: main

int get_input(){
        int input = 0;

        std::cin >> input;

        return input;
}

int get_multiples(const int& n, const int& i){
        return n * i;
}
