#include "guitar.h"

Guitar::Guitar(string serialNumber, double price, string model, int numStrings, Builder builder, Type type, Wood backWood, Wood topWood) :
    GuitarSpec(model, numStrings, builder, type, backWood, topWood), m_serialNumber(serialNumber), m_price(price)
{

}

const string& Guitar::serialNumber() const
{
    return m_serialNumber;
}

double Guitar::price() const
{
    return m_price;
}

void Guitar::price(double price)
{
    m_price = price;
}
