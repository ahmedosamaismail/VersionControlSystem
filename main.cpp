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
    vector <int> numbers = {0 ,1 ,2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    cout << "The sum is : " << getSum(numbers) << endl;
    return 0;
}