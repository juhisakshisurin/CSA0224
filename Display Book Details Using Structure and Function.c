#include <stdio.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

void displayBookDetails(struct Book b)
{
    printf("\nBook Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);
}

int main()
{
    struct Book b;

    printf("Enter title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter author: ");
    scanf(" %[^\n]", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    displayBookDetails(b);

    return 0;
}
