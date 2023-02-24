#pragma once
#include "Core.h"

namespace Toga {

	class TOGA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	private:

	};

	// To Be defined in CLIENT
	Application* CreateApplication();
}


