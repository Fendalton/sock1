//
//  main.cpp
//  sock1
//
//  Created by wang zhijun on 2018/10/14.
//  Copyright © 2018 Fendalton. All rights reserved.
//

#include <iostream>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 0;
    while (i<100) {
        std::cout << i << "\tseconds passed\n";
        sleep(1);
        i++;
    }
    std::cout << "Hello, World by zhijun\n";
    return 0;
}
