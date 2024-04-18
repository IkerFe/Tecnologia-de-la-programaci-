#pragma once

#include "Util.h"

class Scientist
{
private:
	Position2D m_pos;
	bool m_isDead = false;
public:
	Scientist(const Position2D pos);

	Position2D GetPos() const;
};

