#include "smarthome.h"
#include <cctype>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <string>

// SmartHome Constructor & Destructor
SmartHome::SmartHome() : app(AppWindow::create()) {
    // Bind the callbacks to private slots
    app->on_update_current_datetime([&](){ this->on_update_current_datetime(); });
}
SmartHome::~SmartHome() {}

void SmartHome::run() {
    app->run();
}

void SmartHome::on_update_current_datetime() {
    // Get current date & time
    std::time_t ts = std::time(nullptr);
    // std::cout << std::ctime(&ts);

    char date_fmt[50], time_fmt[10], time_ap[8], dow_fmt[8];

    // Format the time to YYYY-MM-dd
    std::strftime(date_fmt, 50, "%F", std::localtime(&ts));

    // Format the current time to HH:MM
    std::strftime(time_fmt, 10, "%R", std::localtime(&ts));

    // Get AM/PM from the current localtime
    std::strftime(time_ap, 8, "%p", std::localtime(&ts));
    
    // Get day of week ie Mon, Tue, Wed, etc...
    std::strftime(dow_fmt, 8, "%a", std::localtime(&ts));

    std::string dow_str(dow_fmt);
    std::transform(dow_str.begin(), dow_str.end(), dow_str.begin(), ::toupper);

    // Update UI with the new values
    app->set_date(date_fmt);
    app->set_dayOfWeek(dow_str.c_str());
    app->set_time(time_fmt);
    app->set_is_am(false);
}