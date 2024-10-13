#ifndef SMART_HOME_H
#define SMART_HOME_H

#include "main_window.h"

class SmartHome {
public:
    SmartHome();
    ~SmartHome();

    // Start Eventloop here
    void run();

    // Handle Callbacks here

private:
    // Store AppWindow handle in the class
    slint::ComponentHandle<AppWindow> app;
};

#endif // SMART_HOME_H