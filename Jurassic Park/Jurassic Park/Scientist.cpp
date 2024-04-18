#include "Scientist.h"

Scientist::Scientist(const Position2D pos)
{
	m_pos = pos;

};
Position2D Scientist:: GetPos() const
{
	return m_pos;
}
