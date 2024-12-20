#pragma once
#include <glm.hpp>

/// <summary>
/// An Object affected by Violets Physics.
/// </summary>

enum class vColliderType {
	PLANE = 0,
	SPHERE,
	BOX,
};

class vPhysicsObject
{
protected:
	vPhysicsObject(vColliderType _colliderId) : m_ColliderID(_colliderId) {}//default constructor

public:
	virtual void FixedVioletUpdate(glm::vec2 _gravity, float _timestep) = 0;
	virtual void ResetPosition() {};

	vColliderType m_ColliderID;
};

