#include <string>
#include <iostream>
#include "Store.h";

using namespace std;

int main() {

	WebStore item1;
	Store item2;
	PhysicalStore item3;

	string DT = "Yes";
	string DF = "No";

	item1 = WebStore("8.8.8.8", false);
	item2 = Store("Walmart", 19245.6);
	item3 = PhysicalStore("1845 Fake Address Rd 49538", true);

	//Web store
	cout << "Web Store\n";
	cout << "Web IP Address: " << item1.getWebAddress() << "\n";
	if (item1.getDroneDeliveryBool() == 0){
		cout << "Does Drone Delivery: No\n\n";
	}
	else {
		cout << "Does Drone Delivery: Yes\n\n";
	}

	//Physical Store
	cout << "Physical Store\n";
	cout << "Physical Store Address: " << item3.getPhysicalAddress() << "\n";
	if (item3.getHasWifi() == 0) {
		cout << "Does Store has WiFi: No\n\n";
	}
	else {
		cout << "Does Store has WiFi: Yes\n\n";
	}

	//Store
	cout << "Business\n";
	cout << "Business Name: " << item2.getStoreName() << "\n";
	cout << "Business Revenue: $" << item2.getStoreRevenue() << "\n\n";
}

//Output the variables of the Grocery Store Class

//Make sure to look at the teacher wanted output so you can change the outputs to the expected output
