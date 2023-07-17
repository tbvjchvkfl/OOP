#pragma once

class Sword
{
	int mPrice;
	int mAttack;
};

class Player
{

	int mHealth{};
	int mAttack{};

public:
	void Walk();
	void Run();
	void Jump();
	void GetAttack()
	{
		int factor = 1;
		return mAttack * factor;
	}
};

