#include <iostream>
using namespace std;
void printHello(){
    cout << "Hello, World!" << endl;
    return 3;
}

int main(){
int val =printHello();
cout<<"val="<<val<<endl;
return 0;
}