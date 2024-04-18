#pragma once
#include <vector>
#include "Scientist.h"
#include "Dynosaur.h"
#include "Constants.h"


class Park
{
private:
	// std::vector --> Dynosaur y de Scientist
	std::vector<Scientist> m_scientist;
	std::vector<Dynosaur> m_dynosaurs;

	float CalculateDistance(const Position2D &pos1, const Position2D& pos2) const;
public:
	//TO-DO
	//Have access Dynosaur and Scientist position
	//Dynosaur: Acces to m_isDangerous
	//Scientist: Access to m_isDead
	std::vector<Scientist> GetScientisInDanger() const;
};

