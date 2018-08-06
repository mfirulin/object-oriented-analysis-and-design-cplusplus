#include <iostream>
#include "remote.h"

using namespace std;
using namespace std::chrono;

void Remote::pressButton()
{
    cout << "Pressing the remote control button..." << endl;

    if (m_dogDoor.isOpen()) {
        if(m_timerId) {
            killTimer(m_timerId);
            m_timerId = 0;
        }
        m_dogDoor.close();
    }
    else {
        m_dogDoor.open();
        m_timerId = startTimer(5s);
    }
}

void Remote::timerEvent(QTimerEvent *event)
{
    cout << "Timer " << event->timerId() << " has expired" << endl;
    killTimer(event->timerId());
    m_timerId = 0;
    m_dogDoor.close();
}
