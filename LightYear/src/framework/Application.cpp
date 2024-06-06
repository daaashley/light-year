#include "framework/Application.h"

namespace ly
{
    Application::Application()
        : mWindow{sf::VideoMode(1024, 1440), "Light Year"}
    {
    }
}