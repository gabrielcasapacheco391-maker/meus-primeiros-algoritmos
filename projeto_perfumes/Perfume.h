#ifndef PERFUME_H
#define PERFUME_H

#include <string>
class Perfume
{
    public:
        
        Perfume(std::string n,std::string b, double p, bool i);
       
        virtual ~Perfume();

    bool isImported();
    void showInfo();

    private:
        std::string brand; 
        std::string name; 
        double price; 
        bool imported;
};

#endif // PERFUME_H
