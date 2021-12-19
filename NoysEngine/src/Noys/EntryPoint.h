#pragma once

#ifdef NY_PLATFORM_WINDOWS

extern Noys::Application* Noys::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Noys::CreateApplication();
	app->Run();

	delete app;
}

#endif