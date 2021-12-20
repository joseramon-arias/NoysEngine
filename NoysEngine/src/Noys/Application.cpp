#include "Application.h"
#include "Noys/Events/ApplicationEvent.h"
#include "Noys/Log.h"

namespace Noys
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		NY_TRACE(e);

		while (true);
	}
}