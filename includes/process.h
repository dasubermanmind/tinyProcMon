#ifndef PROCESS_H
#define PROCESS_H

class Process {
 public:
  int16_t getPid();
  std::string User();
  std::string Command();
  float CpuUtilization();
  std::string Ram();
  long int UpTime();
  bool operator<(Process const& a) const;  

 private:
};

#endif
