#include "framework/Application.h"
#include <framework/Core.h>
#include <framework/World.h>

namespace ly
{
    Application::Application()
        : mWindow{sf::VideoMode(1024, 1440), "Light Year"},
          mTargetFrameRate{60.f},
          mTickClock{},
          currentWorld{nullptr}
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
                TickInternal(targetDeltaTime);
                RenderInternal();
            }
        }
    }

    void Application::TickInternal(float deltaTime)
    {
        Tick(deltaTime);
        if(currentWorld) {
            currentWorld->BeginPlayInternal();
            currentWorld->TickInternal(deltaTime);
        }
    }

    void Application::Tick(float deltaTime)
    {
        LOG("ticking at framerate: %f",  1.f / deltaTime);
    }

    void Application::RenderInternal()
    {
        mWindow.clear();
        Render();
        mWindow.display();
    }

    void Application::Render()
    {
        sf::CircleShape rect{100};
        rect.setFillColor(sf::Color::Green);
        rect.setOrigin(50, 50);
        rect.setPosition(mWindow.getSize().x / 2.f, mWindow.getSize().y / 2.f);
        mWindow.draw(rect);
    }
}