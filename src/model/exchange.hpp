#pragma once

#include <string>

namespace beerja{

class exchange{
public:
	std::string id;
	std::string name;
	int timezone_shift_minutes;
};

}
