#include <string>
#ifndef COMPUTER_H
#define COMPUTER_H

//This class controls computer players decision making process.
class Computer
{
	private:
		int total;
		int current;
		bool continueRolling(int currentTotal);

	public:
		Computer();
		std::string decision(int rollAmount);
		int getCurrent();
		int getTotal();
};

#endif