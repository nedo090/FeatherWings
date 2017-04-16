#include <iostream>

int get_input();
int factorial( int n );
void print_output( int factorial );

int main(void){

        print_output( factorial( get_input() ) );

        return 0;
}// end function: main

int get_input() {
        int n = 0;

        std::cin >> n; std::cin.ignore();

        return n;
}

int factorial( int n ){
        if ( n < 2 )
                return 1;
        else
                return n * factorial( n - 1 );
}

void print_output( int factorial ) {
        std::cout << factorial << std::endl;
}
