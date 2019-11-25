#ifndef CONVERT_H
#define CONVERT_H

/* CONVERTING SOS MAIL FUNCTIONS */
int convertSosMail(const char *SOSPassword, int item, char *resultAOKMail, char *resultThankYouMail);
int sosMailIsInvalidForConverting(const char *SOSPassword, char *password54Integers);
void convertSosToAOkMail(char *password54Integers);
void convertAOkToThankYouMail(char *password54Integers, int item);

#endif /* CONVERT_H */
