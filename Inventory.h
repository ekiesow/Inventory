#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/** 
 * Class used to keep track of our bakery inventory
 *
 * @param m_name      name of item, i.e. Cupcake
 * @param m_price     price of the item
 * @param m_in_stock  how much of the item do we have in stock
 *
 * Inventory          constructor, args: name, price, amt in stock     
 * sell               sell the item if it is in stock 
 * ostream            stream for main to print whether or not item gets sold
 */
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int); 
    void sell(); 
    friend ostream& operator<<(ostream&, const Inventory&); 
};

#endif
