#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Noys
{
	class NOYS_API Log
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

// Core log macros
#define NY_CORE_TRACE(...) ::Noys::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NY_CORE_INFO(...)  ::Noys::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NY_CORE_WARN(...)  ::Noys::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NY_CORE_ERROR(...) ::Noys::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NY_CORE_FATAL(...) ::Noys::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define NY_TRACE(...) ::Noys::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NY_INFO(...)  ::Noys::Log::GetClientLogger()->info(__VA_ARGS__)
#define NY_WARN(...)  ::Noys::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NY_ERROR(...) ::Noys::Log::GetClientLogger()->error(__VA_ARGS__)
#define NY_FATAL(...) ::Noys::Log::GetClientLogger()->fatal(__VA_ARGS__)