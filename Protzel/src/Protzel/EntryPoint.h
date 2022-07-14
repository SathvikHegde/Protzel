#pragma once

extern Protzel::Application*  Protzel::CreateApplication();

int main(int argc, char* argv[])
{
    auto app = Protzel::CreateApplication();
    app->run();
    delete app;
}