#pragma once
#include <VioletPhysicsGeneral.h>

class Application
{
public:
	Application();
	~Application();
	void Start();
	void Update();
	void Exit();

	bool GetAppState() { return m_IsRunning; }
private:

	vPhysicsScene* m_VioletScene;
	bool m_IsRunning;
};

