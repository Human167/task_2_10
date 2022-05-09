#include <iostream>


using namespace std;

void test(int *pa){
    *pa=9;
}

int main() {
    int a = 7;
    int *pa = &a;
    test(*pa);
    cout << *pa;

}

