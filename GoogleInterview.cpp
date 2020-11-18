#include <iostream>
#include <cstring>
#include <string>

void solve(std::string text)
{
	bool occured[0x100];
	memset(occured, false, sizeof(occured));

	std::string ans = "";
	for (auto c : text)
	{
		if (!occured[c]) occured[c] = true;
		else
		{
			ans = c;
			break;
		}
	}
	std::cout << ((ans != "") ? ans : "NULL") << std::endl;
}