#include "pch.h"
#include "vPhysicsObject.h"

vPhysicsObject::vPhysicsObject()
{
	m_vPosition = glm::vec2(0, 0);
	m_vMass = 0.5f;
}

void vPhysicsObject::SetObjectPosition(glm::vec2 _position)
{
}

void vPhysicsObject::SetObjectMass(float _mass)
{
}
