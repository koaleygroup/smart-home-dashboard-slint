#include "smarthome.h"

// SmartHome Constructor & Destructor
SmartHome::SmartHome() : app(AppWindow::create()) {}
SmartHome::~SmartHome() {}

void SmartHome::run() {
    app->run();
}