#include <iostream>

#include "brackets_string_validator.hpp"

int main()
{
	Brackets_string_validator bv;

	bv.add_possible_bracket(Bracket('{', '}'));
	bv.add_possible_bracket(Bracket('[', ']'));
	bv.add_possible_bracket(Bracket('(', ')'));

	std::string str;

	std::cout << "Enter bracket-string (available brackets -- '()', '{}', '[]')" << std::endl;

	std::cin >> str;


	std::cout << (bv.is_valid_str(str) ? "Is valid" : "Not valid !!") << std::endl;

	return 0;
}