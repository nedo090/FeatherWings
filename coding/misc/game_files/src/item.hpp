#ifndef ITEM_H_
#define ITEM_H_
#include <string>
#include <vector>
#include "file_ops.hpp"

template <typename T>
inline void create_item( std::vector<T>& test );

struct Base_Stats {
      std::string name;
};

class Item {
      public:
            static const std::string PATH;

            Item();
            Item( Base_Stats& stats );
            ~Item();

            virtual Item& operator=( const Item& rhs );

            inline std::string get_name() { return stats.name; }
            inline void set_name( std::string new_name ) { stats.name = new_name; }


      private:
            Base_Stats stats;
};

template <typename T>
void create_item( std::vector<T>& test ) {
      using namespace std;

      string path = T::PATH + "armour/";
      int count = 0;
      vector< vector< string > > files = read_dir( path, count );
      test.reserve( count );
      Base_Stats stats;

      for ( int i = 0; i < count; i++ ) {
            stats.name = files[i][0];
            T item( stats );
            test.push_back( item );
      }
}

#endif
