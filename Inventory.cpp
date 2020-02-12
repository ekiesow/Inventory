#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

// contructor to create inventory item object
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// sell the item if it is in stock
void Inventory::sell()
{
  if(m_in_stock)
    m_in_stock--;
}

// stream to be printed out in main whether or not item gets sold
ostream& operator<<(ostream& stream, const Inventory& item)
{
  if(item.m_in_stock){
    stream << item.m_name 
      << " $"
      << std::fixed << std::setprecision(2) << item.m_price;
  }
  else{
    stream << "Sorry, that item is out of stock";
  }
  return stream;
}
