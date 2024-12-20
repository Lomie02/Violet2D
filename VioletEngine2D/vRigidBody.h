#pragma once
#include "vPhysicsObject.h"
#include <glm.hpp>
#include "vPhysicsScene.h"

class vRigidBody : public vPhysicsObject
{
public:
	vRigidBody(vColliderType _coliderId, glm::vec2 _position,
		glm::vec2 _velocity, float _orientation, float _mass, bool _staticObject);
	~vRigidBody();

	virtual void FixedVioletUpdate(glm::vec2 _gravity, float _timestep);
	void ApplyForceOnObject(glm::vec2 _force);

protected:
	glm::vec2 m_vObjectPosition;
	glm::vec2 m_vObjectVelocity;

	float m_vObjectMass;
	float m_vObjectOrientation;
	bool m_vStaticObject;
};

