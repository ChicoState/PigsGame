#include <stdlib.h> 

Class Cpu
{
	private:
		int score;
		int score_total;
		int turns;
		
	public: 
		void roll(void)
		{
			outcome=rand() % 6 + 1;
			if(outcome==1)
			{
				score=0;
				turns++;
			}
			else
			{
				score+=outcome;
				turns++;
			}
		
		}
		void hold(void)
		{
			score_total+=score;
		}

}
