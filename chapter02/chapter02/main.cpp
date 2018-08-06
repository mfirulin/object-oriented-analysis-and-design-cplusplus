#include <iostream>
#include <QCoreApplication>
#include <QThread>
#include "remote.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Remote remote;
    cout << "*** TC 1. Without delay ***" << endl;
    cout << "Fido barks to go outside..." << endl;
    remote.pressButton();
    cout << "Fido has gone outside..." << endl;
    cout << "Fido has all done..." << endl;
    cout << "Fido's back inside..." << endl;
    remote.pressButton();
    cout << endl;

    cout << "*** TC 2. With delay ***" << endl;
    cout << "Fido barks to go outside..." << endl;
    remote.pressButton();
    cout << "Fido has gone outside..." << endl;
    cout << "Fido has all done..." << endl;
    cout << "... but he's stuck outside" << endl;

    // TODO: Put correct thread sleep here
    QThread::currentThread()->sleep(10);

    cout << "Fido starts barking..." << endl;
    cout << "... so Gina grabs the remote control" << endl;
    remote.pressButton();
    cout << "Fido's back inside..." << endl;
    remote.pressButton();

    return a.exec();
}
