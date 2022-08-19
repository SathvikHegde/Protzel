#include <Protzel.h>

//TODO: Fix MouseKeyCodes!

class TestLayer : public Protzel::Layer
{
public:
    TestLayer() : Layer("Test") {}

    void OnUpdate() override
    {
        //PTZ_INFO("TestLayer::Update");
        if(Protzel::Input::IsKeyPressed(PTZ_KEY_SPACE))
        {
            PTZ_TRACE("Space is pressed!");
        }
    }

    void OnEvent(Protzel::Event& event) override
    {
        //PTZ_TRACE("{0}", event);
    }
};

class Sandbox : public Protzel::Application
{
public:
    Sandbox()
    {
        PushLayer(new TestLayer());
        PushOverlay(new Protzel::ImGuiLayer);
    }
    ~Sandbox()
    {

    }
};

Protzel::Application* Protzel::CreateApplication()
{
    return new Sandbox();
}
