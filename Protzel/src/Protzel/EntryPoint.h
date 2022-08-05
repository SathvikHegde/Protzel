#pragma once

#include "Log.h"

extern Protzel::Application*  Protzel::CreateApplication();

int main(int argc, char* argv[])
{
    Protzel::Log::Init();
    PTZ_CORE_INFO("Initialized!");
    PTZ_INFO("Namaskar!");
    auto app = Protzel::CreateApplication();
    app->run();
    delete app;
}