#include <stdio.h>

int main() {
    unsigned int ptr = 0;
    unsigned char mem[30000] = {0};

    ptr += 24;
    mem[ptr] += 8;
    ptr += 4;
    mem[ptr] = 0;
    ptr -= 1;

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

    ptr -= 3;
    mem[ptr] = 0;
    ptr -= 1;

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

        ptr += 1;
        mem[ptr] = 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 6;
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
        ptr -= 9;

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

    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr -= 15;
    mem[ptr] = 0;
    ptr += 24;

    while (mem[ptr]) {
        mem[ptr] -= 1;
        ptr -= 24;
        mem[ptr] += 1;
        ptr += 24;
    }

    ptr -= 23;
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
        ptr += 23;
        mem[ptr] += 1;
        ptr -= 23;
    }

    ptr -= 3;
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
        ptr += 29;
        mem[ptr] += 1;
        ptr -= 29;
    }

    ptr += 29;
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
        ptr += 3;
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
        mem[ptr] += 7;
        ptr -= 26;
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
            ptr += 32;
            mem[ptr] += 1;
            ptr -= 32;
        }

        ptr += 32;

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

        ptr -= 23;
        mem[ptr] = 0;
        ptr += 21;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 21;
            mem[ptr] += 1;
            ptr += 21;
        }

        ptr += 1;
        mem[ptr] = 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 19;
        mem[ptr] = 0;
        ptr += 18;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 18;
            mem[ptr] += 1;
            ptr += 18;
        }

        ptr += 1;
        mem[ptr] = 0;
        ptr -= 16;
        mem[ptr] = 0;
        ptr += 15;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 15;
            mem[ptr] += 1;
            ptr += 15;
        }

        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 23;
        mem[ptr] = 0;
        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 20;
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
        ptr += 1;
        mem[ptr] += 1;
        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] = 0;
        }

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 1;
            mem[ptr] += 1;
            ptr += 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
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

            ptr += 17;
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

            ptr -= 18;
            mem[ptr] = 0;
            ptr += 15;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 15;
                mem[ptr] += 1;
                ptr += 15;
            }

            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 23;
            mem[ptr] = 0;
            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 20;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 24;
            mem[ptr] = 0;
            ptr += 21;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 21;
                mem[ptr] += 1;
                ptr += 21;
            }

            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 23;
            mem[ptr] = 0;
            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 20;
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
            ptr += 1;
            mem[ptr] += 1;
            ptr += 2;

            while (mem[ptr]) {
                ptr -= 2;
                mem[ptr] -= 1;
                ptr += 2;
                mem[ptr] = 0;
            }

            ptr -= 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 1;
                mem[ptr] += 1;
                ptr += 1;
            }

            ptr -= 1;
        }

        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 12;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 12;
            mem[ptr] += 1;
            ptr += 12;
        }

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

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 21;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 21;
            mem[ptr] += 1;
            ptr += 21;
        }

        ptr -= 11;
        mem[ptr] = 0;
        ptr -= 1;

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

        ptr += 8;
        mem[ptr] = 0;
        ptr += 3;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
        }

        ptr += 1;
        mem[ptr] = 0;
        ptr -= 16;
        mem[ptr] = 0;
        ptr += 15;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 15;
            mem[ptr] += 1;
            ptr += 15;
        }

        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 23;
        mem[ptr] = 0;
        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 20;
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
        ptr += 1;
        mem[ptr] += 1;
        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] = 0;
        }

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 1;
            mem[ptr] += 1;
            ptr += 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
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

            ptr += 17;
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

            ptr -= 18;
            mem[ptr] = 0;
            ptr += 15;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 15;
                mem[ptr] += 1;
                ptr += 15;
            }

            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 23;
            mem[ptr] = 0;
            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 20;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 24;
            mem[ptr] = 0;
            ptr += 21;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 21;
                mem[ptr] += 1;
                ptr += 21;
            }

            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 23;
            mem[ptr] = 0;
            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 20;
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
            ptr += 1;
            mem[ptr] += 1;
            ptr += 2;

            while (mem[ptr]) {
                ptr -= 2;
                mem[ptr] -= 1;
                ptr += 2;
                mem[ptr] = 0;
            }

            ptr -= 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 1;
                mem[ptr] += 1;
                ptr += 1;
            }

            ptr -= 1;
        }

        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 12;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 12;
            mem[ptr] += 1;
            ptr += 12;
        }

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

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 21;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 21;
            mem[ptr] += 1;
            ptr += 21;
        }

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

        ptr += 5;
        mem[ptr] = 0;
        ptr += 6;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 6;
            mem[ptr] += 1;
            ptr += 6;
        }

        ptr += 1;
        mem[ptr] = 0;
        ptr -= 16;
        mem[ptr] = 0;
        ptr += 15;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 15;
            mem[ptr] += 1;
            ptr += 15;
        }

        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 23;
        mem[ptr] = 0;
        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 20;
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
        ptr += 1;
        mem[ptr] += 1;
        ptr += 2;

        while (mem[ptr]) {
            ptr -= 2;
            mem[ptr] -= 1;
            ptr += 2;
            mem[ptr] = 0;
        }

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 1;
            mem[ptr] += 1;
            ptr += 1;
        }

        ptr -= 1;

        while (mem[ptr]) {
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

            ptr += 17;
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

            ptr -= 18;
            mem[ptr] = 0;
            ptr += 15;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 15;
                mem[ptr] += 1;
                ptr += 15;
            }

            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 23;
            mem[ptr] = 0;
            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 20;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 24;
            mem[ptr] = 0;
            ptr += 21;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 21;
                mem[ptr] += 1;
                ptr += 21;
            }

            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 23;
            mem[ptr] = 0;
            ptr -= 20;
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
                ptr += 20;
                mem[ptr] += 1;
                ptr -= 20;
            }

            ptr += 20;
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
            ptr += 1;
            mem[ptr] += 1;
            ptr += 2;

            while (mem[ptr]) {
                ptr -= 2;
                mem[ptr] -= 1;
                ptr += 2;
                mem[ptr] = 0;
            }

            ptr -= 2;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 1;
                mem[ptr] += 1;
                ptr += 1;
            }

            ptr -= 1;
        }

        ptr -= 20;
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
            ptr += 20;
            mem[ptr] += 1;
            ptr -= 20;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 12;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 12;
            mem[ptr] += 1;
            ptr += 12;
        }

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

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 21;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 21;
            mem[ptr] += 1;
            ptr += 21;
        }

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

        ptr += 2;
        mem[ptr] = 0;
        ptr += 9;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 9;
            mem[ptr] += 1;
            ptr += 9;
        }

        ptr -= 9;

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
            ptr += 3;
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
            printf("%c", mem[ptr]);
            mem[ptr] = 0;
        }

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

        ptr += 11;
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

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3;
            mem[ptr] += 1;
            ptr += 3;
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
            ptr += 3;
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

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] += 1;
                ptr += 3;
            }

            ptr -= 3;
            printf("%c", mem[ptr]);
            mem[ptr] = 0;
        }

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
        ptr += 3;
        mem[ptr] = 0;
        ptr -= 5;
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
            ptr += 5;
            mem[ptr] += 1;
            ptr -= 5;
        }

        ptr += 5;

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
        ptr -= 23;
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
            ptr += 23;
            mem[ptr] += 1;
            ptr -= 23;
        }

        ptr += 26;
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

        ptr -= 27;
        mem[ptr] = 0;
        ptr += 24;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 24;
            mem[ptr] += 1;
            ptr += 24;
        }

        ptr -= 23;
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
            ptr += 23;
            mem[ptr] += 1;
            ptr -= 23;
        }

        ptr += 26;
        mem[ptr] = 0;
        ptr -= 29;
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
            ptr += 29;
            mem[ptr] += 1;
            ptr -= 29;
        }

        ptr += 29;
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
