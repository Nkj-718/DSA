#include <bits/stdc++.h>
using namespace std;

class vectorOperations{
    vector<int> v;
    public:
        void insertElement(int position,int value){
            if(position>v.size()){
                cout << "Vector currently does not have " << position << " elements." << "\n";
                return;
            }
            v.insert(v.begin() + (position-1), value);
            cout << value << " inserted at position " << position << "!\n";
        }

        void insertElementAtEnd(int value){
            v.push_back(value);
            cout << value << " inserted" << "!\n";
        }

        void insertElementAtStart(int value){
            v.insert(v.begin(), value);
            cout << value << " inserted" << "!\n";
        }

        void vectorStatus(){
            cout << "—————————————————————————————————————" << endl;
            cout << "Current Vector: [    ";
            for(auto it : v){
                cout << it << "    ";
            }
            cout << "]" << endl;
            cout << "—————————————————————————————————————" << endl;
        }
};

int main(){
    vectorOperations vec;
    int choice, position, value;
    do{
        vec.vectorStatus();
        cout << "What Operation would you like to perform?" << endl;
        cout << "1. Insert an element at a given position." << "\n"
             << "2. Insert an element at the end." << "\n"
             << "3. Insert an element at the start." << "\n"
             << "4. Exit." << "\n";
        cout << "Choose an operation: ";
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "Enter the position for the element: ";
                cin >> position;
                cout << "Enter the value for the element: ";
                cin >> value;
                vec.insertElement(position, value);
                break;
            }
            case 2:{
                cout << "Enter the value for the element: ";
                cin >> value;
                vec.insertElementAtEnd(value);
                break;
            }
            case 3:{
                cout << "Enter the value for the element: ";
                cin >> value;
                vec.insertElementAtStart(value);
                break;
            }
            case 4:{
                cout << "Session Terminated!";
                break;
            }
            default:{
                cout << "Invalid Operation. Try Again!" << endl;
            }
        }
    }while(choice!=4);
}