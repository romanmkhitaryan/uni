#ifndef BRACKET_HPP

struct Bracket 
{
	char open_symbol;
	char close_symbol;

	Bracket(char o, char c)
		: open_symbol(o)
		, close_symbol(c)
	{
	}
};

#define BRACKET_HPP
#endif //BRACKET_HPP