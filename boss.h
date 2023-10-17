#pragma once
#include "enemy.h"
class Boss : public Enemy
{
protected:
	int* m_pMultipleir;
public:
	Boss(int multipleir = 3);
	virtual ~Boss();
	void virtual Attack() const;
};