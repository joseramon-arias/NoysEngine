#include "Noys.h"

class Sandbox : public Noys::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Noys::Application* Noys::CreateApplication()
{
	return new Sandbox();
}