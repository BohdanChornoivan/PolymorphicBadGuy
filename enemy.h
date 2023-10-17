#pragma once
class Enemy
{
protected:
	int* m_pDamage;
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;
};

