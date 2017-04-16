#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

std::vector<int> input_data();
std::vector<int> build_vector( const int& size );
void sort( std::vector<int>& v );
float calculate_median( const std::vector<int>& v );
std::vector<int> calculate_quartiles( const std::vector<int>& v, const float& median );
void print_output( const std::vector<int>& quartiles, const int& median );
void run();

int main(void){
        run();
        return 0;
}// end function: main

void run(){
        std::vector<int> v = input_data();
        float median = calculate_median( v );
        std::vector<int> quartiles = calculate_quartiles( v, median );
        print_output( quartiles, median );
}

std::vector<int> input_data() {
        int size = 0;
        std::cin >> size; std::cin.ignore();

        return build_vector( size );
}

std::vector<int> build_vector( const int& size ) {
        std::vector<int> data;

        for ( int i = 0; i < size; i++ ) {
                int tmp = 0;
                std::cin >> tmp; std::cin.ignore();
                data.push_back( tmp );
        }

        sort( data );

        return data;
}

void sort( std::vector<int>& v ) {
        std::sort( v.begin(), v.end() );
}

float calculate_median( const std::vector<int>& v ) {
        float median = 0.0f;

        if ( ( v.size() % 2 ) == 0 ) {
                float tmp = v[( v.size() / 2.0f ) - 1] + v[v.size() /2];
                median = tmp / 2;
        }
        else
                median = v[( v.size() / 2 )];

        return median;
}

std::vector<int> calculate_quartiles( const std::vector<int>& v, const float& median ) {
        std::vector<int> quartiles;

        for ( int i = 0; i < 2; i++ ){
                std::vector<int> row = std::vector<int>();
                for ( int j = 0; j < v.size(); j++ ) {
                        if ( v[j] < median && i == 0 )
                                row.push_back(v[j]);
                        else if ( v[j] > median && i == 1 )
                                row.push_back(v[j]);
                }

                quartiles.push_back( calculate_median( row ) );
        }

        return quartiles;
}

void print_output( const std::vector<int>& quartiles, const int& median ) {
        std::cout << quartiles[0] << std::endl;
        std::cout << median << std::endl;
        std::cout << quartiles[1] << std::endl;
}

