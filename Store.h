#pragma once

#include <string>
#include <iostream>

using namespace std;

class Store
{
public:
	string name;
	double revenue;

	void setStoreName(string);
	void setStoreRevenue(double);

	Store();
	Store(string, double);

	string getStoreName();
	double getStoreRevenue();
};

class WebStore : public Store
{
public:
	string webAddress;
	bool hasDronDelivery;

	void setWebAddress(string);
	void setDronDeliveryBool(bool);

	WebStore();
	WebStore(string, string, bool, double);

	string getWebAddress();
	bool getDroneDeliveryBool();

};

class PhysicalStore : public Store
{
public:
	string physicalAddress;
	bool hasWifi;

	void setPhysicalAddress(string);
	void setHasWifi(bool);

	PhysicalStore();
	PhysicalStore(string, string, double, bool);

	string getPhysicalAddress();
	bool getHasWifi();

};

class GroceryStore : public PhysicalStore
{
public:

	bool HasProduce;
	bool isChain;

	void setHasProduce(bool);
	void setIsChain(bool);

	bool getHasProduce();
	bool getIsChain();

	GroceryStore();
	GroceryStore(string, double, string, bool, bool, bool);

};
