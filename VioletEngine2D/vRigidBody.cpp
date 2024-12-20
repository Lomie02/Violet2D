#include "pch.h"
#include "vRigidBody.h"

vRigidBody::vRigidBody(vColliderType _coliderId, glm::vec2 _position, glm::vec2 _velocity, float _orientation, float _mass, bool _staticObject) : vPhysicsObject(_coliderId)
{
	m_vObjectMass = _mass;
	m_vObjectOrientation = _orientation;
	m_vObjectPosition = _position;
	m_vStaticObject = _staticObject;
}

vRigidBody::~vRigidBody()
{
}

void vRigidBody::FixedVioletUpdate(glm::vec2 _gravity, float _timestep)
{
	if (m_vStaticObject) return;

	m_vObjectPosition += m_vObjectVelocity * _timestep;
	ApplyForceOnObject(_gravity * m_vObjectMass * _timestep);
}

void vRigidBody::ApplyForceOnObject(glm::vec2 _force)
{
	m_vObjectVelocity += _force / m_vObjectMass;
}

void vRigidBody::ApplyFoceToAnotherObject(vRigidBody* _targetObject, glm::vec2 _force)
{
	_targetObject->m_vObjectVelocity += _force;
}

void vRigidBody::ResolveVioletCollider(vRigidBody* _targetObject)
{
	glm::vec2 Normal = glm::normalize(_targetObject->GetObjectPosition() - m_vObjectPosition);
	glm::vec2 releativeVelocity = _targetObject->GetObjectVelocity() = m_vObjectVelocity;

	float elasticity = 1;
	float j = glm::dot(-(1 + elasticity) * (releativeVelocity), Normal) / ((1 / m_vObjectMass) + (1 / _targetObject->GetObjectMass()));

	glm::vec2 ObjectForce = Normal * j;

	ApplyFoceToAnotherObject(_targetObject, -ObjectForce);

}
