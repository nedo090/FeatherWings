#include <iostream>
#include <vector>
#include <iomanip>

struct Values {
        std::vector<int> averages;
        std::vector<int> weights;
        int size;
};

Values get_input();
Values get_values( const int& size );
float calculate_weighted_mean ( const Values& values );
void print_output ( const float& weighted_mean );

int main(void){
        print_output ( calculate_weighted_mean ( get_input() ) );

        return 0;
}// end function: main

Values get_input() {
        int size = 0;
        std::cin >> size; std::cin.ignore();

        return get_values( size );
}

Values get_values( const int& size ) {
        Values values;

        for ( int i = 0; i < size; i++ ){
                int tmp = 0;
                std::cin >> tmp; std::cin.ignore();
                values.averages.push_back( tmp );
        }
        for ( int i = 0; i < size; i++ ){
                int tmp = 0;
                std::cin >> tmp; std::cin.ignore();
                values.weights.push_back( tmp );
        }
        values.size = size;

        return values;
}

float calculate_weighted_mean ( const Values& values ) {
        float weighted_mean = 0.0f;
        float sum_avg = 0;
        float sum_weight = 0;

        for ( int i = 0; i < values.size; i++ ) {

                sum_avg += (values.averages[i] * values.weights[i]);
                sum_weight += values.weights[i];
        }

        if (sum_weight == 0)
                sum_weight = 1;

        weighted_mean = sum_avg / sum_weight;

        return weighted_mean;
}

void print_output ( const float& weighted_mean ) {
        std::cout << std::setprecision(1) << std::fixed << weighted_mean;
}
