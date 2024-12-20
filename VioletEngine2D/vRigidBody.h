#pragma once
#include "vPhysicsObject.h"
#include <glm.hpp>
#include "vPhysicsScene.h"

/*
	Violet Rigidbody Class.
*/

/// <summary>
/// An object affected by Violets physics simulations.
/// </summary>
class vRigidBody : public vPhysicsObject
{
public:
	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="_coliderId"></param>
	/// <param name="_position"></param>
	/// <param name="_velocity"></param>
	/// <param name="_orientation"></param>
	/// <param name="_mass"></param>
	/// <param name="_staticObject"></param>
	vRigidBody(vColliderType _coliderId, glm::vec2 _position,
		glm::vec2 _velocity, float _orientation, float _mass, bool _staticObject);
	~vRigidBody();
	/// <summary>
	/// Objects the objects movement via Violet.
	/// </summary>
	/// <param name="_gravity"></param>
	/// <param name="_timestep"></param>
	virtual void FixedVioletUpdate(glm::vec2 _gravity, float _timestep);
	/// <summary>
	/// Apply force onto body.
	/// </summary>
	/// <param name="_force"></param>
	void ApplyForceOnObject(glm::vec2 _force);
	/// <summary>
	/// Apply force onto another body.
	/// </summary>
	/// <param name="_targetObject"></param>
	/// <param name="_force"></param>
	void ApplyFoceToAnotherObject(vRigidBody* _targetObject, glm::vec2 _force);
	/// <summary>
	/// Go through & resolve object clipping
	/// </summary>
	/// <param name="_targetObject"></param>
	void ResolveVioletCollider(vRigidBody* _targetObject);
	/// <summary>
	/// Set objects velocity
	/// </summary>
	/// <param name="_velocity"></param>
	void SetVelocity(glm::vec2 _velocity) { m_vObjectVelocity = _velocity; }
	/// <summary>
	/// Sets the current position
	/// </summary>
	/// <param name="_position"></param>
	void SetPosition(glm::vec2 _position) { m_vObjectPosition = _position; }
	/// <summary>
	/// Add a position to the body.
	/// </summary>
	/// <param name="_position"></param>
	void AddPositionOnObject(glm::vec2 _position) { m_vObjectPosition += _position * 0.01f; }
	/// <summary>
	/// Get the objects velocity
	/// </summary>
	/// <returns></returns>
	glm::vec2 GetObjectVelocity() { return m_vObjectVelocity; }
	/// <summary>
	/// Get the position of object
	/// </summary>
	/// <returns>vec2</returns>
	glm::vec2 GetObjectPosition() { return m_vObjectPosition; }
	/// <summary>
	/// Get the objects mass.
	/// </summary>
	/// <returns>float</returns>
	float GetObjectMass() { return m_vObjectMass; }
	/// <summary>
	/// Get the current orientation.
	/// </summary>
	/// <returns>float</returns>
	float GetObjectOrientation() { return m_vObjectOrientation; }

protected:
	glm::vec2 m_vObjectPosition; // Objects position
	glm::vec2 m_vObjectVelocity; // Velocity of object

	float m_vObjectMass; // objects mass
	float m_vObjectOrientation; // objects orientation
	bool m_vStaticObject; // determines if the object is static or dynamic
};

