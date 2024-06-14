#include "framework/Application.h"
#include <iostream>

namespace ly
{
    Application::Application()
        : mWindow{sf::VideoMode(1024, 1440), "Light Year"},
          mTargetFrameRate{60.f},
          mTickClock{}
    {
    }

    void Application::Run()
    {
        mTickClock.restart();
        float accumulatedTime = 0.f;
        float targetDeltaTime = 1.f / mTargetFrameRate;
        while (mWindow.isOpen())
        {
            sf::Event windowEvent;
            while (mWindow.pollEvent(windowEvent))
            {
                if (windowEvent.type == sf::Event::EventType::Closed)
                {
                    mWindow.close();
                }
            }
            // When accumulated time is large than delta time, we render a frame and reset accum time
            accumulatedTime += mTickClock.restart().asSeconds();
            while (accumulatedTime > targetDeltaTime)
            {
                accumulatedTime -= targetDeltaTime;
                Tick(targetDeltaTime);
                Render();
            }
        }
    }

    void Application::Tick(float deltaTime)
    {
        std::cout << "ticking at framerate: " << 1.f / deltaTime << std::endl;
    }

    void Application::Render()
    {
    }
}