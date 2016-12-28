#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char* user_name = "root";
    int uid = -1;

    struct passwd *pwd;
    pwd = (struct passwd *)malloc(sizeof(struct passwd *));
    if (pwd == NULL)
    {
        perror("malloc error");
        return -1;
    }

    pwd = getpwnam(user_name);
    if(pwd == NULL)
    {
        printf("Error: user %s does not exist.\n", user_name);
        return -1;
    }
    else
        uid = pwd->pw_uid;

    printf("The user's Id is %d.\n", uid);

    return 0;
}
