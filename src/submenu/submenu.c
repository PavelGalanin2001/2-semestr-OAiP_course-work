#include "submenu.h"

void submenu(struct data* array, int length)
{
    clear_console();

    printf("Меню:\n");
    printf("1. Удаление элементов по условию (поле < или > заданного значения)\n");
    printf("2. Сортировка массива по числовому полю (и по строковой)\n");
    printf("3. Вставка нового элемента перед выбраннным элементом\n");
    printf("0. Выйти из меню\n");

    switch(getch())
    {
        case '0':
            menu(array, length);
            break;
        case '1':
            delete_by_condition(array, length);
            break;
        case '2':
            sort_elements(array, length);
            break;
        case '3':
            add_element_before(array, length);
            break;
        default:
            submenu(array, length);
    }
}