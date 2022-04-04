#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <chrono>
#include <condition_variable>
#include <list>

using namespace std;

class Writer
{
public:
  void init(){
    varA = 1234;
  }
protected:
  int varA = 0;
};

class Reader
{
public:
  void start(){
    init();
    cout << "Value of varA: " << varA << endl;
    varA = 324;
    cout << "Other value of varA: " << varA << endl;
  }
};

int main()
{
  B b;

  b.start();
    
  return 0;
}
