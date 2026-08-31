#include <iostream>
using namespace std;

class Demonstration{
    int day;
    public:
        Demonstration(int day) : day(day) {}
        void result(){
            switch(day){
                case 1 : cout << "Monday" << endl;
                    break;
                case 2 : cout << "Tuesday" << endl;
                    break;
                case 3 : cout << "Wednesday" << endl;
                    break;
                case 4 : cout << "Thursday" << endl;
                    break;
                case 5 : cout << "Friday" << endl;
                    break;
                case 6 : cout << "Saturday" << endl;
                    break;
                case 7 : cout << "Sunday" << endl;
                    break;
                default : cout << "Invalid" << endl;
            }
        }
};

int main(){
    int day;
    cout << "Enter a number between 1-7: ";
    cin >> day;
    Demonstration d(day);
    d.result();
    return 0;
}