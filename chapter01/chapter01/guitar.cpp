#include "guitar.h"

Guitar::Guitar(std::string serialNumber, double price, std::string model, int numStrings, Builder builder, Type type, Wood backWood, Wood topWood) :
    GuitarSpec(model, numStrings, builder, type, backWood, topWood), m_serialNumber(serialNumber), m_price(price)
{

}

const std::string& Guitar::serialNumber() const
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
