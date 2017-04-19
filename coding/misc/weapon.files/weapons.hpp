#include <string>
#ifndef WEAPONS_H
#define WEAPONS_H
class Weapon {
        public:
                enum class Rarity { UNKNOWN, COMMON, UNCOMMON, RARE, EXOTIC, LEGENDARY };
                enum class Damage_Type { UNKNOWN, BLUNT, BLEED, PIERCE };
                enum class Type {
                        UNKNOWN,
                        FIST,
                        FAN,
                        AXE
                };

                Weapon();
                Weapon( int default_damage, int default_durability, float default_weight, Weapon::Rarity default_rarity, Weapon::Damage_Type default_damage_type, Weapon::Type default_type );

                int get_damage();
                int get_durability();
                float get_weight();
                Rarity get_rarity();
                Damage_Type get_damage_type();
                Type get_type();

                void set_damage( int new_damage );
                void set_durability( int new_durability );
                void set_weight( float new_weight );
                void set_rarity( Rarity new_rarity );
                void set_damage_type( Damage_Type new_damage_type );
                void set_type( Type new_type );

        private:
                int damage, durability;
                float weight;
                Rarity rarity;
                Damage_Type damage_type;
                Type type;
};
#endif
