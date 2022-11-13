#pragma once

#pragma once






struct Product
{
	char  name[20];
	int   number;
	float pricen;
};


void  print_prod(Product  obj);
float full_price(Product obj);
void  sell(Product& obj, int v);


