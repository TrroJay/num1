//
// Created by 31227 on 2024/3/24.
//

#ifndef CPP_IN_CLASS_MONOTONICSTACK_H
#define CPP_IN_CLASS_MONOTONICSTACK_H

#include <iostream>
#include <stack>

using namespace std;

class MonotonicStack {
private:
    stack<int> s;
public:
    int size();
    void pop();
    int top();
    int push(int element);
    int function(const int *arr, int n);
};

#endif //CPP_IN_CLASS_MONOTONICSTACK_H
