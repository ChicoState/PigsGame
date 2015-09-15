#include "CpuPlayer.h"

bool CpuPlayer::determine_hold(int prev_roll, int cur_score, int roll_num)
{
 if (!cur_score || (prev_roll < 4 && cur_score < 6))
 {
 	IO.command(COM_ROLL);
 }
 else if ((cur_score > 9 && roll_num > 3) || roll_num > 4)
 {
 	IO.command(COM_HOLD);
 }
}

bool turn()
{
    return true;
}
