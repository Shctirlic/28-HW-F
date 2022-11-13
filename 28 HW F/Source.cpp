#include <iostream>
#include "Header.h"


using namespace std;


int main()
{
	Product pr1 = { "aaa", 5, 12.8 };


	Product pr2;
	//pr2.name = "bbb";
	strcpy(pr2.name, "bbb");
	pr2.number = 11;
	pr2.pricen = 2.1;

	print_prod(pr2);



	print_prod(pr1);


	cout << "full price: " << full_price(pr1) << endl;

	sell(pr1, 3);
	print_prod(pr1);
}
