// STACK AND HEAP 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;              //stored in stack
    int *p = new int();      // allocate memory in heap 
                             //(new keyword is used to achieve this)
                             // p is itself stored in stack but it point to memory add. 
                             // we have been provided in the heap
    *p = 10;
    delete(p);               // deallocation needs to be done manuall it's not like stack.
    p = new int[4];         


    delete[] p;
    p = NULL;

    return 0;
}