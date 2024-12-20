#include "Application.h"

Application::Application()
{
	m_IsRunning = true;
}

Application::~Application() // Delete pointers
{
	delete m_VioletScene;
	m_VioletScene = nullptr;
}

void Application::Start()
{
}

void Application::Update()
{
}

void Application::Exit()
{
	m_IsRunning = false;
}
