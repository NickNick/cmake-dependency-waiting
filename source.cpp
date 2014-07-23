#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <deque>

void f(){
	std::vector<int> x;
	std::map<int, int> y;
	std::list<int> z;
	std::string q;
	std::deque<int> p;
	std::cout << &x[0] << std::endl;
}
