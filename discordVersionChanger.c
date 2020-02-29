#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char version[10] = {};

    system("sudo chmod a+rw /usr/share/discord/resources/build_info.json");
    printf("Enter version of discord you want to change\n");
    scanf("%s",version);
    fp = fopen("/usr/share/discord/resources/build_info.json","w");
    fprintf(fp,"{\n\t\"releaseChannel\": \"stable\",\n\t\"version\":\"%s\"\n}",version);
    fclose(fp);
    system("cat /usr/share/discord/resources/build_info.json ");
    printf("\n");
    

}
