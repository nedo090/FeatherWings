#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>

std::map<std::string, unsigned int> input_map_data ();
std::map<std::string, unsigned int> create_map( const int& map_size );
void query_map ( std::map<std::string, unsigned int> phone_book );
std::string input_query();
void print_output ( std::string msg );

int main(void){

        query_map ( input_map_data() );
        return 0;
}// end function: main

std::map<std::string, unsigned int> input_map_data () {
        int map_size = 0;

        std::cin >> map_size; std::cin.ignore();

        return create_map( map_size );
}

std::map<std::string, unsigned int> create_map( const int& map_size ){
        std::map<std::string, unsigned int> phone_book;

        for ( int i = 0; i < map_size; i++ ) {
                std::string name;
                std::cin >> name;
                std::cin >> phone_book[name]; std::cin.ignore();

        }

        return phone_book;
}

void query_map ( std::map<std::string, unsigned int> phone_book ) {
        while ( true ) {
                std::string tmp = input_query();
                if ( tmp == "" )
                        break;

                if ( phone_book.count(tmp) == 0 ) {
                        print_output("Not found");
                }
                else
                        print_output(tmp + "=" + std::to_string(phone_book[tmp]));
        }
}

std::string input_query() {
        std::string name;

        std::getline(std::cin, name);

        return name;
}

void print_output ( std::string msg ) {
        std::cout << msg << std::endl;
}

