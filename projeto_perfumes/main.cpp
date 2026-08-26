#include "Perfume.h"
#include <iostream>

int main() {

    Perfume perfume1("Homem Identidad", "Natura", 259.90, false);

    Perfume perfume2("Azzure oud", "French avenue", 280.00, true);

    
    perfume1.showInfo();
    perfume2.showInfo();

    return 0;
}
