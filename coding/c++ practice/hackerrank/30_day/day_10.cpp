#include <iostream>
#include <cmath>
#include <vector>

int get_input();
std::vector<int> convert_to_binary( int n );
int count_consec( const std::vector<int>& binary );
void print_output( const int& n );

int main(void){
        print_output( count_consec( convert_to_binary( get_input() ) ) );

        return 0;
}// end function: main

std::vector<int> convert_to_binary( int n ) {
        std::vector<int> binary;

        while ( n > 0 ) {
                int remainder = n % 2;
                n = n / 2;
                binary.push_back( remainder );
        }
        return binary;
}

int count_consec( const std::vector<int>& binary ) {
        int count = 0, max_count = 0;

        for ( int i = 0; i < binary.size(); i++ ) {
                if ( binary[i] == 1 ) {
                        count++;
                        if ( count > max_count ) {
                                max_count = count;
                        }
                }
                else {
                        count = 0;
                }
        }

        return max_count;
}

void print_output( const int& n ) {
        std::cout << n << std::endl;
}

int get_input() {
        int n = 0;

        std::cin >> n;

        if ( n >= 1 && n <= std::pow( 10, 6 ) ) {
                return n;
        }
        else return 0;
}

