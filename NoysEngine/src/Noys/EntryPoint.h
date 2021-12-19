#pragma once

#ifdef NY_PLATFORM_WINDOWS

extern Noys::Application* Noys::CreateApplication();

int main(int argc, char** argv)
{
	Noys::Log::Init();
	NY_CORE_WARN("Initialized Log!");
	int a = 5;
	NY_INFO("Hello! Var={0}", a);

	auto app = Noys::CreateApplication();
	app->Run();

	delete app;
}

#endif