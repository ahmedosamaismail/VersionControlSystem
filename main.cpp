#include <iostream>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
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
int getMin(vector<int> numbers)
{
    int min = *min_element(numbers.begin(), numbers.end());
    return min;
}
int main()
{
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "The sum is : " << getSum(numbers) << endl;
    cout << "The average is : " << getAverage(numbers) << endl;
    cout << "The minimum element in the vector is : " << getMin(numbers) << endl;
    return 0;
}