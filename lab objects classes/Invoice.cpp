#include <iostream>
#include "Invoice.h"
using namespace std;

/* Provide set and get functions for all data member */
Invoice::Invoice( string number, string description,   int count,
  int price ) {
setPartNumber(number); 
setPartDescription( description ); 
setQuantity(count); 
setPricePerItem(price); 
} 

void Invoice::setPartNumber( string number ) {
 partNumber = number; 
} 

string Invoice::getPartNumber() {
 return partNumber;
} 

void Invoice::setPartDescription(string description) {
 partDescription = description; 
} 

string Invoice::getPartDescription() {
 return partDescription;
} 
void Invoice::setQuantity(int count) {
if ( count > 0 ) 
quantity = count; 
if ( count <= 0 )  { 
   quantity = 0; 
  } //if
} 

int Invoice::getQuantity() {
 return quantity;
} 

/* set  price to positive and if the price is not positive then set it to 0*/
void Invoice::setPricePerItem(int price) {
 if ( price > 0 ) 
  pricePerItem = price; 
   if ( price <= 0 ) 
 {
   pricePerItem = 0; 
 } // if
} 

int Invoice::getPricePerItem() {
  return pricePerItem;
}

// calculate invoice
int Invoice::getInvoiceAmount() {
  return getQuantity() * getPricePerItem();
} // end 