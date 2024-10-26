#ifndef SMART_HOME_H
#define SMART_HOME_H

#include "main_window.h"

class SmartHome {
public:
    SmartHome();
    ~SmartHome();

    // Start Eventloop here
    void run();

private:
    // Handle Callbacks here
    void on_update_current_datetime();

private:
    // Store AppWindow handle in the class
    slint::ComponentHandle<AppWindow> app;
};

#endif // SMART_HOME_H