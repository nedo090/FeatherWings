#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO_NAME "/tmp/alpine.fifo"

int main(void)
{   
        char s[512];
        char cmd[512];
        int num;
        int fd = open(FIFO_NAME, O_RDONLY);
        do {
                if ((num = read(fd, s, 300)) == -1)
                        perror("read");
                else {
                        s[num] = '\0';
                        sprintf(cmd, "notify-send -t 5000 ' :' '%s'", s);
                        
                        system("play .25 /home/professoroptics/Sounds/Incoming.wav &");
                        system(cmd);
                }
        } while (num > 0);

        return 0;
}
