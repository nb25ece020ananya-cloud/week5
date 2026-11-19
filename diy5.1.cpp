#include <iostream>
using namespace std;

class Counter
{
    int count;

    static int totalCreated;
    static int alive;

public:
    // Constructor
    Counter()
    {
        count = 0;
        totalCreated++;
        alive++;
    }

    // Destructor
    ~Counter()
    {
        alive--;
    }
}