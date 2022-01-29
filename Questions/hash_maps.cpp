#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> phonebook;
    phonebook["Swaraj"] = 8426094240;
    phonebook["Murchnana"] = 8486848373;
    phonebook["Adarsh"] = 8451958231;

    // int test;
    // cin >> test;
    // for (int i = 0; i < test; i++)
    // {
    //     int number;
    //     string name;
    //     cin >> number;
    //     getline(cin, name);
    //     phonebook.insert({number, name});
    // }

    //Priniting the map
    map<string, int>::iterator it;
    for (it = phonebook.begin(); it != phonebook.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}