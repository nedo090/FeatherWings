#include <iostream>
#include <vector>

std::vector< std::vector<int> > get_input();
int calculate_max_hourglass(std::vector< std::vector<int> > v);
void print_output( int max_val );

int main(void){

        print_output( calculate_max_hourglass( get_input() ) );

        return 0;
}// end function: main

std::vector< std::vector<int> > get_input(){
        std::vector< std::vector<int> > input(6, std::vector<int>(6));

        for ( int i = 0; i < input.size(); i++ ) {
                for ( int j = 0; j < input[i].size(); j++ ) {
                        std::cin >> input[i][j];
                }
        }

        return input;
}

int calculate_max_hourglass(std::vector< std::vector<int> > v) {
        int sum = 0, max_val= -(9 * 7);

        for ( int i = 0; i < 4; i++ ) {
                for ( int j = 0; j < 4; j++ ) {
                        sum = v[i][j] + v[i][j + 1] + v[i][j + 2];
                        sum += v[i + 1][j + 1];
                        sum += v[i + 2][j] + v[i + 2] [j + 1] + v[i + 2][j + 2];

                        if ( sum > max_val )
                                max_val = sum;
                }
        }

        return max_val;
}

void print_output( int max_val ){
        std::cout << max_val;
}

