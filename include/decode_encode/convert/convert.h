#ifndef CONVERT_H
#define CONVERT_H

int SOSMailIsInvalidForConverting(const char *SOSPassword, char *password54Integers);
void convertSOSToAOKMail(char *password54Integers);
void convertAOKToThankYouMail(char *password54Integers, int item);

#endif /* CONVERT_H */
