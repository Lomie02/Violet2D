#pragma once
#include <iostream>
#include <vector>
#include <glm.hpp>

#include "vPhysicsObject.h"
/*
	Violet Physics scene where all main systems start.
*/

/// <summary>
/// Violet scene where physics & collision calulations are made.
/// </summary>
class vPhysicsScene
{
public:
	vPhysicsScene();
	~vPhysicsScene();

	void RegisterVioletObject(vPhysicsObject* _actor);
	void RemoveVioletObject(vPhysicsObject* _actor);

	void VioletCollisionChecker();

	void SetWorldGravity(glm::vec2 _gravity);
	glm::vec2 GetWorldGravity() { return m_vGravity; }


	void UpdateVioletPhysics(const float _fixedDelta);
	void SetTimeStep(const float _timestep) {m_vTimeStep = _timestep;}

protected:
	glm::vec2 m_vGravity;
	float m_vTimeStep;
	std::vector<vPhysicsObject*> m_VioletActors;
};

