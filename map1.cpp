// Note:
// 1. Syntax: map<T1, T2>obj; --> T1 = key type, T2 = value type
// 2. std:: map is associative container that store elements in key value combination.
//      where key is unique, otherwise overrides pre-value
// 3. It is implement using self-balance binary search tree(AVL)
// 4. It stores key value pair in sorted order on the basis of key
// 5. std:: map is generally used in Dictionary type problems.
#include <iostream>
#include <map> //include a library of map
using namespace std;
int main(){
    //declare a map using std map
    // in this angular brackets to define key and value data types
    std::map<string, int> name_map;

    //name_map[1] = 'Tom';   //key1, value : Tom
    name_map["Alex"] = 1;
    name_map["Bob"] = 2;
   

    std:: cout <<name_map["Bob"] <<std::endl;

    return 0;
}