#include <iostream>
#include <vector>

std::vector<std::vector<int> > get_input();
std::vector<std::vector<int> > constr_2D_array( int size );
void print_output( std::vector< std::vector<int> > v );

int main(void){
        print_output( get_input() );
        return 0;
}// end function: main

std::vector<std::vector<int> > get_input() {
        return constr_2D_array(6);
}

std::vector<std::vector<int> > constr_2D_array( int size ) {
        std::vector< std::vector<int> > input( size, std::vector<int>(6) );

        for ( int i = 0; i < size; i++ ) {
                for ( int j = 0; j < size; j++ ) {

                        do {
                                std::cin >> input[i][j]; std::cin.ignore();

                                if ( input[i][j] > 9 || input[i][j] < -9 )
                                        std::cout << "Value must be between -9 and 9. Please try again!" << std::endl;

                        } while( input[i][j] > 9 || input[i][j] < -9 );
                }
        }
        std::cout << std::endl;

        return input;
}

void print_output( std::vector< std::vector<int> > v ) {
        for ( int i = 0; i < v.size(); i++ ){
                for ( int j = 0; j < v[i].size(); j++ ) {
                        std::cout << v[i][j] << " ";
                }
                std::cout << std::endl;
        }
}
