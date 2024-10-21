#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A')); // Expected: 1
    printf("ft_isdigit('9'): %d\n", ft_isdigit('9')); // Expected: 1
    printf("ft_isalnum('a'): %d\n", ft_isalnum('a')); // Expected: 1
    printf("ft_isascii(128): %d\n", ft_isascii(128)); // Expected: 0
    printf("ft_isprint(31): %d\n", ft_isprint(31));   // Expected: 0

    // ft_strlen
    printf("ft_strlen(\"Hello World\"): %zu\n", ft_strlen("Hello World")); // Expected: 11

    // ft_memset, ft_bzero, ft_memcpy, ft_memmove
    char buffer[50] = "Test";
    ft_memset(buffer, '*', 4);
    printf("ft_memset(buffer, '*', 4): %s\n", buffer); // Expected: "****"

    char buffer2[50] = "Testing";
    ft_bzero(buffer2 + 4, 3);
    printf("ft_bzero(buffer2 + 4, 3): %s\n", buffer2); // Expected: "Test"

    char src[50] = "Source";
    ft_memcpy(buffer, src, 6);
    printf("ft_memcpy(buffer, src, 6): %s\n", buffer); // Expected: "Source"

    ft_memmove(buffer + 2, buffer, 4);
    printf("ft_memmove(buffer + 2, buffer, 4): %s\n", buffer); // Expected: "SoSoce"

    // ft_strlcpy, ft_strlcat
    char dst[50] = "Destination";
    ft_strlcpy(dst, "Short", 10);
    printf("ft_strlcpy(dst, \"Short\", 10): %s\n", dst); // Expected: "Short"

    char dst2[50] = "Hello";
    ft_strlcat(dst2, " World", 12);
    printf("ft_strlcat(dst2, \" World\", 12): %s\n", dst2); // Expected: "Hello World"

    // ft_toupper, ft_tolower
    printf("ft_toupper('a'): %c\n", ft_toupper('a')); // Expected: 'A'
    printf("ft_tolower('A'): %c\n", ft_tolower('A')); // Expected: 'a'

    // ft_strchr, ft_strrchr
    printf("ft_strchr(\"Hello World\", 'o'): %s\n", ft_strchr("Hello World", 'o'));   // Expected: "o World"
    printf("ft_strrchr(\"Hello World\", 'o'): %s\n", ft_strrchr("Hello World", 'o')); // Expected: "orld"

    // ft_strncmp
    printf("ft_strncmp(\"abc\", \"abd\", 2): %d\n", ft_strncmp("abc", "abd", 2)); // Expected: 0
    printf("ft_strncmp(\"abc\", \"abd\", 3): %d\n", ft_strncmp("abc", "abd", 3)); // Expected: -1

    // ft_memchr, ft_memcmp
    printf("ft_memchr(\"Hello World\", 'W', 11): %s\n", (char *)ft_memchr("Hello World", 'W', 11)); // Expected: "World"
    printf("ft_memcmp(\"abc\", \"abd\", 2): %d\n", ft_memcmp("abc", "abd", 2));                     // Expected: 0
    printf("ft_memcmp(\"abc\", \"abd\", 3): %d\n", ft_memcmp("abc", "abd", 3));                     // Expected: -1

    // ft_strnstr
    printf("ft_strnstr(\"Hello World\", \"World\", 11): %s\n", ft_strnstr("Hello World", "World", 11)); // Expected: "World"

    // ft_atoi
    printf("ft_atoi(\"123\"): %d\n", ft_atoi("123")); // Expected: 123
    printf("ft_atoi(\"-123\"): %d\n", ft_atoi("-123")); // Expected: -123

    // ft_calloc, ft_strdup
    char *calloc_test = (char *)ft_calloc(10, sizeof(char));
    printf("ft_calloc(10, sizeof(char)): %s\n", calloc_test); // Expected: Empty string
    free(calloc_test);

    char *dup_test = ft_strdup("Duplicate this");
    printf("ft_strdup(\"Duplicate this\"): %s\n", dup_test); // Expected: "Duplicate this"
    free(dup_test);

    // Bonus part: Linked list functions
    t_list *lst = ft_lstnew(ft_strdup("First node"));  // 動的にメモリを確保
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Second node")));  // 動的にメモリを確保
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("New front node")));  // 動的にメモリを確保
    printf("First list node content: %s\n", (char *)lst->content); // Expected: "New front node"
    printf("List size: %d\n", ft_lstsize(lst));                     // Expected: 3

    // Clearing list
    ft_lstclear(&lst, free);  // free関数を渡してcontentのメモリを解放
    printf("List size after clear: %d\n", ft_lstsize(lst));         // Expected: 0

    return 0;
}
