#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r)
{
    switch (r)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default:  return 0;
    }
}

int convertRomanToInt(string s)
{
    int total = 0;

    while (!s.empty())
    {
        if (s.length() == 1 ||
            romanCharValue(s[0]) >= romanCharValue(s[1]))
        {
            total += romanCharValue(s[0]);
            s.erase(0, 1);  // remove first character
        }
        else
        {
            total += romanCharValue(s[1]) - romanCharValue(s[0]);
            s.erase(0, 2);  // remove first two characters
        }
    }

    return total;
}

int main()
{
    cout << "MCMLXXVIII = "
        << convertRomanToInt("MCMLXXVIII") << endl; // 1978

    cout << "IV = "
        << convertRomanToInt("IV") << endl; // 4

    cout << "MCMXC = "
        << convertRomanToInt("MCMXC") << endl; // 1990

    return 0;
}