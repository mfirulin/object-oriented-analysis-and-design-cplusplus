#include "inventory.h"


void Inventory::add(const Guitar& guitar)
{
    guitars.push_back(guitar);
}

list<Guitar> Inventory::search(const GuitarSpec& spec)
{
    list<Guitar> findings;

    for(auto i = guitars.cbegin(); i != guitars.cend(); ++i)
        if(*i == spec)
            findings.push_back(*i);

    return findings;
}
