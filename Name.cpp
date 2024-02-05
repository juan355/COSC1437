#include <iostream>

using namespace std;

int main()
{
    string name1,name2;
    cout << "please enter your first name: ";
    cin >> name1;
    cout << "Please enter your last name: ";
    cin >> name2;
    cout << name1.substr(0,1) << name2.substr(0,1)<<" \n";
    int n1,n2;
    n1 = name1.length();
    n2 = name2.length();
    cout << name1.substr(0,n1/2)<< name2.substr(n2/2,n2)<<"\n";
    cout << name2.substr(0,n2/2)<< name1.substr(n1/2,n1)<<"\n";
    return 0;
}