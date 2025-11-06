#include <sys/ptrace.h>
#include <unistd.h>

#include <iostream>
#include <libsdb/libsdb.hpp>
#include <string_view>

namespace {
pid_t attach(int argc, const char **argv) {
  pid_t pid = 0;
  // Passing PID
  if (argc == 3 && argv[1] == std::string_view("-p")) {
    // Passing program name
  } else {
  }
  return pid;
}
}  // namespace

int main(int argc, const char **argv) {
  if (argc == 1) {
    std::cerr << "No arguments given\n";
    return -1;
  }

  pid_t pid = attach(argc, argv);
}
