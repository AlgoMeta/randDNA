#include <random>


string randDNA(int seed, string bases, int n)
{
	string DNA = "";
	int basesLength = bases.length();
	std::mt19937 engine(seed);
	std::uniform_int_distribution<> uniDis(0, (basesLength - 1));

	for (int x = 0; x < n; x++)
	{
		DNA = DNA + bases.at(uniDis(eng2));
	}
	
	return DNA;
}