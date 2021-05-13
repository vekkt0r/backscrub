#include <fcntl.h>

int loopback_init(const char* device, int w, int h, int debug) {
  return open("/dev/null", O_WRONLY);
}
