#pragma once
#ifdef TG_PLATFORM_WINDOWS

// Function defined elsewhere which will return our application
// CreateApplication should be defined in the client
extern Toga::Application* Toga::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Toga::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif