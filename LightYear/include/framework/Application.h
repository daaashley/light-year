#pragma once
#include <SFML/Graphics.hpp>

namespace ly
{
    class Application
    {
    public:
        Application();
        void Run();

    private:
        virtual void Render();
        virtual void Tick(float deltaTime);
        void TickInternal(float deltaTime);
        void RenderInternal();
        sf::RenderWindow mWindow; // class var 'm'Window
        float mTargetFrameRate;
        sf::Clock mTickClock;
    };
}