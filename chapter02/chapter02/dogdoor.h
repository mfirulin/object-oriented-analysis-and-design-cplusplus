#ifndef DOGDOOR_H
#define DOGDOOR_H


class DogDoor
{
public:
    void open();
    void close();
    bool isOpen();

private:
    bool m_open = false;
};

#endif // DOGDOOR_H
