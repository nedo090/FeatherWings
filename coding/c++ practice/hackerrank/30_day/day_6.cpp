#include <iostream>
#include <vector>

std::vector<std::string> get_input();
std::vector<std::string> seperate_string ( const std::vector<std::string>& v );
void print_output ( const std::vector<std::string>& v );

int main ( void ) {
        print_output ( seperate_string ( get_input() ) );
        return 0;
}// end function: main

std::vector<std::string> get_input() {
        int T = 0;
        std::vector<std::string> input;
        std::cin >> T; std::cin.ignore();

        for ( int i = 0; i < T; i++ ) {
                std::string tmp;
                std::getline ( std::cin, tmp );
                input.push_back ( tmp );
        }

        return input;
}

std::vector<std::string> seperate_string ( const std::vector<std::string>& v ) {
        std::vector<std::string> new_string;

        for ( int v_count = 0; v_count < v.size(); v_count++ ) {
                new_string.push_back ( "" );
                for ( int char_ = 0; char_ < v[v_count].size(); char_++ ) {
                        if ( ( char_ % 2 ) == 0 )
                                new_string[v_count] += v[v_count][char_];
                }

                new_string[v_count] += " ";

                for ( int char_ = 0; char_ < v[v_count].size(); char_++ ) {
                        if ( (char_ % 2) != 0 ) {
                                new_string[v_count] += v[v_count][char_];
                        }
                }
        }

        return new_string;
}

void print_output ( const std::vector<std::string>& v ) {
        for ( int v_count = 0; v_count < v.size(); v_count++ ) {
                std::cout << v[v_count] << std::endl;
        }
}
