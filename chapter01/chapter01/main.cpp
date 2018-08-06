#include <iostream>
#include "inventory.h"

int main()
{
    Inventory inventory;

    Guitar guitar1("1", 1500.0, "Stratocaster", 6, Builder::Fender, Type::Electric, Wood::Alder, Wood::Alder);
    Guitar guitar2("2", 1600.0, "Stratocaster", 6, Builder::Fender, Type::Electric, Wood::Alder, Wood::Alder);
    Guitar guitar3("3", 2000.0, "Les Paul", 6, Builder::Gibson, Type::Electric, Wood::Mahogany, Wood::Mahogany);
    Guitar guitar4("4", 1000.0, "", 6, Builder::Martin, Type::Acoustic, Wood::Mahogany, Wood::Spruce);
    inventory.add(guitar1);
    inventory.add(guitar2);
    inventory.add(guitar3);
    inventory.add(guitar4);

    GuitarSpec spec("Stratocaster", 6, Builder::Fender, Type::Electric, Wood::Alder, Wood::Alder);

    list<Guitar> guitars = inventory.search(spec);

    for(const Guitar& guitar: guitars)
        cout << guitar << endl;

    return 0;
}
