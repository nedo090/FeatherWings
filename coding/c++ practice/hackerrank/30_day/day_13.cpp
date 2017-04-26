#include <iostream>

using namespace std;

class Book {
        protected:
                string title, author;
        public:
                Book( string t, string a );
                virtual void display() =0;
};

class MyBook : Book {
        public:
                MyBook( string t, string a, int price );
                void display();
        private:
                int price;
};

MyBook::MyBook( string t, string a, int p ) : Book( t, a ) {
        price = p;
}

void MyBook::display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
}
