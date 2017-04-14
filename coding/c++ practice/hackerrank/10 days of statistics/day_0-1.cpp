
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

std::vector<int> get_input ();
float calculate_mean ( const std::vector<int>& v );
float calculate_median ( std::vector<int>& v );
void sort ( std::vector<int>& v );
int calculate_mode ( const std::vector<int>& v );
void print_output( const float& mean, const float& median, const int& mode );

int main ( void ) {
        std::vector<int> input = get_input();

        sort ( input );
        print_output ( calculate_mean( input ), calculate_median( input ), calculate_mode( input )  );

        return 0;
}// end function: main

std::vector<int> get_input () {
        int n = 0;
        std::vector<int> input;

        std::cin >> n; std::cin.ignore();

        for ( int i = 0; i < n; i++ ) {
                int temp;
                std::cin >> temp;
                input.push_back(temp);
        }

        return input;
}

void sort ( std::vector<int>& v ) {
        std::sort (v.begin(), v.end());
}

float calculate_mean ( const std::vector<int>& v ) {
        float mean = 0.0f;
        float sum = 0.0f;

        for ( int i = 0; i < v.size(); i++ ) {
                sum += v[i];
        }

        mean = sum / v.size();
        return mean;
}

float calculate_median ( std::vector<int>& v ) {
        float median = 0;

        if ( (v.size() % 2) == 0 ) {
                float tmp = v[(v.size() / 2.0f) - 1] + v[v.size() / 2];
                median = tmp / 2;
        } else {
                median = v[( v.size() / 2)];
        }

        return median;
}

int calculate_mode ( const std::vector<int>& v ) {
        int max = 0, mode = v[0];
        for ( int i = 0; i < v.size(); i++ ) {
                int count = 0;
                for ( int j = 0; j < v.size(); j++ ) {
                        if ( v[j] == v[i] ) {
                                count++;
                        }
                }
                if ( count > max ) {
                        max = count;
                        mode = v[i];
                }
        }
        //std::cout << "max " << max << std::endl;
        //std::cout << "mode " << mode << std::endl;

        return mode;
}

void print_output ( const float& mean, const float& median, const int& mode) {
        std::cout << std::fixed;
        std::cout << std::setprecision(1) << mean << std::endl;
        std::cout << std::setprecision(1) << median << std::endl;
        std::cout << mode << std::endl;
}

