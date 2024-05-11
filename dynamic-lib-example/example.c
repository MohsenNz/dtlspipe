#include <stdlib.h>
#include <stdio.h>
#include "../dtlspipe.h"
#include <string.h>
#include <unistd.h>
#include <signal.h>

int main(void) {
    signal(SIGPIPE, SIG_IGN);

    // Put your psk instead of c65c436e82c6dea356b1a48c34c02d00
    GoString msg = {"-psk dtlspipe -psk c65c436e82c6dea356b1a48c34c02d00 server 0.0.0.0:2815 127.0.0.1:514", 85};

    GoInt id = runDtlspipe(msg);
 
    printf("Server started\n");
    printf("Counting to 10...\n");
    sleep(10);

    stopDtlspipe(id);

    printf("Server stopped\n");
    printf("Counting to 10...\n");
    sleep(10);
 
    return 0;
}
