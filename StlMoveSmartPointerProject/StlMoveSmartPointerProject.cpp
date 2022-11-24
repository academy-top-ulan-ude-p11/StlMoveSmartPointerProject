#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

template <class T>
void MySwapCopy(T& a, T& b)
{
    T temp{ a }; // 1 copy constr
    a = b; // copy assign
    b = temp; // copy assign
}

template <class T>
void MySwapMove(T& a, T& b)
{
    T temp{ std::move(a) }; // move constr
    a = move(b); // move assign
    b = move(temp); // move assign
}

int main()
{
    

    //string s1{ "abc" };
    //string s2{ "def" };

    //cout << s1 << " " << s2 << "\n";

    ////MySwapCopy(s1, s2);
    //MySwapMove(s1, s2);

    //cout << s1 << " " << s2 << "\n";

    vector<string> v;

    string str1{ "Hello world" };
    v.push_back(str1);

    string str2{ "Hello people" };
    v.push_back(move(str2));

}
