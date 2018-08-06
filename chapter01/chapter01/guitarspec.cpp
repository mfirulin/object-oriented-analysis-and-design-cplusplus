#include "guitarspec.h"

GuitarSpec::GuitarSpec(string model, int numStrings, Builder builder, Type type, Wood backWood, Wood topWood) :
    m_model(model), m_numStrings(numStrings), m_builder(builder), m_type(type), m_backWood(backWood), m_topWood(topWood)
{

}

const string& GuitarSpec::model() const
{
    return m_model;
}

int GuitarSpec::numStrings() const
{
    return m_numStrings;
}

Builder GuitarSpec::builder() const
{
    return m_builder;
}

Type GuitarSpec::type() const
{
    return m_type;
}

Wood GuitarSpec::backWood() const
{
    return m_backWood;
}

Wood GuitarSpec::topWood() const
{
    return m_topWood;
}

bool GuitarSpec::operator==(const GuitarSpec& other) const
{
    return m_model == other.m_model &&
            m_numStrings == other.m_numStrings &&
            m_builder == other.m_builder &&
            m_type == other.m_type &&
            m_backWood == other.m_backWood &&
            m_topWood == other.m_topWood;
}
