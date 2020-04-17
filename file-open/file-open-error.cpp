// Reference https://www.ipa.go.jp/security/awareness/vendor/programmingv1/b06_06_main.html
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

// prototypes

static int safeopen(const char *filepath);
static void showfile(void);
int main(void);

// main

int main(void) {
  int i;
  for (i = 0; i < 1030; i++) {
    printf("%4d:", i);
    showfile();
  }
  return 0;
}

// internal function

static void showfile(void) {
  char line[256];
  int fd;

  fd = safeopen("text.txt");
  if (fd == -1) {
    printf("file open error\n");
    return;
  }

  memset(line, 0, sizeof(line));
  read(fd, line, sizeof(line) - 1);
  printf("%s (%4d)\n", line, fd);
}
static int safeopen(const char *filepath) {
  struct stat lst, fst;
  int fd;

  if (lstat(filepath, &lst) != 0)
    return -1;

  if (!S_ISREG(lst.st_mode))
    return -1;

  fd = open(filepath, O_RDWR, 0);
  if (fd < 0)
    return -1;

  if (fstat(fd, &fst) != 0) {
    close(fd);
    return -1;
  }

  if (lst.st_ino != fst.st_ino || lst.st_dev != fst.st_dev) {
    close(fd);
    return -1;
  }

  return fd;
}
