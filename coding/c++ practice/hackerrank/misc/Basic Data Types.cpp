#include <iostream>

int main(void){
        int _int;
        long _long;
        long long _longlong;
        char _char;
        float _float;
        double _double;

        std::cin >> _int >> _long >> _longlong >> _char >> _float >> _double;

        std::cout << _int << std::endl;
        std::cout << _long << std::endl;
        std::cout << _longlong << std::endl;
        std::cout << _char << std::endl;
        std::cout.setf(std::ios::fixed);
        std::cout.precision(3);
        std::cout << _float << std::endl;
        std::cout.precision(9);
        std::cout << _double << std::endl;

        return 0;
}// end function: main
