#include "inventory.h"


void Inventory::add(const Guitar& guitar)
{
    guitars.push_back(guitar);
}

std::list<Guitar> Inventory::search(const GuitarSpec& spec)
{
    std::list<Guitar> findings;

    for(auto i = guitars.cbegin(); i != guitars.cend(); ++i)
        if(*i == spec)
            findings.push_back(*i);

    return findings;
}
