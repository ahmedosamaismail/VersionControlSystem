#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int getSum(vector<int> numbers)
{
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    return sum;
}
int main()
{
    return 0;
}