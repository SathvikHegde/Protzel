#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Protzel
{
    Application::Application()
    {

    }
    Application::~Application()
    {

    }

    void Application::run()
    {
        WindowResizeEvent e(1280, 720);
        if(e.IsInCategory(EventCategoryApplication))
        {
            PTZ_TRACE(e);
        }
        if(e.IsInCategory(EventCategoryInput))
        {
            PTZ_TRACE(e);
        }
        while(true);
    }
}
