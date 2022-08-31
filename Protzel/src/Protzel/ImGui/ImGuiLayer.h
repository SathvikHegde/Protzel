#pragma once

#include "Protzel/Layer.h"

#include "Protzel/Events/ApplicationEvent.h"
#include "Protzel/Events/MouseEvent.h"
#include "Protzel/Events/KeyEvent.h"

namespace Protzel
{
    class PROTZEL_API ImGuiLayer : public Layer
    {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        virtual void OnAttach() override;
        virtual void OnDetach() override;
        virtual void OnImGuiRender() override;

        void Begin();
        void End();

    private:
        float m_Time = 0.0f;
    };
}
