//
//  main.cpp
//  multi_target
//
//  Created by Jayanth Raman on 12/12/16.
//  Copyright © 2016 Jayanth Raman. All rights reserved.
//

#include <iostream>
#include "shared_stuff.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "multi_target says Hello!\n";
    auto shared = Shared();
    shared.action1();
    return 0;
}
