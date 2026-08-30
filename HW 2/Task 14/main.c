#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void log_message(char status[5], char message[300])
{
    FILE *file = fopen("logs.txt", "a");
    time_t current_time;
    struct tm *now;

    time(&current_time);

    now = localtime(&current_time);

    fprintf(file, "%d-%d-%d|%d:%d:%d|%s — %s \n", now->tm_year+1900, now->tm_mon + 1, now->tm_mday, now->tm_hour, now->tm_min, now->tm_sec, status, message);
    fclose(file);
}

void print_logs()
{
    FILE *file = fopen("logs.txt", "r");

    char log[300] = {0};

    while(fgets(log, sizeof(log), file) != NULL)
    {
        printf("%s", log);
    }

    fclose(file);
}

int main()
{
    char action[10] = {0};
    char status[10] = {0};
    char message[300];
    

    while(1)
    {
        printf("Enter action: \n -Create new log: log \n -Quit: - \n");
        if(fgets(action, sizeof(action), stdin) == NULL)
        {
            return 0;
        }
        if(strcmp(action, "-\n") == 0)
        {
            break;
        } else if(strcmp(action, "log\n") == 0)
        {
            printf("\033[H\033[J");
            printf("Set status of log 1 - INFO, 2 - ERROR \n");
            fgets(status, sizeof(status), stdin);
            status[strcspn(status, "\n")] = 0;
            printf("Set log message \n");
            fgets(message, sizeof(message), stdin);
            message[strcspn(message, "\n")] = 0;

            log_message(status, message);
        } else{
            printf("Unknown action");
        }

    }

    print_logs();

    return 0;
}