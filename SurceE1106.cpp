#include "../std_lib_facilities.h"

string Punctuation_for_spaces(const string& str);

int main()
{
    string str = " - don't use the as-if rule.";
    cout << str << '\n';
    cout << Punctuation_for_spaces(str) << '\n';
    return 0;
}

string Punctuation_for_spaces(const string& str)
{
    string temp{str};
    for(char& ch : temp)
    {
        if(ch == '.' || ch == ';' || ch == ',' || ch == '?' || ch == '-' || ch == (char)39)
            ch = ' ';
        else
            continue;
    }
    return temp;
}