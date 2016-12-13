//
//  main.cpp
//  target2
//
//  Created by Jayanth Raman on 12/12/16.
//  Copyright © 2016 Jayanth Raman. All rights reserved.
//

// This target was added after the common group with shared_stuff was created.
// In the project settings > Build Phases, shared_stuff.cpp was manually added
// to Build Phases > Compile Sources.

#include <iostream>
#include "shared_stuff.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "target2 says Hello!\n";
    auto shared = Shared();
    shared.action1();
    return 0;
}
