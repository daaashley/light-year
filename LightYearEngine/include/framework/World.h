#pragma once 

namespace ly
{
    class Application;
    class World
    {
        public:
            World(Application* owningApp);

            void BeginPlayInternal();
            void TickInternal(float deltaTime);

            virtual ~World(); // You need a virtual destructor whenever you inherit
            
        private:
            void BeginPlay();
            void Tick(float deltaTime);
            Application* mOwningApp;
            bool mBeganPlay;
    };
}