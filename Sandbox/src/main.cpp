#include <Protzel.h>

//TODO: Add MDd build option to debug and MD to others

class TestLayer : public Protzel::Layer
{
public:
    TestLayer() : Layer("Test") {}

    void OnUpdate() override
    {
        PTZ_INFO("TestLayer::Update");
    }

    void OnEvent(Protzel::Event& event) override
    {
        PTZ_TRACE("{0}", event);
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
