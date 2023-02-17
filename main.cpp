#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int getSum(vector<int> numbers)
{
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    return sum;
}

double getAverage(vector<int> numbers)
{
    double avg = double(getSum(numbers)) / numbers.size();
    return avg;
}
int main()
{
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "The sum is : " << getSum(numbers) << endl;
    cout << "The average is : " << getAverage(numbers) << endl;
    return 0;
}