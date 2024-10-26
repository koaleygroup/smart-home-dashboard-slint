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

    // Handles upadating date components in the User interface
    // This handle is called every '1s' from the Timer triggered callback
    // within the DateCard on the dashboard.
    void on_update_current_datetime();

private:
    // Store AppWindow handle in the class
    slint::ComponentHandle<AppWindow> app;
};

#endif // SMART_HOME_H