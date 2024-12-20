#pragma once
#include <iostream>
#include <glm.hpp>

/*
	Violet Physics scene where all main systems start.


*/

/// <summary>
/// Violet scene where physics & collision calulations are made.
/// </summary>
class vPhysicsScene 
{
public:
	vPhysicsScene() { m_vGravity = glm::vec2(0, -1); }
	vPhysicsScene(glm::vec2 _gravity) { m_vGravity = _gravity; }
	~vPhysicsScene();

	void StartUpViolet();
	void UpdateVioletPhysics(float _fixedDelta);

private:
	glm::vec2 m_vGravity;
};

