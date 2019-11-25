#ifndef DECODESOS_H
#define DECODESOS_H

#include "../../../data/md1global/md1global.h"

/* DECODING SOS MAIL FUNCTIONS */
int decodeSosMail(const char *sosPassword, struct SosMailInfo *sosMailInfoResult);
int sosMailIsInvalid(const char *password, char *packed34BytesPassword);
void reallocateBytesDecodingSos(const char *unallocatedPassword, char *allocatedPassword);
int lookupTableDecodingSos(const char *allocatedPassword, char *passwordIntegers);
void bitUnpackingDecodingSos(const char *packed14BytesPassword, struct SosMail* mail);
void setSosInfo(struct SosMailInfo *sosInfo, const struct SosMail *mail);

#endif /* DECODESOS_H */
