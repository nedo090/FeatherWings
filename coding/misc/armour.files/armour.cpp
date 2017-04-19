#include "armour.hpp"

Armour::Armour() {
        set_defense( 0 );
        set_durability( 0 );
        set_weight( 0.0f );

        set_rarity( Rarity::UNKNOWN );
        set_type( Type::UNKNOWN );
}

Armour::Armour( int default_defense, int default_durability, float default_weight, Armour::Rarity default_rarity, Armour::Type default_type ) {
        set_defense( default_defense );
        set_durability( default_durability );
        set_weight( default_weight );

        set_rarity( default_rarity );
        set_type( default_type );
}

int Armour::get_defense() { return defense; }
int Armour::get_durability() { return durability; }
float Armour::get_weight() { return weight; }
Armour::Rarity Armour::get_rarity() { return rarity; }
Armour::Type Armour::get_type() { return type; }

void Armour::set_defense( int new_defense ) { defense = new_defense; }
void Armour::set_durability( int new_durability ) { durability = new_durability; }

void Armour::set_weight( float new_weight ) { weight = new_weight; }
void Armour::set_rarity( Armour::Rarity new_rarity ) { rarity = new_rarity; }
void Armour::set_type( Armour::Type new_type ) { type = new_type; }
