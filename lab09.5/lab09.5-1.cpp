#include <iostream>
using namespace std;

int main() {
    int i, count = 0;
    cin >> i;
    
    while(i != 0){
    if(i % 2 == 0){
        i /= 2;
    }else if(i % 2 != 0){
        i -= 1;
    }
    count += 1;
    }
    cout << count;
}