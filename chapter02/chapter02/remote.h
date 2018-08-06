#ifndef REMOTE_H
#define REMOTE_H

#include <QObject>
#include <QTimerEvent>
#include "dogdoor.h"

class Remote : public QObject
{
   Q_OBJECT
public:
    void pressButton();

private:
    DogDoor m_dogDoor;
    int m_timerId = 0;
    void timerEvent(QTimerEvent *event);
};

#endif // REMOTE_H
