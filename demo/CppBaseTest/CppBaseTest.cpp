#include <iostream>
#include "common.hpp"

int main()
{
	int ret = test_optional_member_functions();
	if (ret == 0) std::cout << "========== test success ==========\n";
	else std::cerr << "########## test fail ##########\n";

	return 0;
}
