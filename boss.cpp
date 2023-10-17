#include "boss.h"
#include <iostream>

Boss::Boss(int multiplier)
{
	m_pMultipleir = new int(multiplier);
};

Boss::~Boss()
{
	std::cout << "In Boss destructor, deleting m_pMultiplier.\n";
	delete m_pMultipleir;
	m_pMultipleir = 0;
}

void Boss::Attack() const
{
	std::cout << "A boss attacks and inflicts " << ((*m_pDamage) * (*m_pMultipleir)) << " damage points.";
}