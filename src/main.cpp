#include "../include/MonotonicStack.h"

int MonotonicStack::size() {
    return s.size();
}

void MonotonicStack::pop() {
    if ( s.empty()) {
        return;
    }
    else {
        s.pop();
    }
}

int MonotonicStack::top() {
    if ( s.empty()) {
        return -1;
    }
    else {
        return s.top();
    }
}

int MonotonicStack::push(int element) {

    if ( s.empty()) {
        s.push(element);
        return 0;
    }
    else if ( element <= s.top()) {
        s.pop();
        MonotonicStack::push(element);
        return 0;
    }
    else {
        s.push(element);
        return 0;
    }
}

int MonotonicStack::function(const int *arr, int n) {
    int sum = 0;
    int copy_arr[n];
    for ( int &x: copy_arr ) {
        x = 0;
    }
    for ( int i = 0; i < n; ++i ) {
        push(arr[i]);
    }
    return sum;
}

int main() {
    MonotonicStack *ms = new MonotonicStack;
    int n = 0;
    cin >> n;
    int arr[n];
    for ( int &x: arr ) {
        cin >> x;
    }
    int sum = ms->function(arr, n);
    cout << sum << endl;
    delete ms;
}

