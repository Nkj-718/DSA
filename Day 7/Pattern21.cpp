#include <iostream>
using namespace std;

class Pattern{
    int size;
    public: 
        Pattern(int size) : size(size) { printPattern(); }
        void printPattern(){
            for(int row=1; row<=size; row++){
                for(int col=1; col<=size; col++){
                    if(row==1 || row==size){
                        cout <<  "*";
                    }
                    else if(col==1 || col==size){
                        cout << "*";
                    }
                    else{
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
};

int main(){
    int size;
    cout << "Rows: ";
    cin >> size;
    Pattern p(size);
}