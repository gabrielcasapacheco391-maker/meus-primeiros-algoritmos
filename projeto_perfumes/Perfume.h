#include "Perfume.h"
#include <iostream> 
#include <iomanip>
Perfume::Perfume(std::string n,std::string b, double p, bool i)
{
    name=n;
    brand =b;
    price=p;
    imported=i;
}

Perfume::~Perfume()
{
    //dtor
}
bool Perfume::isImported() {
    return imported;
}


void Perfume :: showInfo(){


std::cout <<"The Dates of this perfume is: " <<std::endl;

std::cout <<"the brand is " << brand << std::endl;
std::cout <<"the name is " << name <<std::endl;
std::cout <<" with the price R$  "<< std::fixed << std::setprecision(2) << price << std::endl;
std::cout << "it´s " <<std::boolalpha << isImported() << "about the fragrance, if this is imported  " << std::endl;





}
