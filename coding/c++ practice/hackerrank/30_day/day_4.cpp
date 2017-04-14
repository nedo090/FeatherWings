class Person{
        public:
                int age;
                Person(int initial_age);
                void amIOld();
                void yearPasses();

};

Person::Person(int initial_age){
        if ( initial_age < 0 ){
                age = 0;
                std::cout << "Age is not valid, setting age to 0." << std::endl;
        }
        else
                age = initial_age;
}

void Person::amIOld(){
        if ( age < 13 )
                std::cout << "You are young." << std::endl;
        else if ( age >= 13 && age < 18 )
                std::cout << "You are a teenager." << std::endl;
        else
                std::cout << "You are old." << std::endl;
}

void Person::yearPasses(){
        age++;
}
