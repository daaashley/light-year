#pragma once
#include <SFML/Graphics.hpp>
#include "framework/Core.h"

namespace ly
{
    class World;
    class Application
    {
    public:
        Application();
        void Run();

        template<typename WorldType>
        weak<WorldType> LoadWorld();
        
    private:
        virtual void Render();
        virtual void Tick(float deltaTime);
        void TickInternal(float deltaTime);
        void RenderInternal();
        sf::RenderWindow mWindow; // class var 'm'Window
        float mTargetFrameRate;
        sf::Clock mTickClock;

        shared<World> currentWorld;

    };

    template<typename WorldType>
    weak<WorldType> Application::LoadWorld()
    {
        shared<WorldType> newWorld{new WorldType{this}}; // constructor req's owning app be arg so we use this
        currentWorld = newWorld;
        return newWorld;
    }
}