#ifndef GUITARSPEC_H
#define GUITARSPEC_H

#include <string>

using namespace std;

enum class Builder
{
    Fender,
    Gibson,
    Martin,
    Any
};

enum class Type
{
    Acoustic,
    Electric,
    Any
};

enum class Wood
{
    Alder,
    Maple,
    Mahogany,
    Rosewood,
    Spruce,
    Any
};

class GuitarSpec
{
public:
    GuitarSpec(string model, int numStrings, Builder builder, Type type, Wood backWood, Wood topWood);
    const string& model() const;
    int numStrings() const;
    Builder builder() const;
    Type type() const;
    Wood backWood() const;
    Wood topWood() const;
    bool operator==(const GuitarSpec& other) const;

private:
    string m_model;
    int m_numStrings;
    Builder m_builder;
    Type m_type;
    Wood m_backWood;
    Wood m_topWood;
};

#endif // GUITARSPEC_H
