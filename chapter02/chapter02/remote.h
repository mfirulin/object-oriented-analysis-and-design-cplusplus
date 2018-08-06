#ifndef REMOTE_H
#define REMOTE_H

#include <QObject>
#include <QBasicTimer>
#include "dogdoor.h"

class Remote : public QObject
{
   Q_OBJECT
public:
    void pressButton();

private:
    DogDoor m_dogDoor;
    QBasicTimer m_timer;
    void timerEvent(QTimerEvent *);
};

#endif // REMOTE_H
