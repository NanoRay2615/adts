#include "StackV.h"
#include <vector>
using namespace std;


int Stack::size()
{
	return data.size();
}

int Stack::top()
{
	return data[data.size()-1];
}

void Stack::push(int val)
{
	data.push_back(val);
}

void Stack::pop()
{
	data.pop_back();
}

void Stack::clear()
{
	for (int i=0; i<data.size(); ++i)
	{
		pop();
	}
}
