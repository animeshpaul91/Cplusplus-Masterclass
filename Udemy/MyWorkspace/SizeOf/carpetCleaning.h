#include "imports.h"

void cleanCarpet()
{
    int small_rooms {0}, large_rooms {0};
    const double price_for_small_room {25.0};
    const double price_for_large_room {35.0};
    const double tax_percent {0.06};
    
    cout << "\nHello, Welcome to Frank's Carpet Cleaning Service!!\n";
    cout << endl;
    cout <<"\nEnter number of small rooms: ";
    cin >> small_rooms;
    cout <<"\nEnter number of large rooms: ";
    cin >> large_rooms;
    const double small_rooms_cost {small_rooms * price_for_small_room};
    const double large_rooms_cost {large_rooms * price_for_large_room};
    cout <<"\nPrice for small room: "<< price_for_small_room;
    cout <<"\nPrice for large room: "<< price_for_large_room;
    const double total_cost {small_rooms_cost + large_rooms_cost};
    cout <<"\nTotal Cost: "<<total_cost;
    const double tax {total_cost * tax_percent};
    cout <<"\nTax: "<< tax;
    cout <<"\n=====================================================";
    double const total_estimate {total_cost + tax};
    cout <<"\nTotal Estimate: "<< total_estimate;
    cout <<endl;
}