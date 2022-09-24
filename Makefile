all: matrix_rain

matrix_rain:
		clang -Wall -Wextra -Werror -Wpedantic -Iinc -lncurses -o matrix_rain src/*.c

clean:
		rm -rf matrix_rain

uninstall:
		rm -rf matrix_rain

reinstall:
		make uninstall
		make
