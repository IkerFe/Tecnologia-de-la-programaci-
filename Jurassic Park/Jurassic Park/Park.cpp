#include "Park.h"

float Park::CalculateDistance(const Position2D& pos1, const Position2D& pos2) const
{
	float distance = sqrt(pow(pos1.x - pos2.x, 2)) + pow(pos1.y - pos2.y, 2);
	return distance;
}

std::vector<Scientist> Park::GetScientisInDanger() const
{
	std::vector<Scientist> scientistsInDanger;
	for (int i = 0; i < m_scientist.size(); ++i) 
	{
		for (const Dynosaur& dynosaur : m_dynosaurs)
		{
			const Position2D scientistPos = m_scientist[i].GetPos();
			const Position2D dynosaurPos = dynosaur.GetPos();

			float distance = CalculateDistance(scientistPos,dynosaurPos);
			if (distance < RISK_RANGE_DISTANCE)
			{
				scientistsInDanger.push_back(m_scientist[i]);
			}
		}
	}
}
