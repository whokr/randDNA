#include <iostream>
#include <random>
#include <string>

using namespace std;
	string randDNA(int seed, string bases, int length)
	{
		string answer = "";
		mt19937 eng1 (seed);
		uniform_int_distribution<int> un(0, bases.size()-1);
		
		if (bases.size() == 0)
		{
				answer = "";
				return answer;
		}
		
		for(int i=0; i< length; i++)
		{
				int ans = un(eng1);
				answer += bases[ans];
		}
				return answer;
	}
		
		
		
