#pragma once

#include "Events/Event.h"
#include "Window.h"

namespace Protzel
{
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void run();
    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    Application* CreateApplication();
}



