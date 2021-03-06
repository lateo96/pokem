#ifndef UTILCORE_H
#define UTILCORE_H

#include "../../data/md1global/md1global.h"

/* DECODING/ENCODING COMMON FUNCTIONS */
int areParents(int pkmnClient, int pkmnTarget);
int arePairs(int pkmnClient, int pkmnTarget);
int areLovers(int pkmnClient, int pkmnTarget);
int canEvolveWithItem(int pkmn, int item);
int isFood(int item);
unsigned int getSpecialJobIndicator(int pkmnClient, int pkmnTarget, int missionType, int trySpecialJobIndicator, int itemToFindDeliver);
int getMailType(const char* password);
int computeDifficulty(int dungeon, int dungeonFloor, int missionType);
int computeMoneyReward(int difficulty, int rewardType);
int computeChecksum(const char* packedPassword, int bytes);
int entryErrorsWonderMail(const struct WonderMail *wm);
int entryErrorsSosMail(const struct SosMail *sos);
void reallocateBytes(const char* unallocatedBytes, const unsigned char newPositions[], int n, char* allocatedBytes);
int mapPasswordByPositionInLookupTable(const char* password, const char* lookupTable, int n, char* newPassword);

int checkPokemon(int pokemon, enum MailType mailType);
int checkDungeon(int dungeon, enum MailType mailType);
int checkFloor(int floor, int dungeon);
int checkItem(int item);
int checkItemExistenceInDungeon(int item, int dungeon);
int checkFriendArea(int friendArea);
int checkMailID(int mailID);

#endif /* UTILCORE_H */
