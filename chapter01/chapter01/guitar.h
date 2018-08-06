#ifndef GUITAR_H
#define GUITAR_H

#include <string>
#include "guitarspec.h"

class Guitar : public GuitarSpec
{
public:
    Guitar(string serialNumber, double price, string model, int numStrings, Builder builder, Type type, Wood backWood, Wood topWood);
    const string& serialNumber() const;
    double price() const;
    void price(double price);

private:
   string m_serialNumber;
   double m_price;
};

#endif // GUITAR_H
