#pragma once

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



