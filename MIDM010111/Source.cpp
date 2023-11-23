#include <iostream>
using namespace std;
int main()
{
	int initialQuantity, currentStock, restockQuantity, threshold, soldQuantity;

	cout << "***  WELCOME  ***" << endl;
	cout << "ENTER THE INITIAL QUANTITY OF THE PRODUCT IN STOCK:";
	cin >> initialQuantity;

	cout << "ENTER THE THRESHOLD FOR RESTOCKING:";
	cin >> threshold;

	currentStock = initialQuantity;

	do {
		cout << "ENTER THE QUANTTIY SOLD (ENTER 0 TO STOP THE SALES) :";
		cin >> soldQuantity;

		if (soldQuantity > currentStock) {
			cout << "NOT ENOUGH STOCK! REMAINING STOCK:" << currentStock << endl;
		}
		else {
			currentStock -= soldQuantity;
			cout << "SALES SUCCESSFUL! REMAINING STOCK:" << currentStock << endl;
		}
		if (currentStock <= threshold) {
			cout << "STOCK IS BELOW THE THRESHOLD. ENTER THE QUANTITY RESTOCKED:";
			cin >> restockQuantity;

			currentStock += restockQuantity;
			cout << "RESTOCKING SUCCESSFUL! UPDATED STOCK:" << currentStock << endl;
		}
	} while (soldQuantity > 0);
	cout << "** THANKS FOR USING MY INVENTORY MANAGEMENT PROGRAM **" << endl;

	system("pause");
	return 0;
}


	
