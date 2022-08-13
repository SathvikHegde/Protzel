#include "ImGuiLayer.h"

#include "ptzpch.h"

namespace Protzel
{
    ImGuiLayer::ImGuiLayer() : Layer("ImGuiLayer") {}

    ImGuiLayer::~ImGuiLayer()
    {

    }

    void ImGuiLayer::OnAttach()
    {
        Layer::OnAttach();
    }

    void ImGuiLayer::OnDetach()
    {
        Layer::OnDetach();
    }

    void ImGuiLayer::OnUpdate()
    {
        Layer::OnUpdate();
    }

    void ImGuiLayer::OnEvent(Event &event)
    {
        Layer::OnEvent(event);
    }

}
