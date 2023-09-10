#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char name[10], buffer[100];
    double sal, price;

    cin >> name;
    cin >> sal;
    sal = sal * 12;
    for(int i=0;i<12;i++){
    cin >> price;
    sal += price * 0.15;
    }
    sprintf(buffer, "%s %.2f", name, sal);
    cout << buffer;
}