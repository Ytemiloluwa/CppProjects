//
//  Static Attributes.cpp
//  C++
//
//  Created by Temiloluwa on 06/12/2023.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// static data class
class Humanoid
{
    
private:

       static int qtyHumans;
    
public:
    
    Humanoid(int);
    ~Humanoid();
    
};

// initialise static member of humanoid class
int Humanoid::qtyHumans = 0;

Humanoid::Humanoid(int age)
{
    
    cout << age << " year old object #" << qtyHumans++ << " created!" << endl ;
}
Humanoid::~Humanoid(void)
{
    cout << "Object #" << --qtyHumans << " destroyed!"<< endl ;
    
}

int main()

{
    Humanoid simon(25) ;
    Humanoid penny(32) ;
    Humanoid jimmy(63) ;
   
      return 0;
    
}
