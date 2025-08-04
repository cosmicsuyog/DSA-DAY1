#include <iostream>
using namespace std;
#include <vector>

// Declaration
// Empty Vector
vector<int> v1;

// Vector of size 5
vector<int> v2(5);

// Vector of size 5 with value 10
vector<int> v3(5, 10);

// Vector with initial values
vector<int> v4 = {1, 2, 3, 4, 5};

int main()
{
    cout << "===Basic Vector Operations===\n";

    //    1.adding elements
    cout << "\n1. Adding elements with push_back():" << endl;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i * 10);
    }

    // 2.Displaying elements
    cout << "Vector elements:";
    for (const auto &element : v)
    {
        v.push_back(element);
    }
    cout << endl;

    //  3.Accessing Elements
    cout << "\n2. Accesing elements:" << endl;
    cout << "Front element:" << v.front() << endl;
    cout << "Back element:" << v.back() << endl;
    cout << v.size();

    // 4. Inserting at specific position
    cout << "\n3. Inserting at specific position:" << endl;
    v.insert(v.begin(), 100);
    cout << "First element:" << v[0] << endl;

    // 5.Erasing elements
    cout << "\n 4.Erasing first element:" << endl;
    v.erase(v.begin());
    cout << "New first element: " << v[0] << endl;

    // 6.Using pop_back()
    cout << "\n5.Using pop_back():" << endl;
    v.pop_back();
    cout << "Last element: " << v.back() << endl;

    return 0;
}