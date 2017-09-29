<<<<<<< HEAD
// Create a zombie process that 
// must be reparented at exit.

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  if(fork() > 0)
    sleep(5);  // Let child exit before parent.
  exit();
}
=======
// Create a zombie process that 
// must be reparented at exit.

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  if(fork(10) > 0)
    sleep(5);  // Let child exit before parent.
  exit();
}
>>>>>>> 9525ffb73f1427aa1429ffb2fc9c6041a944180f
