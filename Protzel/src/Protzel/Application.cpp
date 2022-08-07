#include "Application.h"

#include "ptzpch.h"

#include <GLFW/glfw3.h>

namespace Protzel
{
#define BIND_EVENT(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application::Application()
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT(OnEvent));
    }
    Application::~Application()
    {

    }

    void Application::OnEvent(Event &e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT(OnWindowClose));

        PTZ_CORE_TRACE("{0}", e);
    }

    void Application::run()
    {
        while(m_Running)
        {
            glClearColor(1, 0, 1, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
        }
    }

    bool Application::OnWindowClose(WindowCloseEvent& e)
    {
        m_Running = false;
        return true;
    }
}
