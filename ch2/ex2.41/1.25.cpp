#include <iostream>
#include "sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_data total; // variable to hold data for the next transaction
    double price;
    // read the first transaction and ensure that there are data to process
    if (cin >> total.bookNo >> total.unitsSold >> price) {
        total.revenue += total.unitsSold * price;
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (cin >> trans.bookNo >> trans.unitsSold >> price) {
            // if we're still processing the same book
            if (total.bookNo == trans.bookNo) {
                total.unitsSold += trans.unitsSold; // update the running total
                total.revenue += trans.unitsSold * price;
            } else {
                // print results for the previous book
                cout << total.bookNo << " " << total.unitsSold << " " << total.revenue << endl;
                total = trans; // total now refers to the next book
            }
        }
        cout << total.bookNo << " " << total.unitsSold << " " << total.revenue << endl;
    } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
    return 0;
}
