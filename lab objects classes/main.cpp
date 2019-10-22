#include <iostream>
#include "Invoice.h"
using namespace std;

int main() {

/* referencing the object */
Invoice invoice( "12345", "Hammer", 100, 5 );

/* Formatting to look like the desired output */
cout << "Part number: " << invoice.getPartNumber() << endl;
cout << "Part description: " << invoice.getPartDescription() << endl;
cout << "Quantity: " << invoice.getQuantity() << endl;
cout << "Price per item: " << invoice.getPricePerItem() << endl;
cout << "Invoice amount: " << invoice.getInvoiceAmount() << endl;

// updated results
invoice.setPartNumber( "123456" );
invoice.setPartDescription( "Saw" );
invoice.setQuantity( -5 ); 
invoice.setPricePerItem( 10 );
cout << "\nInvoice data members modified.\n\n";
cout << "Part number: " << invoice.getPartNumber() << endl;
cout << "Part description: " << invoice.getPartDescription() << endl;
cout << "Quantity: " << invoice.getQuantity() << endl;
cout << "Price per item: $" << invoice.getPricePerItem() << endl;
cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

return 0; 

} 