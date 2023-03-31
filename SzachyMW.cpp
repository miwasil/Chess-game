#include <iostream>
using namespace std;

int arg[8][8];

int Absolute(int value)
{
	if (value >= 0)
		return value;
	else
		return ((-1) * value);
}

int Pawn(int array[8][8], int firstx, int firsty, int lastx, int lasty)
{
	if (firsty != 7)			//the end of board
	{
		if (lastx  == firstx && lasty == (firsty + 1))
		{
			if (array[lastx][lasty] == 0)
			{
				array[lastx][lasty] = 1;
				array[firstx][firsty] = 0;
				return 0;
			}
			else
			{
				return 2;		//forbidden move
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{

		if (lastx == firstx && lasty == 1)
		{
			if (array[lastx][lasty] == 0)
			{
				array[lastx][lasty] = 1;
				array[firstx][firsty] = 0;
				return 0;
			}
			else
			{
				return 2;		//forbidden move
			}
		}
		else
		{
			return 1;
		}
	}
}


int King(int array[8][8], int firstx, int firsty, int lastx, int lasty)
{
	int condition1 = Absolute(lastx - firstx);
	int condition2 = Absolute(lasty - firsty);

	if (condition1 <= 1 && condition2 <= 1)			//move
	{
		if (condition1 == 0 && condition2 == 0)		//don't move
		{
			return 1;
		}
		else
		{
			if (array[lastx][lasty] == 0)
			{
				array[lastx][lasty] = 4;
				array[firstx][firsty] = 0;
				return 0;
			}
			else
			{
				return 2;
			}
		}
	}
	else
	{
		return 1;
	}
}


//TRZEBA WYSWIETLAC ODWROTNIE W WYNIKU TABLICE


