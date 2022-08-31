#include <Protzel.h>

#include <imgui.h>

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

    virtual void OnImGuiRender() override
    {
        ImGui::Begin("Test from client");
        ImGui::Text("Hellow World from client!");
        ImGui::End();
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
    }
    ~Sandbox()
    {

    }
};

Protzel::Application* Protzel::CreateApplication()
{
    return new Sandbox();
}
