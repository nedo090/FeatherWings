#include "weapons.hpp"

Weapon::Weapon() {
        set_damage( 0 );
        set_durability( 0 );
        set_weight( 0.0f );
        set_rarity( Rarity::UNKNOWN );
        set_damage_type( Damage_Type::UNKNOWN );
        set_type( Type::UNKNOWN );
}

Weapon::Weapon( int default_damage, int default_durability, float default_weight, Weapon::Rarity default_rarity, Weapon::Damage_Type default_damage_type, Weapon::Type default_type ) {
        set_damage( default_damage );
        set_durability( default_durability );
        set_weight( default_weight );
        set_rarity( default_rarity );
        set_damage_type( default_damage_type );
        set_type( default_type );
}

int Weapon::get_damage() { return damage; }
int Weapon::get_durability() { return durability; }
float Weapon::get_weight() { return weight; }
Weapon::Rarity Weapon::get_rarity() { return rarity; }
Weapon::Damage_Type Weapon::get_damage_type() { return damage_type; }
Weapon::Type Weapon::get_type() { return type; }

void Weapon::set_damage( int new_damage ) { damage = new_damage; }
void Weapon::set_durability( int new_durability ) { durability = new_durability; }
void Weapon::set_weight( float new_weight ) { weight = new_weight; }
void Weapon::set_rarity( Weapon::Rarity new_rarity ) { rarity = new_rarity; }
void Weapon::set_damage_type( Weapon::Damage_Type new_damage_type ) { damage_type = new_damage_type; }
void Weapon::set_type( Weapon::Type new_type ) { type = new_type; }
