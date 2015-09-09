#include <stdlib.h> 

class Cpu
{
	private:
		int score;
		int score_total;
		int turns;
		bool holding;

	public: 
		Cpu()
		{
			
		}

		~Cpu()
		{

		}
		int score_total(void)
		{
			return score_total;
		}

		void roll(void)
		{
			holding=false;
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
			holding=true;
		}

}
