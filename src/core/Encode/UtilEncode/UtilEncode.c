#include "../../../include/decode_encode/encode/encode.h"
#include "../../../include/model/md1global.h"
#include "../../../include/model/md1database.h"

#include <stdio.h>
#include <string.h>


/* see the equivalent in "decode.c" if you are looking for details about how this function works */
void bitUnpackingEncoding(char* unpackedIntegers, const char *packedPassword, int bytesToUnpack)
{
    int cnt = 0, row, col, val;
    int i, j;

    for (i = 0; i < bytesToUnpack; ++i) {

        for (j = 0; j < 8; ++j) {

            row = cnt / 5;
            col = cnt % 5;

            val = (packedPassword[i] >> j) & 1;  /* Obtain the state of a particular bit */
            unpackedIntegers[row] |= (val << col);    /* Set that bit in the pack */

            ++cnt;

        }

    }

}