/*
 *     COS1511_ASSIGNMENT120160905.cpp
 *
 *     Multiply recipe ingredients by user defined factor.
 *     
 *     @author: Anthony Mans
 *     @student number: 54875064
 *     @date: Sept 3rd, 2016
 */

#include <iostream>
#include <string>

using namespace std;

// Store ingredient information
struct Ingredients {
        string _name;
        float _quantity;
        string _unit;
}; // end struct: Ingredients

int main (){
        // Setup as array for easier manipulation
        Ingredients lemonMeringue[] = { { "White Sugar", 1, "cup"  },
                { "Flour", 2, "tablespoon" },
                { "Cornstarch", 3 , "tablespoon" },
                { "Salt", 0.75 , "teaspoon" },
                { "Water", 1.5, "cup" },
                { "Lemons", 2, "juice and zested" },
                { "Butter", 2, "tablespoon" },
                { "Egg Yolks", 4, "beaten"},
                { "Pie Crust", 1, "9in"  },
                { "Egg Whites", 4, "" },
                { "White Sugar", 6, "tablespoon" } };
        int mFactor = 0;

        do {
                cout << "Enter the factor with which to multiply the ingredients: ";
                cin >> mFactor;
                
                if (mFactor <= 0)
                        cout << "Value must be greater than zero!\n";
        } while( mFactor <= 0  ); // end do-while
        
        cout << "\nLemon Meringue Pie\n";
        cout << "\tIngredients\n";

        // Iterate through and multiply quantities with user input. 
        // Output ingredients and their new quantities
        for ( int i = 0; i < (sizeof(lemonMeringue)/sizeof(*lemonMeringue)); i++ ) {
                lemonMeringue[i]._quantity = lemonMeringue[i]._quantity * mFactor;
                cout << "\t\t" << lemonMeringue[i]._quantity << " ";
                cout << lemonMeringue[i]._unit << " ";
                cout << lemonMeringue[i]._name << "\n";
        }// end for

        return 0;
} // end function: main
