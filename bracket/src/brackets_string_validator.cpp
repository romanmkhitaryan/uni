#include "brackets_string_validator.hpp"

#include <stack>

void Brackets_string_validator::
add_possible_bracket(const Bracket& b)
{
	m_possible_brackets.push_back(b);
}

bool Brackets_string_validator::
is_valid_str(std::string str)
{
	std::stack<char> st;

	for(auto &c: str)
	{
		bool valid = false;

		for(auto &b: m_possible_brackets)
		{
			if(c == b.open_symbol)
			{
				st.push(c);
				valid = true;
				break;
			} else if(c == b.close_symbol)
			{
				if(st.top() == b.open_symbol)
				{
					valid = true;
					st.pop();
					break;
				} else 
				{
					break;
				}
			}
		}
		
		if(!valid)
		{
			return false;
		}
	}
    
	return st.empty();
}