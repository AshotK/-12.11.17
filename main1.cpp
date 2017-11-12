#include <iostream>
#include <algorithm>
using namespace std;

/*Ќапишите программу, котора€ удал€ет из массива все простые числа, встречающиес€ больше одного раза.
*/

bool A(int n){
    if(n<=1) return false;
    for (int i=2; i*i<=n; ++i){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

void B(int idx, int * array, int size){
    for (int i=idx; i < size; ++i){
        array[i] = array[i+1];
    }
    array[size-1]=0;
}

int main(){
    int n;
    cin >> n;
    int size=n;
    int array[n];
    for (int i=0; i < n; ++i){
        cin >> array[i];
    }
    for (int i=0; i<size; ++i){
        if(!A(array[i])) continue;
        bool flag = false;
        for (int j=0; j<size; ++j){
            if(j != i && array[j] == array[i]){
                B(i--, array,size--);
            }
        }
    if(flag){
        B(i--, array, size--);
    }
    }
    for(int i=0; i<size; ++i){
        cout << array[i] << ' ';
    }
    cout << endl;
    return 0;
}

