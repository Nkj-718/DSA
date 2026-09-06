#include <iostream>
using namespace std;

class Pattern{
    int size;
    public:
        void setSize(int size){
            this->size=size;
            printPattern();
        }
        void printPattern(){
            for(int row=1; row<=(2*size)-1; row++){
                for(int col=1; col<=(2*size)-1; col++){
                    int element;
                    if(row == 1 || row == (2*size)-1 || col == 1 || col == (2*size)-1){
                        cout << size << " ";
                    }
                    else{
                        int top=row;
                        int left=col;
                        int bottom=(2*size)-row;
                        int right=(2*size)-col;
                        int min;
                        if(top<left && top<right && top<bottom)
                        min=top;
                        else if(left<right && left<bottom)
                        min=left;
                        else if(right<bottom)
                        min=right;
                        else
                        min=bottom;
                        element=(size-min)+1;
                        cout << element << " ";
                    }
                }
                cout << endl;
            }
        }
};

int main(){
    int size;
    cout << "Size: ";
    cin >> size;
    Pattern p;
    p.setSize(size);
}