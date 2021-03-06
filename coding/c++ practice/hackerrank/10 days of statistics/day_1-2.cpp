#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

struct Data {
        int value, frequency;
};

void run();
std::vector<int> get_input();
std::vector<int> build_data( const int& size_ );
void sort( std::vector<int>& v );
float calculate_median( const std::vector<int>& v );
std::vector<float> build_quartiles( const std::vector<int>& v, const float& median );
int calculate_iqr( const std::vector<float>& v );
void print_output( const float& median );
void print_output( const std::vector<float>& v );

int main(void){

        run();

        return 0;
}// end function: main

void run() {
        std::vector<int> input = get_input();
        float median = calculate_median( input );
        std::vector<float> quartiles = build_quartiles( input, median );
        float iqr = calculate_iqr( quartiles );

        print_output( iqr );
}

std::vector<int> get_input() {
        int size = 0;
        std::cin >> size; std::cin.ignore();

        return build_data( size );
}

std::vector<int> build_data( const int& size_ ) {
        std::vector<Data> data(size_);
        std::vector<int> values;

        for ( int i = 0; i < size_; i++ ) {
                std::cin >> data[i].value; std::cin.ignore();
        }

        for ( int i = 0; i < size_; i++ ) {
                std::cin >> data[i].frequency; std::cin.ignore();

                for ( int j = 0; j < data[i].frequency; j++ ) {
                        values.push_back( data[i].value );
                }
        }

        sort( values );

        return values;
}

void sort( std::vector<int>& v ) {
        std::sort( v.begin(), v.end() );
}

float calculate_median( const std::vector<int>& v ) {
        float median = 0.0f;

        if ( ( v.size() % 2 ) == 0 ) {
                float tmp = ( v[( v.size() / 2 ) - 1] ) + ( v[( v.size() / 2 )] );
                median = tmp / 2;
        }
        else {
                median = v[( v.size() / 2 )];
        }
        return median;
}

std::vector<float> build_quartiles( const std::vector<int>& v, const float& median ) {
        //TODO resolve issue with odd and even number of elements when
        //calculaitng the quartiles
        std::vector<float> quartiles;

        for ( int i = 0; i < 2; i++ ) {
                std::vector<int> tmp = std::vector<int>();

                for ( int j = 0; j < v.size(); j++ ) {
                        //if ( v[j] <= median && i == 0 ) {
                        //        if ( j != (v.size() / 2 ))
                        //                tmp.push_back( v[j] );
                        //        else
                        //}
                        //else if ( v[j] >= median && i == 1 ){
                        //        if ( j != (v.size() / 2 ))
                        //                tmp.push_back( v[j] );
                        //}
                }

                quartiles.push_back( calculate_median( tmp ) );
        }

        return quartiles;
}

int calculate_iqr( const std::vector<float>& v ) {
        int range = 0.0f;

        range = v[1] - v[0];

        return range;
}

void print_output( const float& median ) {
        std::cout << std::setprecision(1) << std::fixed << median << std::endl;
}

void print_output( const std::vector<float>& v ) {
        for (int i = 0; i < v.size(); i++) {
                std::cout << v[i] << " ";
        }
        std::cout << std::endl;
}
