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
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
    mem[ptr] = 0;
    ptr += 3;
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
    mem[ptr] = 1;

    while (mem[ptr]) {
        ptr -= 1;
        mem[ptr] += 10;
        ptr += 1;
        mem[ptr] -= 1;
    }

    ptr -= 1;
    mem[ptr] += 6;
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
        mem[ptr] = 1;
        mem[ptr] += 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 1;
        mem[ptr] += 5;
        ptr += 3;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 1;
        mem[ptr] += 7;
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
        ptr += 3;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 1;
        mem[ptr] += 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 1;
        mem[ptr] += 5;
        ptr += 3;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 1;
        mem[ptr] += 7;
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

        ptr -= 77;
        mem[ptr] = 0;
        ptr += 75;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 75;
            mem[ptr] += 1;
            ptr += 75;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 73;
        mem[ptr] = 0;
        ptr += 72;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 72;
            mem[ptr] += 1;
            ptr += 72;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 70;
        mem[ptr] = 0;
        ptr += 69;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 69;
            mem[ptr] += 1;
            ptr += 69;
        }

        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 77;
        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 74;
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
            mem[ptr] = 0;
            ptr -= 68;
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
                ptr += 68;
                mem[ptr] += 1;
                ptr -= 68;
            }

            ptr += 71;
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

            ptr -= 72;
            mem[ptr] = 0;
            ptr += 69;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 69;
                mem[ptr] += 1;
                ptr += 69;
            }

            mem[ptr] = 0;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 77;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 74;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 78;
            mem[ptr] = 0;
            ptr += 75;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 75;
                mem[ptr] += 1;
                ptr += 75;
            }

            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 77;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 74;
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

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 66;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 66;
            mem[ptr] += 1;
            ptr += 66;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 68;
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
            ptr += 68;
            mem[ptr] += 1;
            ptr -= 68;
        }

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 75;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 75;
            mem[ptr] += 1;
            ptr += 75;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 65;
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
            ptr += 65;
            mem[ptr] += 1;
            ptr -= 65;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 57;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 57;
            mem[ptr] += 1;
            ptr += 57;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 70;
        mem[ptr] = 0;
        ptr += 69;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 69;
            mem[ptr] += 1;
            ptr += 69;
        }

        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 77;
        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 74;
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
            mem[ptr] = 0;
            ptr -= 68;
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
                ptr += 68;
                mem[ptr] += 1;
                ptr -= 68;
            }

            ptr += 71;
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

            ptr -= 72;
            mem[ptr] = 0;
            ptr += 69;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 69;
                mem[ptr] += 1;
                ptr += 69;
            }

            mem[ptr] = 0;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 77;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 74;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 78;
            mem[ptr] = 0;
            ptr += 75;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 75;
                mem[ptr] += 1;
                ptr += 75;
            }

            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 77;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 74;
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

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 66;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 66;
            mem[ptr] += 1;
            ptr += 66;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 68;
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
            ptr += 68;
            mem[ptr] += 1;
            ptr -= 68;
        }

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 75;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 75;
            mem[ptr] += 1;
            ptr += 75;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 65;
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
            ptr += 65;
            mem[ptr] += 1;
            ptr -= 65;
        }

        ptr += 5;
        mem[ptr] = 0;
        ptr += 60;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 60;
            mem[ptr] += 1;
            ptr += 60;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr += 1;
        mem[ptr] = 0;
        ptr -= 70;
        mem[ptr] = 0;
        ptr += 69;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 69;
            mem[ptr] += 1;
            ptr += 69;
        }

        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 77;
        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 74;
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
            mem[ptr] = 0;
            ptr -= 68;
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
                ptr += 68;
                mem[ptr] += 1;
                ptr -= 68;
            }

            ptr += 71;
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

            ptr -= 72;
            mem[ptr] = 0;
            ptr += 69;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 69;
                mem[ptr] += 1;
                ptr += 69;
            }

            mem[ptr] = 0;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 77;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 74;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 78;
            mem[ptr] = 0;
            ptr += 75;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 75;
                mem[ptr] += 1;
                ptr += 75;
            }

            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 77;
            mem[ptr] = 0;
            ptr -= 74;
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
                ptr += 74;
                mem[ptr] += 1;
                ptr -= 74;
            }

            ptr += 74;
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

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 74;
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
            ptr += 74;
            mem[ptr] += 1;
            ptr -= 74;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 66;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 66;
            mem[ptr] += 1;
            ptr += 66;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 68;
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
            ptr += 68;
            mem[ptr] += 1;
            ptr -= 68;
        }

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 75;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 75;
            mem[ptr] += 1;
            ptr += 75;
        }

        mem[ptr] = 0;
        mem[ptr] = 0;
        ptr -= 65;
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
            ptr += 65;
            mem[ptr] += 1;
            ptr -= 65;
        }

        ptr += 2;
        mem[ptr] = 0;
        ptr += 63;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 63;
            mem[ptr] += 1;
            ptr += 63;
        }

        mem[ptr] = 0;
        ptr -= 62;
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
            ptr += 62;
            mem[ptr] += 1;
            ptr -= 62;
        }

        ptr += 62;

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
            ptr -= 65;
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
                ptr += 65;
                mem[ptr] += 1;
                ptr -= 65;
            }

            ptr += 65;

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

        mem[ptr] = 0;
        ptr -= 62;
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
            ptr += 62;
            mem[ptr] += 1;
            ptr -= 62;
        }

        ptr += 65;
        mem[ptr] = 0;
        ptr -= 62;
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
            ptr += 62;
            mem[ptr] += 1;
            ptr -= 62;
        }

        ptr += 62;

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
            ptr -= 62;
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
                ptr += 62;
                mem[ptr] += 1;
                ptr -= 62;
            }

            ptr += 62;

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
        ptr -= 59;
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
            ptr += 59;
            mem[ptr] += 1;
            ptr -= 59;
        }

        ptr += 59;

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
