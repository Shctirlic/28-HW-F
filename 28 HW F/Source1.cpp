#include "Header.h"
#include <iostream>
using namespace std;


void print_prod(Product obj)
{
	cout << "name:   " << obj.name << endl;
	cout << "number: " << obj.number << endl;
	cout << "pricen: " << obj.pricen << endl;
	cout << endl;
}

float full_price(Product obj)
{
	return obj.number * obj.pricen;
}

void sell(Product& obj, int v)
{
	obj.number -= v;
}