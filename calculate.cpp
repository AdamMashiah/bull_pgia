#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <sstream>

#include "calculate.hpp"

namespace bullpgia{

string calculateBullAndPgia(string choice, string guess)
{
    int bull=0;
		int pgia=0;
		string ans;
    stringstream s1,s2;
	if(choice == ""||guess == "")
	{
		throw std::invalid_argument( "The string is empty" );
	}
	
	for (int i = 0; i < choice.length(); i++)
	{
		for (int j = 0; j < guess.length(); j++)
		{
			if (i==j)
			{
				if (guess[i]==choice[j])
				{
				  bull++;
				}
			}
			else
			{
				if (guess[i]==choice[j])
				{
						pgia++;
				}
			}	
		}
	}
	
	
	s1<<bull;
	s2<<pgia;
	ans=(s1.str()+","+s2.str());
	//out_string2=s2.str();

        return ans;
 }
}
