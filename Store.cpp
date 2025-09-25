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

WebStore::WebStore(string n, string a, bool d, double r)
{
	webAddress = a;
	hasDronDelivery = d;
	revenue = r;
	name = n;
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

PhysicalStore::PhysicalStore(string n, string a,double r, bool w)
{
	name = n;
	physicalAddress = a;
	hasWifi = w;
	revenue = r;
}

string PhysicalStore::getPhysicalAddress()
{
	return physicalAddress;
}

bool PhysicalStore::getHasWifi()
{
	return hasWifi;
}
//GroceryStore Functions and Variables
//----------------------------------------------------------------
void GroceryStore::setHasProduce(bool p)
{
	HasProduce = p;
}

void GroceryStore::setIsChain(bool c)
{
	isChain = c;
}

bool GroceryStore::getHasProduce()
{
	return HasProduce;
}

bool GroceryStore::getIsChain()
{
	return isChain;
}

GroceryStore::GroceryStore()
{
}

GroceryStore::GroceryStore(string n, double r, string a, bool w, bool c, bool p)
{
	name = n;
	revenue = r;
	physicalAddress = a;
	hasWifi = w;
	HasProduce = p;
	isChain = c;
}

GroceryStore::GroceryStore(bool, bool)
{
}
