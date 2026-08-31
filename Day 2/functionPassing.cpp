#include <iostream>
using namespace std;

class Demonstration{
    public:
        //Pass by Value
        int modifyValue(int num){
            return num=num*2;
        }
        //Pass by Reference
        int modifyValue2(int &num){
            return num=num*2;
        }
};

int main(){
    int val=5, val2=5;
    Demonstration d;
    int changedValue = d.modifyValue(val);
    cout << "Original Value: " << val << endl;
    cout << "Modified Value: " << changedValue << endl << endl;
    
    int changedValue2 = d.modifyValue2(val2);
        cout << "Original Value: " << val2 << endl;
        cout << "Modified Value: " << changedValue2 << endl;
}