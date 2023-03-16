#include "kernel/tty.h"

void kernel_early(void) { terminal_initialize(); }

int main(void) {
  printf("Hello world\n");
  for (;;) {
  }

  return 0;
}
