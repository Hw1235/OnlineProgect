#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int *total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int **total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    // printf("Print total number of shelves: "); // total number of: books shelves
    scanf(" %d", &total_number_of_shelves);

    int total_number_of_queries;
    // printf("total_number_of_queries");
    scanf(" %d", &total_number_of_queries);

    total_number_of_books = (int *)malloc(total_number_of_shelves * sizeof(int));
    total_number_of_pages = (int **)malloc(total_number_of_shelves * sizeof(int *));
    for (int i = 0; i < total_number_of_shelves; i++)
    {
        total_number_of_books[i] = 0;
        total_number_of_pages[i] = (int *)malloc(1100 * sizeof(int));
    }

    while (total_number_of_queries--)
    {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1)
        {
            /*
             * Process the query of first type here.
             */
            int shelf_number, number_of_pages;
            scanf("%d %d", &shelf_number, &number_of_pages);
            *(*(total_number_of_pages + shelf_number) + *(total_number_of_books + shelf_number)) = number_of_pages;
            // total_number_of_pages[shelf_number][total_number_of_books[shelf_number]] = number_of_pages;
            total_number_of_books[shelf_number] += 1;
        }
        else if (type_of_query == 2)
        {
            int shelf_number, number_of_pages;
            scanf("%d %d\n", &shelf_number, &number_of_pages);
            printf("%d\n", *(*(total_number_of_pages + shelf_number) + number_of_pages));
        }
        else
        {
            int shelf_number;
            scanf("%d", &shelf_number);
            printf("%d\n\n", *(total_number_of_books + shelf_number));
        }
    }

    if (total_number_of_books)
    {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++)
    {
        if (*(total_number_of_pages + i))
        {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages)
    {
        free(total_number_of_pages);
    }

    return 0;
}