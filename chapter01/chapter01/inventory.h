#ifndef INVENTORY_H
#define INVENTORY_H

#include <list>
#include "guitar.h"


class Inventory
{
public:
    void add(const Guitar& guitar);
    list<Guitar> search(const GuitarSpec& spec);

private:
    list<Guitar> guitars;
};

#endif // INVENTORY_H
