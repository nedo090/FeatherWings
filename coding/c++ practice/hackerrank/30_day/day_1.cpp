        int iInput;
        double dInput;
        std::string sInput;

        std::cin >> iInput;
        std::cin.ignore();
        std::cin >> dInput;
        std::cin.ignore();
        std::getline(std::cin, sInput);

        std::cout << (i + iInput) << std::endl;
        std::cout.setf(std::ios::fixed);
        std::cout.precision(1);
        std::cout << (d + dInput) << std::endl;
        std::cout << s + sInput << std::endl;
