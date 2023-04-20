#include <stdio.h>
#include <string.h>

#define LIMIT 120

void sieve() {
    int nums[LIMIT] = {0};
    for (int i = 0; i < LIMIT; ++i) {
        if (nums[i] == 0) {
            printf("%d ", i + 2);
            for (int j = 2i + 2; j < LIMIT; j = j + 2) {
                nums[j] = 1;
            }
        }

    }
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort_forNumbers(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        swap(&array[min_idx], &array[i]);
    }
}

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}


void swapforString(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort_forString(char *array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(array[j], array[min_idx]) < 0) {
                min_idx = j;
            }
        }
        swapforString(&array[min_idx], &array[i]);
    }
}

void print_String(char *arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%s ", arr[i]);
    }
}


int main() {

    char *string[] = {"bubble", "goal", "party", "case", "battle", "craft"};
    selectionSort_forString(string, 6);
    print_String(string, 6);


}
