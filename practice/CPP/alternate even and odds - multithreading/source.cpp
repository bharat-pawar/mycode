#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

using namespace std;
mutex oddevenMu;
condition_variable condVar;
int number = 1;

void printEvenOdd(bool isEven, int maxnubmer)
{
    unique_lock<mutex> ul(oddevenMu);
    while (number < maxnubmer)
    {
        condVar.wait(ul, [&]() {return number % 2 == isEven;});
        cout << number++ << " ";
        condVar.notify_all();
    }
}

int main()
{
    thread oddThread(printEvenOdd, false, 100);
    thread evenThread(printEvenOdd, true, 100);
    oddThread.join();
    evenThread.join();
    return 0;
}