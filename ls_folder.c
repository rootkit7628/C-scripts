#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/types.h>
#include <pwd.h>

int main(int argc, char**argv)
{
    int i;

    DIR *dir;
    
    struct stat st;
    struct passwd *pw;
    struct dirent *ent;
    
    for (i=1 ; i<argc ; i++){
        dir = opendir(argv[i]); /* ouverture du répertoire */
        if (dir==NULL){
            fprintf(stderr, "Erreur d'ouverture du reperoire %s\n", argv[i]);
            fprintf(stderr, "Droits inssufisant ou répertoire incorrect\n");
            exit(1);
        }
        printf("\nRépertoire %s\n", argv[i]);
        printf("USER UID SIZE PATH\n");
        while ((ent=readdir(dir)) != NULL){ /* on parcourt la liste */
            if(strcmp( ent->d_name, "." ) != 0 &&  strcmp( ent->d_name, ".." ) != 0){
                char *fpath = calloc(1, strlen(argv[i]) + strlen(ent->d_name) + 2);
                strcat(fpath, argv[i]);
                strcat(fpath, "/");
                strcat(fpath, ent->d_name);

                if(stat(fpath, &st) != 0){
                    printf("error");
                }
                else{
                    pw = getpwuid(st.st_uid);
                    printf("%s %d %ld %s\n", pw->pw_name, st.st_uid, st.st_size, fpath);
                }
                free(fpath);
            }
        }
    }
    printf("\n");
    return 0;
}