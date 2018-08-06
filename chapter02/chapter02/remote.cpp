#include <iostream>
#include "remote.h"

using namespace std;

void Remote::pressButton()
{
    cout << "Pressing the remote control button..." << endl;

    if (m_dogDoor.isOpen()) {
        m_dogDoor.close();
    }
    else {
        m_dogDoor.open();
        m_timer.start(5000, this);
    }
}

void Remote::timerEvent(QTimerEvent *)
{
    cout << "Timer has expired" << endl;
    m_timer.stop();
    m_dogDoor.close();
}
