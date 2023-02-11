#include <time.h> 
#include <iostream>
#include <stdlib.h>
using namespace std;

int random_int(int from, int to){
    int i = rand()% (to-from +1);
    return (from + i);
}

int main() 
{
    srand(static_cast<unsigned int>(time(nullptr)));
    cout << random_int(-1,1);
    return 0;
};