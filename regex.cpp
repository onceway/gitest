#include <regex>
#include <iostream>

using namespace std;

int main()
{
	/* git test file */
        if (std::regex_match ("subject", std::regex("(sub)(.*)") )) {
                std::cout << "string literal matched\n";
		cout << "ok" << endl;
	}
	return 0;
}
