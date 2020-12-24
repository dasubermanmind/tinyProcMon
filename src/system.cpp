#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>
#include"system.h"
#include "process.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;


// TODO: Might need to better define each of these subroutines
//vector<Process>& System::Process() {
//    return vector<Process>(1);
// }

std::string System::Kernel() {
    return string();

}

float System::MemoryUtilization() {
    return 0.0;
 }

std::string System::OperatingSystem() {

    return string();

 }

int System::RunningProcesses() {
    return 0;

 }

int System::TotalProcesses() {
    return 0;

 }

long int System::UpTime() {

    return 0;

 }
