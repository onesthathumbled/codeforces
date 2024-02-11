#include <iostream>
using namespace std;

int main()
{
    int looptimes;

    cin >> looptimes;

    while (looptimes > 0)
    {
        string word;

        cin >> word;

        if (word.length() > 10)
        {
            char first_letter = word[0];
            char last_letter = word[word.length() - 1];
            int letter_in_between = word.length() - 2;
            cout << first_letter << letter_in_between << last_letter << endl;
        } else
        {
            cout << word << endl;
        }

        looptimes--;
    }
    return 0;
}
