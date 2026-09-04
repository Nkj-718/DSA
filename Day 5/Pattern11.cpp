#include <iostream>
using namespace std;

class Pattern{
    int size;
    public:
        void setSize(int size){
            this->size = size;
            printPattern();
        }
        void printPattern(){
            int start=0;
            for(int row=1; row<=size; row++){
                if(row%2==1)
                    start=1;
                else
                    start=0;
                for(int col=1; col <=row; col++){
                    cout << start << " ";
                    if(start==0)
                        start=1;
                    else
                        start=0;
                }
                cout << "\n";
            }
        }
};

int main(){
    Pattern p;
    int size;
    cout << "Rows: ";
    cin >> size;
    p.setSize(size);
    return 0;
}