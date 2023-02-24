
#include <Toga.h>

class Sandbox : public Toga::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
private:

};

Toga::Application* Toga::CreateApplication()
{
	return new Sandbox();
}