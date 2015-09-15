#include "AI.h"

int AI::RollDie(Dice *Die)
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
		if (OverallScore + TempScore >= 100)
		{
			Set_Hold(true);
		}
		else if (TempScore > 12)
		{
			Set_Hold(true);
		}
	}

	return RolledNumber;
}