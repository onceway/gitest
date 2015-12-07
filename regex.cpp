#include <regex>
#include <iostream>

using namespace std;

int main()
{
        if (std::regex_match ("subject", std::regex("(sub)(.*)") ))
                std::cout << "string literal matched\n";
	return 0;
}
