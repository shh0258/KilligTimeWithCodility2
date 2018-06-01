//
//  main.cpp
//  KillingTimeWithCodility2
//
//  Created by user on 2018. 5. 31..
//  Copyright © 2018년 han. All rights reserved.
//

#include <iostream>
#include "MinAvgTwoSlice.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    A.push_back(4);
    A.push_back(2);
    A.push_back(2);
    A.push_back(5);
    A.push_back(1);
    A.push_back(5);
    A.push_back(8);
    cout<<solution6(A)<<endl;
    return 0;
}
