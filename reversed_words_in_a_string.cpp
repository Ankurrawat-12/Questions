#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s)
{
    s = regex_replace(s, regex("^ +| +$|( ) +"), "$1");
    s = regex_replace(s, regex(" +"), " ");

    int words = 1;
    int last_word;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            words++;
        }
    }

    string word[words];

    int current_word = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            current_word += 1;
        }
        // else if (current_word%2 != 0)
        // {
        //     word[current_word] += " ";
        //     current_word ++;
        //     i--;
        // }
        else
        {
            if((word[current_word].size() == 0) && (current_word != words-1)){
            // if(word[current_word].size() == 0){
                word[current_word] += ' ';
            }
            word[current_word] += s[i];
        }
    }
    string answer;
    for (int i = (words-1); i >= 0; i--)
    {
        answer += word[i];
    }
    return answer;
}

int main()
{
    string word;
    getline(cin, word);

    cout<<reverseWords(word);
    return 0;
}