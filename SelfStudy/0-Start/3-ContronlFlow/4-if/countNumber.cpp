#include <iostream>
using namespace std;

int main(){
    int value = 0, currVal = 0;
    if (cin >> currVal){
        int count = 1;
        while (cin >> value){
            if (currVal == value) {
                count += 1;
            }else {
                cout << currVal << "连续出现了" << count << "次" << endl;
                count = 1;
                currVal = value;
            }
        }
    }

    return 0;
}
