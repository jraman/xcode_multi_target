//
//  shared_stuff.cpp
//  multi_target
//
//  Created by Jayanth Raman on 12/12/16.
//  Copyright © 2016 Jayanth Raman. All rights reserved.
//

#include "shared_stuff.hpp"
#include <iostream>

Shared::Shared() {
    std::cout << "Shared constructor" << std::endl;
}

Shared::~Shared() {
    std::cout << "Shared destructor" << std::endl;
}

void Shared::action1() {
    std::cout << "Shared action1" << std::endl;
}
