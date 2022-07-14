#pragma once

#include <memory>
#include <spdlog/spdlog.h>

namespace Protzel
{
    class Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

#define PTZ_CORE_TRACE(...) ::Protzel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PTZ_CORE_INFO(...) ::Protzel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PTZ_CORE_WARN(...) ::Protzel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PTZ_CORE_ERROR(...) ::Protzel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PTZ_CORE_FATAL(...) ::Protzel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define PTZ_TRACE(...) ::Protzel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PTZ_INFO(...) ::Protzel::Log::GetClientLogger()->info(__VA_ARGS__)
#define PTZ_WARN(...) ::Protzel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PTZ_ERROR(...) ::Protzel::Log::GetClientLogger()->error(__VA_ARGS__)
#define PTZ_FATAL(...) ::Protzel::Log::GetClientLogger()->fatal(__VA_ARGS__)




