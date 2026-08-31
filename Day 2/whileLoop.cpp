#include <iostream>
using namespace std;

class Demonstration{
    int num, i=1, fact=1;
    public:
        Demonstration(int num) : num(num) {}
        int factorial(){
            while(i <= num){
                fact = fact * i;
                i++;
            }
            return fact;
        }
};

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Demonstration d(num);
    int result = d.factorial();
    cout << "Factorial of " << num <<": " << result << endl;
    return 0;
}