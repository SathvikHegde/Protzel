#include <Protzel.h>

class Sandbox : public Protzel::Application
{
public:
    Sandbox()
    {

    }
    ~Sandbox()
    {

    }
};

Protzel::Application* Protzel::CreateApplication()
{
    return new Sandbox();
}
