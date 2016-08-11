#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char cmdGrp[100],cmdUsr[100];
    setuid( 0 );   // you can set it at run time also
    sprintf(cmdGrp, "groupadd -g %s %s",argv[2], argv[4]);
    sprintf(cmdUsr, "useradd -u %s -g %s -d %s %s", argv[1], argv[2], argv[5], argv[3]);
    system( cmdGrp );
    system( cmdUsr );
    return 0;
 }