#include "item.hpp"

const std::string Item::PATH = "/home/professoroptics/git/featherwings/coding/misc/game_files/resources/";

Item::Item() {}
Item::Item( Base_Stats& stats ) { this->stats = stats; }
Item::~Item() {}

Item& Item::operator=( const Item& rhs ) {
      this->stats = rhs.stats;
      return *this;
}

