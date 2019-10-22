#include <string>  //For using string data type
using namespace std;

/* Create a class called
Invoice that a hardware store might use to
represent an invoice for an item sold at the
store */

class Invoice {
public:

/*constructor initializes the four data members —a part number (type string), a
part description (type string), a quantity of
the item being purchased (type int) and a
price per item (type int) */

Invoice( string, string, int, int );

/*  Provide a set and a get function for each data member */

void setPartNumber( string ); 
string getPartNumber();
void setPartDescription( string ); 
string getPartDescription();
void setQuantity( int ); 
int getQuantity();
void setPricePerItem( int ); 
int getPricePerItem();

/* calculates the invoice
amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int
value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it
should be set to 0. */

int getInvoiceAmount(); 

private:
string partNumber;  
string partDescription;  
int quantity; 
int pricePerItem; 
}; 