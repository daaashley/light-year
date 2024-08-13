#pragma once 
#include "framework/Core.h"

namespace ly
{
    class Actor;
    class Application;
    class World
    {
        public:
            World(Application* owningApp);

            void BeginPlayInternal();
            void TickInternal(float deltaTime);

            virtual ~World(); // You need a virtual destructor whenever you inherit

            template<typename ActorType>
            weak<ActorType> SpawnActor();
            
            
        private:
            void BeginPlay();
            void Tick(float deltaTime);
            Application* mOwningApp;
            bool mBeganPlay;

            List<shared<Actor>> mActors;

            List<shared<Actor>> mPendingActors;
    };

    template<typename ActorType>
    inline weak<ActorType> World::SpawnActor()
    {
        shared<ActorType> newActor{new ActorType{this}};
        mPendingActors.push_back(newActor);
        return newActor;
    }
}