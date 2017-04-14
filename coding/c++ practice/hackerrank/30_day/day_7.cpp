#include <iostream>
#include <vector>

std::vector<int> get_input();
void print_output ( std::vector<int> v );

int main(void){

        return 0;
}// end function: main

std::vector<int> get_input() {
        int size;
        std::cin >> size; std::cin.ignore();

        std::vector<int> input;

        for ( int i = 0; i < size; i++ ) {
                int tmp;
                std::cin >> tmp; std::cin.ignore();
                input.push_back(tmp);
        }

        return input;
}
