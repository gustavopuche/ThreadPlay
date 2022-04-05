#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <chrono>
#include <condition_variable>
#include <list>

using namespace std;

class Printer
{
public:
  string name;
  
  Printer(string name) : name(name) {}
  
  void operator()()
  {
    for (int i=0;i<100000;i++)
      cout << name << ": Hello synchronicity i= "<< i <<  endl;

  }
};

int main()
{  
  thread th1{Printer{"Thread P1"}};
  thread th2{Printer{"Thread P2"}};
  
  th1.join();
  th2.join();
    
  return 0;
}
