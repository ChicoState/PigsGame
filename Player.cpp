#include "Player.h"

int Player::RollDie(Dice *Die)
{
	int RolledNumber = Die->RollDice();

	if (RolledNumber == 1)
	{
		TempScore = 0;
		Hold = true;
	}
	else
	{
		TempScore += RolledNumber;
	}
	return RolledNumber;
}

bool Player::Get_Hold()
{
	return Hold;
}

void Player::Set_Hold(bool toHold)
{
	if (toHold)
	{
		OverallScore += TempScore;
		TempScore = 0;
		Hold = toHold;
	}
	else
	{
		Hold = false;
	}
}

int Player::Get_Score()
{
	return OverallScore;
}

int Player::Get_TempScore()
{
	return TempScore;
}