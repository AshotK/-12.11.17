#include <iostream>
#include <string>

using namespace std;

/*Напишите программу, которая находит во входном потоке простые числа.
Входной поток заканчивается символом '!'
*/

bool A(int n) {
    for (int i=2; i*i<=n; ++i){
        if (n%i==0) return false;
    }
    return true;
}

int B(int n) {
    int temp=1;
    for (int i=0; i<n; ++i){
        temp *=10;
    }
    return temp;
}

bool С(string c, int & n){
    n=0;
    for (int i = c.size() - 1; i>=0; --i){
        auto c = c[i];
        switch (c){
        case '0':
            break;
        case '1':
            n += B(i);
            break;
        case '2':
            n +=2*B(i);
            break;
        case '3':
            n +=3*B(i);
            break;
        case '4':
            n +=4*B(i);
            break;
        case '5':
            n +=5*B(i);
            break;
        case '6':
            n +=6*B(i);
            break;
        case '7':
            n +=7*B(i);
            break;
        case '8':
            n +=8*B(i);
            break;
        case '9':
            n +=9*B(i);
            break;
        default:
            return false;
        }
    }
    return true;
}

int main(){
    string current;
    getline(cin, current);
    while(current != "!"){
        int n;
        if(С(current, n)){
            if(n==1){
                cout << "1: Unit";
            }else if(n<=0){
                cout << n << ": Not natural";
            }else if(A(n)){
                cout << n << ": Prime";
            }else{
                cout << n << ": Composite";
            }
        }else{
            cout << current << ": Not a number";
        }
        cout << endl;
        getline(cin, current);
    }
    return 0;
}
