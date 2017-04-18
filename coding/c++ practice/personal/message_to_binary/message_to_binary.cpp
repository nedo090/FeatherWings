#include <iostream>
#include <vector>

std::vector<std::string> get_input();
std::vector<int> get_char( const std::vector<std::string>& v );
std::vector<int> conv_2_bin( std::vector<int>& v );
void print_output( const std::vector<int>& s );

int main(void){
        std::vector<std::string> s = get_input();
        std::vector<int> char_v = get_char( s );
        std::vector<int> bin = conv_2_bin( char_v );
        print_output( bin );

        return 0;
}// end function: main

std::vector<std::string> get_input() {
        std::vector<std::string> v;
        std::string tmp = "";

        do {
                std::cin >> tmp;
                v.push_back( tmp );
        } while( tmp != ":quit" );

        return v;
}

std::vector<int> get_char( const std::vector<std::string>& v ) {
        std::vector<int> char_value;

        for ( int i = 0; i < v.size() - 1; i++ ) {
                for ( int j = 0; j < v[i].size(); j++) {
                        char_value.push_back( v[i][j] );
                }
        }

        return char_value;
}

std::vector<int> conv_2_bin( std::vector<int>& v ) {
        std::vector<int> binary;

        for ( int i = 0; i < v.size(); i++ ){
                while( v[i] > 0 ) {
                        int rem = v[i] % 2;
                        v[i] /= 2;
                        binary.push_back( rem );
                }
        }

        return binary;
}

void print_output( const std::vector<int>& s ) {
        for ( int i = s.size() - 1; i >= 0; i-- ) {
                std::cout << s[i];
        }

        std::cout << std::endl;
}

