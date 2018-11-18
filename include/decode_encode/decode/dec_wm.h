#ifndef DEC_WM_H
#define DEC_WM_H

#include "../../model/md1global.h"

void reallocateBytesDecodingWM(char *allocatePassword, const char *unallocatedPassword);
int lookupTableDecodingWM(char *passwordIntegers, const char *allocatedPassword);
void bitUnpackingDecodingWM(const char *packed14BytesPassword, struct WONDERMAIL* mail);
int* flavorText(const struct WONDERMAIL *wm, int pairsIndex, int loversIndex, int parentsIndex);
void flavorTextHead(const struct WONDERMAIL *wm, int headIndicator, int pairsIndex, int loversIndex, int parentsIndex, struct WM_INFO *mailInfo);
void flavorTextBody(const struct WONDERMAIL *wm, int bodyIndicator, int pairsIndex, int loversIndex, int parentsIndex, struct WM_INFO *mailInfo);
void setWMInfo(struct WM_INFO *mailInfo, const struct WONDERMAIL *mail);

#endif /* DEC_WM_H */
