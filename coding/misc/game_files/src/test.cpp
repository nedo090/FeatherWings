#include "item.hpp"
#include <iostream>

int main(void){

      using namespace std;

      vector<Item> test;

      create_item( test );

      cout << test[0].get_name() << endl;

      return 0;
}// end function: main

