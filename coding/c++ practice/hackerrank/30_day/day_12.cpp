#include <iostream>
#include <vector>

using namespace std;

class Person {

};

class Student : public Person {
        public:
                Student( const string& first_name, const string& last_name, const int& id, const vector<int>& scores );
                char calculate( const vector<int>& scores );

        private:
                vector<int> test_scores;
};

Student::Student ( const string& first_name, const string& last_name, const int& _id, const vector<int>& scores ) {
        firstName = first_name;
        lastName = last_name;
        id = _id;
        test_scores = scores;
}

char Student::calculate( const vector<int>& scores ) {
        char grade;

        return grade;
}
