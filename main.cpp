#include <iostream>
#include <string>
int main()
{
	std::string sequence = ".,-~=+$#@";
	for (int i = 0; i < sequence.length(); i++)
	{
		std::cout << sequence[i] << std::endl;
	}	
	return 0;
}
