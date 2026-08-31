#include <iostream>
using namespace std;

class Demonstration{
    int start, end;
    public:
    Demonstration(int start, int end) : start(start), end(end) {}
    void printNumbers(){
        for(int i=start; i<=end; i++){
            for(int j=0; j<=9; j++){
                cout << i << "." << j << "\t";
            }
            cout << endl;
        }
    }
};

int main(){
    int start, end;
    cout << "Starting Number: ";
    cin >> start;
    cout << "Ending Number: ";
    cin >> end;
    Demonstration d(start, end);
    d.printNumbers();
    return 0;
}