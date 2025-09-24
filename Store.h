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
	WebStore(string, bool);

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
	PhysicalStore(string, bool);

	string getPhysicalAddress();
	bool getHasWifi();

};

