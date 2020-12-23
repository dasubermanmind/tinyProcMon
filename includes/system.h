#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include "Process.h"

using namespace std;

class System {
 public:               
  vector<Process>& Processes();  
  float MemoryUtilization();          
  long UpTime();                     
  int TotalProcesses();               
  int RunningProcesses();             
  string Kernel();              
  string OperatingSystem();     

 private:
  vector<Process> processes_ = {};
};

#endif