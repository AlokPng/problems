// Here's the code for roman to integer
#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        int currentValue = romanValues[s[i]];
        if (currentValue < prevValue)
        {
            result -= currentValue;
        }
        else
        {
            result += currentValue;
        }
        prevValue = currentValue;
    }

    return result;
}

int main()
{
    string romanNumeral = "MCMXCIV"; // Replace with your Roman numeral
    int intValue = romanToInt(romanNumeral);
    cout << "The integer value of " << romanNumeral << " is: " << intValue << endl;
    return 0;
}
