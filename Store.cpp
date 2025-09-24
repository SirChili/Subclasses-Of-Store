#include "Store.h"

//Store Functions and Variables


void Store::setStoreName(string n)
{
	name = n;
}

void Store::setStoreRevenue(double r)
{
	revenue = r;
}

Store::Store()
{
}

Store::Store(string n, double r)
{
	name = n;
	revenue = r;
}

string Store::getStoreName()
{
	return name;
}

double Store::getStoreRevenue()
{
	return revenue;
}

//WebStore Functions and Variables
//----------------------------------------------------------------

void WebStore::setWebAddress(string a)
{
	webAddress = a;
}

void WebStore::setDronDeliveryBool(bool d)
{
	hasDronDelivery = d;
}


WebStore::WebStore()
{
}

WebStore::WebStore(string a, bool d)
{
	webAddress = a;
	hasDronDelivery = d;
}

string WebStore::getWebAddress()
{
	return webAddress;
}

bool WebStore::getDroneDeliveryBool()
{
	return hasDronDelivery;
}

//PhysicalStore Functions and Variables
//----------------------------------------------------------------

void PhysicalStore::setPhysicalAddress(string a)
{
	physicalAddress = a;
}

void PhysicalStore::setHasWifi(bool w)
{
	hasWifi = w;
}

PhysicalStore::PhysicalStore()
{
}

PhysicalStore::PhysicalStore(string a, bool w)
{
	physicalAddress = a;
	hasWifi = w;
}

string PhysicalStore::getPhysicalAddress()
{
	return physicalAddress;
}

bool PhysicalStore::getHasWifi()
{
	return hasWifi;
}
