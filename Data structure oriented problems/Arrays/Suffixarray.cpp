
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

//In simple terms, a suffix array is just a sorted array of all the suffixes of a given string.
//As a data structure, it is widely used in areas such as data compression, bioinformaticsand, in general, in any area that deals with stringsand string matching problems,
//so, as you can see, it is of great importance to know efficient algorithms to construct a suffix array for a given string.


int main()
{
	std::string s;
	std::cout << "Provide a string:";
	std::cin >> s;

	std::map<std::string, int> m;
	std::vector<std::string> v;
	for (int i = 0; i < s.size(); i++)
	{
		m[s.substr(i, s.size() - i)] = i;
		v.push_back(s.substr(i, s.size() - i));
	}

	std::sort(v.begin(), v.end());

	for (std::map<std::string, int>::iterator ii = m.begin(); ii != m.end(); ++ii)
	{
			std::cout << (*ii).first << ": " << (*ii).second << std::endl;
	}
	return 0;
}

