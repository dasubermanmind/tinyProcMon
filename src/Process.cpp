#include "Process.h"
#include <future>

using namespace std;

int64_t Process::getPid(){
    auto lock = m_lock.lock();
    GetProcessId(lock);
}