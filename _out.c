#include <stdio.h>

int main() {
    unsigned int ptr = 0;
    unsigned char mem[30000] = {0};

    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 1;
    mem[ptr] += 4;
    ptr += 3;
    mem[ptr] = 0;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr += 2;
    mem[ptr] = 0;
    ptr -= 2;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 2;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr -= 2;
    }

    ptr += 2;

    while (mem[ptr]) {
        ptr -= 2;
        mem[ptr] += 1;
        ptr += 2;
        mem[ptr] -= 1;
    }

    ptr -= 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 2;
        mem[ptr] += 1;
        ptr -= 2;
    }

    ptr += 5;
    mem[ptr] = 0;
    ptr -= 8;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 2;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr -= 2;
    }

    ptr += 2;

    while (mem[ptr]) {
        ptr -= 2;
        mem[ptr] += 1;
        ptr += 2;
        mem[ptr] -= 1;
    }

    ptr -= 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 8;
        mem[ptr] += 1;
        ptr -= 8;
    }

    ptr += 8;
    mem[ptr] += 1;
    ptr -= 3;
    mem[ptr] += 1;
    ptr += 2;
    mem[ptr] += 1;

    while (mem[ptr]) {
        ptr += 1;
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 4;
            mem[ptr] += 1;
            ptr -= 5;
        }

        mem[ptr] += 1;
        ptr += 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] = 0;
        }

        ptr -= 1;

        while (mem[ptr]) {
            ptr += 2;
            mem[ptr] = 0;
            ptr -= 2;
            mem[ptr] = 0;
        }

        ptr += 5;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 5;
            mem[ptr] += 1;
            ptr += 5;
        }

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        mem[ptr] += 1;
        ptr += 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] = 0;
        }

        ptr -= 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] = 0;
            ptr += 1;
            mem[ptr] = 0;
        }

        ptr += 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr -= 3;
    }

    ptr -= 2;
    mem[ptr] = 0;
    ptr += 3;

    while (mem[ptr]) {
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
        mem[ptr] = 0;
    }

    ptr -= 3;

    while (mem[ptr]) {
        mem[ptr] = 0;
        ptr -= 2;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 5;
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

        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 1;
        mem[ptr] += 6;
        ptr += 3;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr += 2;
        mem[ptr] = 0;
        ptr -= 11;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 11;
            mem[ptr] += 1;
            ptr -= 11;
        }

        ptr += 11;

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
        ptr -= 2;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 5;
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

        ptr -= 6;
        mem[ptr] = 0;
        ptr += 3;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
        }

        mem[ptr] = 0;
        ptr -= 2;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 5;
        mem[ptr] = 0;
        ptr -= 8;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 8;
            mem[ptr] += 1;
            ptr -= 8;
        }

        ptr += 8;
        mem[ptr] += 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 2;
        mem[ptr] += 1;

        while (mem[ptr]) {
            ptr += 1;
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] -= 1;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] += 1;
                ptr += 4;
                mem[ptr] += 1;
                ptr -= 5;
            }

            mem[ptr] += 1;
            ptr += 1;

            while (mem[ptr]) {
                ptr -= 1;
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] = 0;
            }

            ptr -= 1;

            while (mem[ptr]) {
                ptr += 2;
                mem[ptr] = 0;
                ptr -= 2;
                mem[ptr] = 0;
            }

            ptr += 5;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 5;
                mem[ptr] += 1;
                ptr += 5;
            }

            ptr -= 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] += 1;
                ptr += 1;
                mem[ptr] += 1;
                ptr -= 2;
            }

            mem[ptr] += 1;
            ptr += 1;

            while (mem[ptr]) {
                ptr -= 1;
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] = 0;
            }

            ptr -= 1;

            while (mem[ptr]) {
                ptr -= 1;
                mem[ptr] = 0;
                ptr += 1;
                mem[ptr] = 0;
            }

            ptr += 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 2;
                mem[ptr] += 1;
                ptr += 2;
            }

            ptr -= 3;
        }

        ptr -= 2;
        mem[ptr] = 0;
        ptr += 3;

        while (mem[ptr]) {
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
            mem[ptr] = 0;
        }

        ptr -= 3;
    }

    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 4;
    mem[ptr] = 0;
    ptr += 3;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
    }

    mem[ptr] = 0;
    ptr -= 2;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 2;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr -= 2;
    }

    ptr += 2;

    while (mem[ptr]) {
        ptr -= 2;
        mem[ptr] += 1;
        ptr += 2;
        mem[ptr] -= 1;
    }

    ptr -= 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 2;
        mem[ptr] += 1;
        ptr -= 2;
    }

    ptr += 5;
    mem[ptr] = 0;
    ptr -= 8;
    mem[ptr] = 0;
    ptr += 1;
    mem[ptr] = 0;
    ptr -= 2;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr += 1;
        mem[ptr] += 1;
        ptr -= 2;
    }

    ptr += 2;

    while (mem[ptr]) {
        ptr -= 2;
        mem[ptr] += 1;
        ptr += 2;
        mem[ptr] -= 1;
    }

    ptr -= 1;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr += 8;
        mem[ptr] += 1;
        ptr -= 8;
    }

    ptr += 8;
    mem[ptr] += 1;
    ptr -= 3;
    mem[ptr] += 1;
    ptr += 2;
    mem[ptr] += 1;

    while (mem[ptr]) {
        ptr += 1;
        mem[ptr] -= 1;
        ptr -= 3;
        mem[ptr] -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 4;
            mem[ptr] += 1;
            ptr -= 5;
        }

        mem[ptr] += 1;
        ptr += 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] = 0;
        }

        ptr -= 1;

        while (mem[ptr]) {
            ptr += 2;
            mem[ptr] = 0;
            ptr -= 2;
            mem[ptr] = 0;
        }

        ptr += 5;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 5;
            mem[ptr] += 1;
            ptr += 5;
        }

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        mem[ptr] += 1;
        ptr += 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] = 0;
        }

        ptr -= 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] = 0;
            ptr += 1;
            mem[ptr] = 0;
        }

        ptr += 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr -= 3;
    }

    ptr -= 2;
    mem[ptr] = 0;
    ptr += 3;

    while (mem[ptr]) {
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 3;
        mem[ptr] = 0;
    }

    ptr -= 3;

    while (mem[ptr]) {
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 1;
        mem[ptr] += 3;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 1;
        mem[ptr] += 8;
        ptr += 6;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 1;
        mem[ptr] += 7;
        ptr += 3;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr += 2;
        mem[ptr] = 0;
        ptr -= 14;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 14;
            mem[ptr] += 1;
            ptr -= 14;
        }

        ptr += 14;

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

            ptr += 3;

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

                ptr += 2;

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

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

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
                ptr += 3;
                mem[ptr] += 1;
                ptr -= 3;
            }

            ptr += 1;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 3;
                mem[ptr] += 1;
                ptr -= 3;
            }

            ptr += 2;
            mem[ptr] -= 1;

            while (mem[ptr]) {

                while (mem[ptr]) {
                    mem[ptr] -= 1;
                    ptr += 3;
                    mem[ptr] += 1;
                    ptr -= 3;
                }

                ptr += 1;

                while (mem[ptr]) {
                    mem[ptr] -= 1;
                    ptr += 3;
                    mem[ptr] += 1;
                    ptr -= 3;
                }

                ptr += 2;
                mem[ptr] -= 1;
            }

        }

        ptr += 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
        }

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
        }

        ptr -= 3;
        printf("%c", mem[ptr]);
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 1;
        printf("%c", mem[ptr]);
        mem[ptr] = 0;
        ptr -= 2;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 5;
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

        ptr -= 6;
        mem[ptr] = 0;
        ptr += 3;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
        }

        mem[ptr] = 0;
        ptr -= 2;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 5;
        mem[ptr] = 0;
        ptr -= 8;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr += 1;
            mem[ptr] += 1;
            ptr -= 2;
        }

        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] += 1;
            ptr += 2;
            mem[ptr] -= 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr += 8;
            mem[ptr] += 1;
            ptr -= 8;
        }

        ptr += 8;
        mem[ptr] += 1;
        ptr -= 3;
        mem[ptr] += 1;
        ptr += 2;
        mem[ptr] += 1;

        while (mem[ptr]) {
            ptr += 1;
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] -= 1;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] += 1;
                ptr += 4;
                mem[ptr] += 1;
                ptr -= 5;
            }

            mem[ptr] += 1;
            ptr += 1;

            while (mem[ptr]) {
                ptr -= 1;
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] = 0;
            }

            ptr -= 1;

            while (mem[ptr]) {
                ptr += 2;
                mem[ptr] = 0;
                ptr -= 2;
                mem[ptr] = 0;
            }

            ptr += 5;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 5;
                mem[ptr] += 1;
                ptr += 5;
            }

            ptr -= 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] += 1;
                ptr += 1;
                mem[ptr] += 1;
                ptr -= 2;
            }

            mem[ptr] += 1;
            ptr += 1;

            while (mem[ptr]) {
                ptr -= 1;
                mem[ptr] -= 1;
                ptr += 1;
                mem[ptr] = 0;
            }

            ptr -= 1;

            while (mem[ptr]) {
                ptr -= 1;
                mem[ptr] = 0;
                ptr += 1;
                mem[ptr] = 0;
            }

            ptr += 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 2;
                mem[ptr] += 1;
                ptr += 2;
            }

            ptr -= 3;
        }

        ptr -= 2;
        mem[ptr] = 0;
        ptr += 3;

        while (mem[ptr]) {
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
            mem[ptr] = 0;
        }

        ptr -= 3;
    }

}
