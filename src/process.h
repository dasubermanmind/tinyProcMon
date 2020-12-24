//
// Created by Eliot Ostling on 12/23/20.
//

#ifndef TINYPROCMON_PROCESS_H
#define TINYPROCMON_PROCESS_H

#include<string>
using namespace std;

class Process {
 public:
  double getPid();
  string User();
  string Command();
  float CpuUtilization();
};
#endif  // TINYPROCMON_PROCESS_H
