#include <iostream>

void get_input(float& meal_cost, int& tip_percent, int& tax_percent);
float calculate_tax(const float& meal_cost, const int& tax_percent);
float calculate_tip(const float& meal_cost, const int& tip_percent);
int calculate_total(const float& meal_cost, const float& tax, const float& tip);

int main(void)
{
        float meal_cost = 0;
        int tip_percent = 0, tax_percent = 0;
        int total = 0;

        get_input(meal_cost, tip_percent, tax_percent);
        total = calculate_total( meal_cost, calculate_tax( meal_cost, tax_percent ), calculate_tip( meal_cost, tip_percent ));

        std::cout << "The total meal cost is ";
        std::cout << total;
        std::cout << " dollars." << std::endl;

        return 0;
}// end function: main

void get_input(float& meal_cost, int& tip_percent, int& tax_percent) { std::cin >> meal_cost >> tip_percent >> tax_percent; }

float calculate_tax(const float& meal_cost, const int& tax_percent) {
        float tax = meal_cost * (tax_percent / 100.00);
        return tax;
}

float calculate_tip(const float& meal_cost, const int& tip_percent) {
        float tip = meal_cost * (tip_percent / 100.00);
        return tip;
}

int calculate_total(const float& meal_cost, const float& tax, const float& tip) {
        float total = meal_cost + tax + tip;
        return total + 0.5;
}

