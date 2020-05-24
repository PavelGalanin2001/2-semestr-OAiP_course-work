#include "out_average_values_in_line.h"

void out_average_values_in_line(struct reservoirs_of_the_country* array, int left_border, int right_border)
{
    double
        sum_length = 0,
        sum_width = 0,
        sum_depth = 0,
        sum_volume = 0;
    
    for (int i = left_border; i <= right_border; i++)
    {
        sum_length += array[i].length;
        sum_width += array[i].width;
        sum_depth += array[i].depth;
        sum_volume += array[i].volume;
    }

    int length = right_border - left_border + 1;

    print_sep();
    printf("%-4s", "cp.");
    print_sep();
    printf("%-4s ", "");
    printf("%-8s", "");
    print_sep();
    printf("%-8.2lf", sum_length / length);
    print_sep();
    printf("%-8.2lf", sum_width / length);
    print_sep();
    printf("%-8.2lf", sum_depth / length);
    print_sep();
    printf("%-8.2lf", sum_volume / length);
    print_sep();
    printf("%-14s", "");
    print_sep();
    printf("\n");
}