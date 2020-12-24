#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include"process.h"

using namespace std;

class System {
 public:
//  vector<Process>& Process();
  float MemoryUtilization();
  long UpTime();
  int TotalProcesses();
  int RunningProcesses();
  string Kernel();
  string OperatingSystem();
};

#endif
