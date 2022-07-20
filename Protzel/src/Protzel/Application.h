#pragma once

#include "Events/Event.h"

namespace Protzel
{
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void run();
    };

    Application* CreateApplication();
}



