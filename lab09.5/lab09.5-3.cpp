#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int num, max = 0, check = 1;
    cin >> num;
    int pri[num+1], on = 0, en = 0;
    
    for(int i=0;i<num;i++){
        cin >> pri[i];
    }

    for(int i=0;i<num;i++){
        if(pri[i] >= max){
            max = pri[i];
        }
    }
    int o[max/2+1], e[max/2+1];

    for(int i=1;i<=max;i++){
        for(int l=0;l<num;l++){
            if(i == pri[l]){
                check = 0;
            }
        }

        if(check && i % 2 == 0){
            o[on] = i;
            on += 1;
        }else if(check && i % 2 != 0){
            e[en] = i;
            en += 1;
        }
        check = 1;
    }

    for(int i=0;i<en;i++){
        cout << e[i] << " ";
    }
    
    cout << endl;

    for(int i=0;i<on;i++){
        cout << o[i] << " ";
    }
}