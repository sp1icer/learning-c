#include <stdio.h>

/*
 * FROM THE SCANF MANUAL PAGE:
 *
 * Originally, the GNU C library supported dynamic allocation for string
       inputs (as a nonstandard extension) via the a character.  (This
       feature is present at least as far back as glibc 2.0.)  Thus, one
       could write the following to have scanf() allocate a buffer for an
       input string, with a pointer to that buffer being returned in *buf:

           char *buf;
           scanf("%as", &buf);

       The use of the letter a for this purpose was problematic, since a is
       also specified by the ISO C standard as a synonym for f (floating-
       point input).  POSIX.1-2008 instead specifies the m modifier for
       assignment allocation (as documented in DESCRIPTION, above).
 *
 */

int main() {
    char *first, *last;

    printf("Please enter your first name: ");
    scanf("%ms", &first);
    printf("Please enter your last name: ");
    scanf("%ms", &last);

    printf("Hello there %s %s!", first, last);
}
