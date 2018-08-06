#ifndef GUITARSPEC_H
#define GUITARSPEC_H

#include <string>
#include "builder.h"
#include "type.h"
#include "wood.h"

class GuitarSpec
{
public:
    GuitarSpec(std::string model, int numStrings, Builder builder, Type type, Wood backWood, Wood topWood);
    const std::string& model() const;
    int numStrings() const;
    Builder builder() const;
    Type type() const;
    Wood backWood() const;
    Wood topWood() const;
    bool operator==(const GuitarSpec& other) const;

private:
    std::string m_model;
    int m_numStrings;
    Builder m_builder;
    Type m_type;
    Wood m_backWood;
    Wood m_topWood;
};

#endif // GUITARSPEC_H
