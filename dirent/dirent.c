#include <dirent.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		perror("Wrong amount of arguments.\n");
		return 1;
	}
	
	DIR *d;
	struct dirent *dir;
	d = opendir(argv[1]);
	if (d) {
		while ((dir = readdir(d)) != NULL) {
			printf("%s\n", dir->d_name);
		}
		closedir(d);
	}
	
	return 0;
}