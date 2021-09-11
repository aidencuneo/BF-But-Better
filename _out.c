#include <stdio.h>

int main() {
    unsigned int ptr = 0;
    unsigned char mem[30000] = {0};

    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 5;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 2;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] -= 1;
        ptr += 3;
    }

    ptr -= 3;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 2;
    }

    ptr -= 2;

    while (mem[ptr]) {

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr += 4;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
        }

        ptr -= 5;
        mem[ptr] -= 1;

        while (mem[ptr]) {

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr -= 1;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr += 3;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr -= 5;
            mem[ptr] -= 1;
        }

    }

    ptr -= 2;
    mem[ptr] = 0;
    ptr += 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 1;
        mem[ptr] += 1;
        ptr += 1;
    }

    ptr += 3;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
    }

    ptr -= 3;

    while (mem[ptr]) {

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 1;
        }

        ptr += 1;

        while (mem[ptr]) {

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 3;
                mem[ptr] += 1;
                ptr -= 3;
            }

            ptr += 3;
            mem[ptr] -= 1;
        }

    }

    ptr -= 2;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 3;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 2;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr += 2;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
    }

    ptr -= 3;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] -= 1;
        ptr += 3;
    }

    ptr -= 3;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 2;
    }

    ptr -= 2;

    while (mem[ptr]) {

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr += 4;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
        }

        ptr -= 5;
        mem[ptr] -= 1;

        while (mem[ptr]) {

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr -= 1;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr += 3;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr -= 5;
            mem[ptr] -= 1;
        }

    }

    ptr -= 2;
    mem[ptr] = 0;
    ptr += 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 1;
        mem[ptr] += 1;
        ptr += 1;
    }

    ptr += 3;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
    }

    ptr -= 3;

    while (mem[ptr]) {

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 1;
        }

        ptr += 1;

        while (mem[ptr]) {

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 3;
                mem[ptr] += 1;
                ptr -= 3;
            }

            ptr += 3;
            mem[ptr] -= 1;
        }

    }

    ptr -= 2;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr += 2;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
    }

}
