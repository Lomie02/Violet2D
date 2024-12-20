#include "pch.h"
#include "vPhysicsScene.h"

vPhysicsScene::vPhysicsScene() : m_vTimeStep(0.01f), m_vGravity(glm::vec2(0,0))
{
}

vPhysicsScene::~vPhysicsScene()
{
	for (auto vObjectActor : m_VioletActors) {
		delete vObjectActor;
	}
}

void vPhysicsScene::RegisterVioletObject(vPhysicsObject* _actor)
{
	m_VioletActors.push_back(_actor);
}

void vPhysicsScene::RemoveVioletObject(vPhysicsObject* _actor)
{
	m_VioletActors.erase(std::remove(m_VioletActors.begin(), m_VioletActors.end(), _actor), m_VioletActors.end());
}

void vPhysicsScene::VioletCollisionChecker()
{
}

void vPhysicsScene::SetWorldGravity(glm::vec2 _gravity)
{
	m_vGravity = _gravity;
}

void vPhysicsScene::UpdateVioletPhysics(const float _fixedDelta)
{

}
