#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>
#include "framework/Application.h"

int main()
{
    // Our application is dynamic and stack has limited space so we init Application on the heap
    std::unique_ptr<ly::Application> app{new ly::Application()}; // Could also use make_unique
    app->Run();
}