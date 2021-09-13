#include <stdio.h>

int main() {
    unsigned int ptr = 0;
    unsigned short mem[30000] = {0};

    ptr += 3094;
    mem[ptr] += 102;

    while (mem[ptr]) {
        ptr -= 1;
        mem[ptr] += 10;
        ptr += 1;
        mem[ptr] -= 1;
    }

    ptr -= 1;
    mem[ptr] += 4;
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
        mem[ptr] += 102;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 1;
        mem[ptr] += 3;
        ptr += 3;
        mem[ptr] += 7;
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
        mem[ptr] += 102;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 1;
        mem[ptr] += 3;
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

        ptr -= 2;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3099;
            mem[ptr] += 1;
            ptr += 3099;
        }

        ptr += 1;
        mem[ptr] = 1;

        while (mem[ptr]) {
            ptr -= 1;
            mem[ptr] += 10;
            ptr += 1;
            mem[ptr] -= 1;
        }

        ptr -= 3097;
        mem[ptr] = 0;
        ptr += 3096;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3096;
            mem[ptr] += 1;
            ptr += 3096;
        }

        ptr += 1;
        mem[ptr] = 0;
        ptr -= 3094;
        mem[ptr] = 0;
        ptr += 3093;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3093;
            mem[ptr] += 1;
            ptr += 3093;
        }

        ptr -= 3099;

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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 3101;
        mem[ptr] = 0;
        ptr -= 3099;

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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 3098;
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
            ptr -= 3093;

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
                ptr += 3092;
                mem[ptr] += 1;
                ptr -= 3092;
            }

            ptr += 3095;
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

            ptr -= 3096;
            mem[ptr] = 0;
            ptr += 3093;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3093;
                mem[ptr] += 1;
                ptr += 3093;
            }

            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3101;
            mem[ptr] = 0;
            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3098;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 3102;
            mem[ptr] = 0;
            ptr += 3099;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3099;
                mem[ptr] += 1;
                ptr += 3099;
            }

            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3101;
            mem[ptr] = 0;
            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3098;
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

        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 3090;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3090;
            mem[ptr] += 1;
            ptr += 3090;
        }

        ptr -= 3092;
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
            ptr += 3092;
            mem[ptr] += 1;
            ptr -= 3092;
        }

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 3099;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3099;
            mem[ptr] += 1;
            ptr += 3099;
        }

        ptr -= 3090;

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
            ptr += 3089;
            mem[ptr] += 1;
            ptr -= 3089;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 3081;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3081;
            mem[ptr] += 1;
            ptr += 3081;
        }

        ptr += 1;
        mem[ptr] = 0;
        ptr -= 3094;
        mem[ptr] = 0;
        ptr += 3093;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3093;
            mem[ptr] += 1;
            ptr += 3093;
        }

        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 3101;
        mem[ptr] = 0;
        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 3098;
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
            ptr -= 3092;
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
                ptr += 3092;
                mem[ptr] += 1;
                ptr -= 3092;
            }

            ptr += 3095;
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

            ptr -= 3096;
            mem[ptr] = 0;
            ptr += 3093;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3093;
                mem[ptr] += 1;
                ptr += 3093;
            }

            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3101;
            mem[ptr] = 0;
            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3098;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 3102;
            mem[ptr] = 0;
            ptr += 3099;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3099;
                mem[ptr] += 1;
                ptr += 3099;
            }

            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3101;
            mem[ptr] = 0;
            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3098;
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

        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 3090;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3090;
            mem[ptr] += 1;
            ptr += 3090;
        }

        ptr -= 3092;
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
            ptr += 3092;
            mem[ptr] += 1;
            ptr -= 3092;
        }

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 3099;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3099;
            mem[ptr] += 1;
            ptr += 3099;
        }

        ptr -= 3089;
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
            ptr += 3089;
            mem[ptr] += 1;
            ptr -= 3089;
        }

        ptr += 5;
        mem[ptr] = 0;
        ptr += 3084;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3084;
            mem[ptr] += 1;
            ptr += 3084;
        }

        ptr += 1;
        mem[ptr] = 0;
        ptr -= 3094;
        mem[ptr] = 0;
        ptr += 3093;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3093;
            mem[ptr] += 1;
            ptr += 3093;
        }

        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 3101;
        mem[ptr] = 0;
        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 3098;
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
            ptr -= 3092;
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
                ptr += 3092;
                mem[ptr] += 1;
                ptr -= 3092;
            }

            ptr += 3095;
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

            ptr -= 3096;
            mem[ptr] = 0;
            ptr += 3093;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3093;
                mem[ptr] += 1;
                ptr += 3093;
            }

            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3101;
            mem[ptr] = 0;
            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3098;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3;
                mem[ptr] -= 1;
                ptr += 3;
            }

            ptr -= 3102;
            mem[ptr] = 0;
            ptr += 3099;

            while (mem[ptr]) {
                mem[ptr] -= 1;
                ptr -= 3099;
                mem[ptr] += 1;
                ptr += 3099;
            }

            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3101;
            mem[ptr] = 0;
            ptr -= 3098;
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
                ptr += 3098;
                mem[ptr] += 1;
                ptr -= 3098;
            }

            ptr += 3098;
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

        ptr -= 3098;
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
            ptr += 3098;
            mem[ptr] += 1;
            ptr -= 3098;
        }

        ptr += 8;
        mem[ptr] = 0;
        ptr += 3090;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3090;
            mem[ptr] += 1;
            ptr += 3090;
        }

        ptr -= 3092;
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
            ptr += 3092;
            mem[ptr] += 1;
            ptr -= 3092;
        }

        ptr -= 7;
        mem[ptr] = 0;
        ptr += 3099;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3099;
            mem[ptr] += 1;
            ptr += 3099;
        }

        ptr -= 3089;
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
            ptr += 3089;
            mem[ptr] += 1;
            ptr -= 3089;
        }

        ptr += 2;
        mem[ptr] = 0;
        ptr += 3087;

        while (mem[ptr]) {
            mem[ptr] -= 1;
            ptr -= 3087;
            mem[ptr] += 1;
            ptr += 3087;
        }

        ptr -= 3087;

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
            ptr += 3086;
            mem[ptr] += 1;
            ptr -= 3086;
        }

        ptr += 3086;

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
            ptr -= 3089;
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
                ptr += 3089;
                mem[ptr] += 1;
                ptr -= 3089;
            }

            ptr += 3089;

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

        ptr -= 3086;
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
            ptr += 3086;
            mem[ptr] += 1;
            ptr -= 3086;
        }

        ptr += 3089;
        mem[ptr] = 0;
        ptr -= 3087;

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
            ptr += 3086;
            mem[ptr] += 1;
            ptr -= 3086;
        }

        ptr += 3086;

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
            ptr -= 3086;
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
                ptr += 3086;
                mem[ptr] += 1;
                ptr -= 3086;
            }

            ptr += 3086;

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
        ptr -= 3084;

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
            ptr += 3083;
            mem[ptr] += 1;
            ptr -= 3083;
        }

        ptr += 3083;

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
