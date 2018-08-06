#include <iostream>
#include "dogdoor.h"

using namespace std;

void DogDoor::open()
{
    cout << "The dog door opens" << endl;
    m_open = true;
}

void DogDoor::close()
{
    cout << "The dog door closes" << endl;
    m_open = false;
}

bool DogDoor::isOpen()
{
    return m_open;
}
