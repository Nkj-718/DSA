#include <iostream>
using namespace std;

class Strings{
    public:
        int ans;
        int Length(string str)
        {
            return str.length();
        }
        int Size(string str)
        {
            return str.size();
        }
        void Elements(string str){
            for (int i = 0; i < str.length(); i++)
            {
                cout << str[i] << "\t";
            }
        }
        string Reverse(string str){
            string str2(str.size(), ' ');
            int j=0;
            for(int i=str.size()-1; i>=0; i--, j++){
                str2[j]=str[i];
            }
            return str2;
        }
        bool isPallindrome(string str, string str2){
            return str==str2;
        }
};

int main()
{
    string s;
    cin >> s;
    Strings obj;
    cout << "Length of String: " << obj.Length(s) << "\n";
    cout << "Size of String: " << obj.Size(s) << "\n";
    cout << "Elements of String: "; obj.Elements(s);
    cout << "\n";
    cout << "Reverse of String: " << obj.Reverse(s) << endl;
    cout << "It is a pallindrome! " << boolalpha << obj.isPallindrome(s,obj.Reverse(s))<<endl;
    return 0;
}