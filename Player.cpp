#include "Player.h"

int Player::RollDie(Dice *Die)
{
	int tmp = Die->RollDice();

	if (tmp == 1)
	{
		TempScore = 0;
		Hold = true;
	}
	else
	{
		TempScore += tmp;
	}
}

bool Player::Get_Hold()
{
	return Hold;
}

void Player::Set_Hold(bool toHold)
{
	Hold = toHold;
}