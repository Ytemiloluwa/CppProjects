//
//  Car Inventory.cpp
//  C++
//
//  Created by Temiloluwa on 05/12/2023.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Vehicle {
protected:
    string license;
    int year;

public:
    Vehicle(const string &myLicense, const int myYear)
        : license(myLicense), year(myYear) {}

    const string getDesc() const {
        return license + " : " + to_string(year);
    }

    const string &getLicense() const {
        return license;
    }

    const int getYear() const {
        return year;
    }
};

class Car : public Vehicle {
    string style;
    string brand;

public:
    Car(const string &myLicense, const int myYear, const string &myStyle, const string &mybrand)
        : Vehicle(myLicense, myYear), style(myStyle), brand(mybrand) {}

    const string getDes() {
        
        return to_string(getYear()) + " : " + style + " : " + getLicense();
    }
    
    const string &getStyle() const {
        return style;
    }
    const string &getBrand() const {
        
        return brand;
    }
};

int main() {
    // Example usage
    Car myCar("XYZ456", 2023, "Sedan", "Toyota");
    cout << "Description: " << myCar.getDesc() << endl;
    cout << "License: " << myCar.getLicense() << endl;
    cout << "Year: " << myCar.getYear() << endl;
    cout << "Style: " << myCar.getStyle() << endl;
    cout << "Brand: " << myCar.getBrand() << endl;

    return 0;
}


