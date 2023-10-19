gcc -Wall -Wextra -Werror -c tests.c -o tests.o
gcc -o tests tests.o -L. -lft -g -fsanitize=address
./tests
rm tests tests.o
