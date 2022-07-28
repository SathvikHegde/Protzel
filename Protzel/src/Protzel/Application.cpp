#include "ptzpch.h"

#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Protzel
{
    Application::Application()
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
    }
    Application::~Application()
    {

    }

    void Application::run()
    {
        while(m_Running)
        {
            m_Window->OnUpdate();
        }
        while(true);
    }
}
