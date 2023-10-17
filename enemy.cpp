#include "enemy.h"
#include <iostream>

Enemy::Enemy(int damage)
{
	m_pDamage = new int(damage);
};

Enemy::~Enemy()
{
	std::cout << "In Enemy destructor, deleting m_pDamage.\n";
	delete m_pDamage;
	m_pDamage = 0;
}

void Enemy::Attack() const
{
	std::cout << "An enemy attacks and inflicts " << m_pDamage << " damage points.";
}