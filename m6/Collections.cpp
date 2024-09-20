#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

int main()
{
    vector<int> nums;

    for (int i=0; i<10; i++)
    {
        nums.push_back(i);
    }

    for (auto item : nums)
    {

        cout << item * 2 << " ";
    }
    cout << '\n';

    vector<string> words;
    cout << "Enter 3 words: ";
    for (int i=0; i<3; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }

    for (auto item : words)
    {
        cout << item << " ";
    }
    cout << '\n';

    cout << "int vector nums has " << nums.size() << " elements." << '\n';

    nums[5] = 3;
    nums[6] = -1;
    nums[1] = 99;

    cout << "Writing the nums vector" << '\n';
    for (auto num : nums)
    {
        cout << num << " ";
    }
    

    cout << '\n' << "Writing the nums vector with iterator" << '\n';
    for (unsigned int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    for (auto i=begin(nums); i!=end(nums); i++)
    {
        cout << nums[*i] << " ";
    }

    cout << '\n' << "Sort the words vector" << '\n';
    sort(begin(words), end(words));
    for (auto item : words)
    {
        cout << item << " ";
    }
    cout << "\n";

    cout << '\n' << "Sort the number vector" << '\n';
    sort(begin(nums), end(nums));
    for (auto num : nums)
    {
        cout << num << " ";
    }
    cout << "\n";

    int threes = count(begin(nums), end(nums), 3);
    cout << "Vector of ints has " << threes << " elements with value 3" << "\n";

    int tees = count(begin(words[0]), end(words[0]), 't');
    cout << "First word has " << tees << " times letter t" << "\n";
}