// opp_task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
long long container(long n, long long k) {
    if (n == 0) return 0;
    if (n % 10 == k) return 1;
     container(n / 10, k);
}
int main()
{
    long long n;
    long long k;
    std::cout << "enter n \n";
    std::cin >> n;
    std::cout << "enter k (must be a positive single digit) \n";
    std::cin >> k;
    std::cout<< container(n, k); }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
