#include <stdio.h>
#include <time.h>

#define max_size 217
#define max_size_for_string 218

extern char* task(char *str);
extern char* task_random(int length, char* ch_arr);
extern char* task_manual(char* ch_arr);

int main(int argc, char *argv[]) {
    char ch_arr[max_size_for_string];
    ch_arr[max_size] = '\0';
    // String from file to file using command arguments
    if (argc == 3) {
        FILE *input_stream = fopen(argv[1], "r");
        if (input_stream == NULL) {
            printf("Could not open file. Press any key to exit");
            getchar();
            return 0;
        }
        fgets(ch_arr, sizeof(ch_arr), input_stream);
        fclose(input_stream);

        FILE *output_stream = fopen(argv[2], "w");
        fprintf(output_stream, "%s ", task(ch_arr));
        fclose(output_stream);
        return 0;
    }
    // timer with command args
    if (argc == 2) {
        time_t t_start = clock();
        printf("String: %s\n", argv[1]);
        // Timer does not count IO of user
        for (int i = 0; i < 20000000; ++i) {
            task(argv[1]);
        }
        time_t t_end = clock();

        printf("Time: %d ms\n", (int) (difftime(t_end, t_start)) / 1000);
        printf("Result: %s\n", task(argv[1]));
        return 0;
    }
    printf("Random (enter 1) or manual input (enter != 1):");
    int input_type_flag = 0;
    scanf("%d", &input_type_flag);
    if (input_type_flag == 1) {
        int length = 0;
        printf("Input length (0 < length <= %d):", max_size);
        scanf("%d", &length);
        if (length < 1 || length > max_size) {
            printf("Incorrect length = %d\n", length);
            return 0;
        }
        printf("\nResult: %s\n", task_random(length, ch_arr));
        return 0;
    }
    printf("\nResult: %s\n", task_manual(ch_arr));
    return 0;
}