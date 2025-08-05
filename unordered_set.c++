#include <iostream>
using namespace std;
#include <unordered_set>

int main()
{
    cout << "=== Unordered Set Complete Tutorial ===" << endl;

    // 1. Basic initalization and insertion
    cout << "\n 1. Creating and populating unordered_set:" << endl;
    unordered_set<int> s;

    // Insertion
    for (int i = 1; i < 10; i++)
    {
        s.insert(i);
    }
    // Displaying elements (order may vary)
    cout << "Unordered set elements:";
    for (const auto &element : s)
    {
        cout << element << " ";
    }
    cout << endl;

    // 3. Using find() to search elements
    cout << "\n2. Searching elements with find():" << endl;

    int search_key = 5;
    if (s.find(search_key) != s.end())
    {
        cout << search_key << "is present in unordered set " << endl;
    }
    else
    {
        cout << search_key << "is NOT present in unordered set " << endl;
    }

    // 4. Using count() to check existence
    cout << s.count(7);

    // 5. Using erase() to remove elements
    cout << "\n3. Removing elements with erase():" << endl;
    s.erase(s.begin());

    // Empty check
    cout << "\n4. Empty check:" << endl;
    cout << s.empty();
}