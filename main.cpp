#include <string>
#include <iostream>
#include "Store.h";


using namespace std;

int main() {

	WebStore item1;
	Store item2;
	PhysicalStore item3;
	GroceryStore item4;

	//yes or no variable options
	string DT = "Yes";
	string DF = "No";
	

	//change variables here
	item1 = WebStore("The Data Store","www.thedatastore.com", false, 345.99); 
	item2 = Store("The Everything Store", 123.99);
	item3 = PhysicalStore("TheShoeStore","1845 Fake Address Rd 49538",254.76, true);
	item4 = GroceryStore("The Grocery Store",8.94,"42 Faker Address 7th Ave.",false,true, true);

	//----------------------------------------------------------------
	//Store
	cout << "Name: " << item2.getStoreName() << "\n";
	cout << "Revenue: $" << item2.getStoreRevenue() << "\n\n";

	//----------------------------------------------------------------
	//Web store
	cout << "Web Store" << "\n";
	cout << "Name: " << item1.getStoreName() << "\n";
	cout << "Revenue: " << item1.getStoreRevenue() << "\n";
	cout << "Web Address: " << item1.getWebAddress() << "\n";
	
	//display yes or no instead of 0 or 1
	if (item1.getDroneDeliveryBool() == 0) {
		cout << "Does Drone Delivery: No\n\n";
	}
	else {
		cout << "Does Drone Delivery: Yes\n\n";
	}

	//----------------------------------------------------------------
	//Physical Store
	cout << "Physical Store" << "\n";
	cout << "Name: " << item3.getStoreName() << "\n";
	cout << "Revenue: " << item3.getStoreRevenue() << "\n";
	cout << "Physical Address: " << item3.getPhysicalAddress() << "\n";
	
	//display yes or no instead of 0 or 1
	if (item3.getHasWifi() == 0) {
		cout << "Does Store has WiFi: No\n\n";
	}
	else {
		cout << "Does Store has WiFi: Yes\n\n";
	}

	//----------------------------------------------------------------
	//Grocery Store
	cout << "Grocery Store" << "\n";
	cout << "Name: " << item4.getStoreName() << "\n";
	cout << "Revenue: " << item4.getStoreRevenue() << "\n";
	cout << "Physical Address: " << item4.getPhysicalAddress() << "\n";

	//many displays of yes or no just so it looks better
	//hasWifi
	if (item4.getHasWifi() == 0) {
		cout << "WiFi: No\n";
	}
	else {
		cout << "WiFi: Yes\n";
	}
	//hasProduce
	if (item4.getHasProduce() == 0) {
		cout << "Produce: No\n";
	}
	else {
		cout << "Produce: Yes\n";
	}
	//isChain
	if (item4.getIsChain() == 0) {
		cout << "Chain: No\n\n";
	}
	else {
		cout << "Chain: Yes\n\n";
	}

}
