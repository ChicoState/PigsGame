#include <string>
#ifndef COMPUTER_H
#define COMPUTER_H


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