#include <string>
#ifndef ARMOUR_H
#define ARMOUR_H
class Armour {
        public:
                enum class Rarity { UNKNOWN, COMMON, UNCOMMON, RARE, EXOTIC, LEGENDARY };
                enum class Type { UNKNOWN, SHIELD, HELMET, CUIRASS, GAUNTLETS, GREAVES, BOOTS };

                Armour();
                Armour( int default_defense, int default_durability, float default_weight, Armour::Rarity default_rarity, Armour::Type default_type );

                int get_defense();
                int get_durability();
                float get_weight();
                Rarity get_rarity();
                Type get_type();

                void set_defense( int new_defense );
                void set_durability( int new_durability );
                void set_weight( float new_weight );
                void set_rarity( Armour::Rarity new_rarity );
                void set_type ( Armour::Type new_type );

        private:
                int defense, durability;
                float weight;
                Rarity rarity;
                Type type;
};
#endif

