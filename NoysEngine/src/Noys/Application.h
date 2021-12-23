#pragma once
#include "Core.h"
#include "Noys/Events/Event.h"
#include "Noys/Window.h"
#include "Noys/LayerStack.h"
#include "Noys/Events/ApplicationEvent.h"

namespace Noys
{
	class NOYS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be define in CLIENT
	Application* CreateApplication();
}

