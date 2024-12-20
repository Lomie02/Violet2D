#pragma once
#include <glm.hpp>

/// <summary>
/// An Object affected by Violets Physics.
/// </summary>
class vPhysicsObject
{
public:
	vPhysicsObject(); //default constructor

	/// <summary>
	/// Set the physics objects position
	/// </summary>
	/// <param name="_position"></param>
	void SetObjectPosition(glm::vec2 _position);
	/// <summary>
	/// Set the mass of the physics object.
	/// </summary>
	/// <param name="_mass"></param>
	void SetObjectMass(float _mass);
	/// <summary>
	/// Get the objects current position
	/// </summary>
	/// <returns> Vec2 </returns>
	glm::vec2 GetObjectsPosition() { return m_vPosition; }
	/// <summary>
	/// Get objects current mass.
	/// </summary>
	/// <returns> float </returns>
	float GetObjectMass() { return m_vMass; }

private:

	glm::vec2 m_vPosition; // Position of the physics object
	float m_vMass; // Mass of the object.
};

