#include "Address.h"
Address::Address(int h, char b, int s, CharString c)
{
	houseNo = h;
	streetNo = s;
	block = b;
	city.CopyFrom(c);
}
void Address::displayAddress()
{
	cout << "House No. " << houseNo
		<< ", Street No. " << streetNo
		<< ", Block # " << block
		<< ", City # ";
	city.print();
	cout << '\n';
}
void Address::operator=(const Address& a)
{
	this->houseNo = a.houseNo;
	this->streetNo = a.streetNo;
	this->block = a.block;
	this->city.CopyFrom(a.city);
}