#ifndef BRACKETS_STRING_VALIDATOR_HPP
#define BRACKETS_STRING_VALIDATOR_HPP

#include <string>
#include <vector>

#include "bracket.hpp"

class Brackets_string_validator 
{
private:
	std::vector<Bracket> m_possible_brackets;

public:
	void add_possible_bracket(const Bracket&);

	bool is_valid_str(std::string);

	Brackets_string_validator() = default;
};

#endif //BRACKETS_STRING_VALIDATOR_HPP