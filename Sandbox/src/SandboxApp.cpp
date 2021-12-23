#include "Noys.h"

class ExampleLayer : public Noys::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		NY_INFO("ExampleLayer::Update");
	}

	void OnEvent(Noys::Event& event) override
	{
		NY_TRACE("{0}", event);
	}
};

class Sandbox : public Noys::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

Noys::Application* Noys::CreateApplication()
{
	return new Sandbox();
}