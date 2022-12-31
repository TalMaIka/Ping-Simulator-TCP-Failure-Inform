#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/time.h>
#define SERVER_IP_ADDRESS "127.0.0.1"


int main()
{

    while (timer < 10seconds)
    {
        recv();
        timer = 0seconds;
    }
    send("timeout")

        return 0;
}