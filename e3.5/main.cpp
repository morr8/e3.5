/*
 •• E3.5
 Write a program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "enter three numbers: ";
    int first, second, third;
    cin >> first >> second >> third;
    
    if (first < second && second < third)
    {
        cout << "increasing";
    }
    else if (first > second && second > third)
    {
        cout << "decreasing";
    }
    else
    {
        cout << "neither";
    }
    cout << endl;
    return 0;
}
