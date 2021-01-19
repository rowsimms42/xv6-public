#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int n = getsyscallinfo();
  if (n < 0)
  {
    return -1;
  }
  exit();
}

  
