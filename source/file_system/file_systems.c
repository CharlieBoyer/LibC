/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_2018
** File description:
** File Systems functions for BSQ
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "tools.h"

int fs_open_file(char const *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    if (fd >= 3) {
        return (fd);
    } else {
        error_output("opening failed, filepath may be invalid\n");
        return (fd);
    }
}