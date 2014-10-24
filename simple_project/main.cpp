#include <iostream>

using namespace std;

int main()
{
    cout << "Enter x1: " ;
    double x1;
    cin >> x1;
    cout << "Enter x2: ";
    double x2;
    cin >> x2;
    double result = x1 + x2;
    std::cout << "Result: " << result;
    cin.get();
    double deltaResult = x1 - x2;
    std::cout << "\nDelta result: " << deltaResult << std::endl;
    return 0;
    //Какой-то комментарий
    //Программка так себе
}
