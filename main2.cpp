#include <iostream>

using namespace std;

//�������� ���������, ������� ������������, ������� ��� � ������ ���������� ������ 'w'

int main(){
    int n = 0;
    char i;
    while (cin >> n){
        if (i == 'w'){
            ++n;
        }
    }
    cout << n;
    return 0;
}
