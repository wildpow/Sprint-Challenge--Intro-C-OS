#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  char *dirname = ".";
  // Open directory
  DIR *d = opendir(dirname);
  // Repeatly read and print entries
  if(d == NULL) 
  {
    printf("Error \n");
    exit(1);
  }
  struct dirent *ent;
  ent = readdir(d);

  // Close directory
  closedir(d);
  return 0;
}