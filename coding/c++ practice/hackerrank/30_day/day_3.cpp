#include <iostream>

int getInput();
std::string compareInput(const int& input);
void printOutput(const std::string& message);

int main(void){

        printOutput( compareInput( getInput() ) );
        return 0;
}// end function: main

int getInput(){
        int input = 0;

        std::cin >> input;

        return input;
}

std::string compareInput(const int& input){
        std::string message = "Not Weird";

        if ( (input % 2) != 0 || (input > 5 && input < 21) ){
                message = "Weird";
        }
        return message;
}

void printOutput(const std::string& message){
        std::cout << message;
}

