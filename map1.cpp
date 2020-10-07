#include <iostream>
#include <map> //include a library of map
using namespace std;
int main(){
    //declare a map using std map
    // in this angular brackets to define key and value data types
    std::map<int , std::string> name_map;

    //name_map[1] = 'Tom';   //key1, value : Tom
    name_map[2] = 'Alex';
    name_map[3] = 'Bob';
   

    std:: cout <<name_map[3] <<std::endl;

    return 0;
}