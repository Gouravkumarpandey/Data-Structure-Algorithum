#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> vec ;

vec.push_back(10);
vec.push_back(28);
vec.push_back(31);
vec.push_back(45);
cout<< "size=" << vec.size() << endl;
cout<< "capacity=" << vec.capacity() << endl;

cout<< "after push back size =" << vec.size() << endl; 

vec.pop_back();
cout<< vec.back() << endl;
cout<< vec.at(1)<< endl;
    return 0;
}
 