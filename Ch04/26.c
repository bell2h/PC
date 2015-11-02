#include <stdio.h>

#define MAX_SIZE 30

int gStack[MAX_SIZE];
int gLen, gPos;

// flip gStack from pos to gLen-1
void flip(int pos) {
  int i, tmp;
  int gap = gLen-pos;
  for(i=0; i<gap/2; i++) {
    tmp = gStack[pos+i];
    gStack[pos+i] = gStack[gLen-i-1];
    gStack[gLen-i-1] = tmp;
  }
}

int findBiggest(int*sPos, int*ePos) {
  int i, bigNum = gStack[sPos];
  for(i=(sPos+1); i<(gLen-1); i++) {
    if (gStack[i] > bigNum) {
      *sPos = i;
      bigNum = gStack[i];
    }
  }
  return bigNum;
}

void check() {
  int bigNum, sPos = 0, ePos = gLen-1;
  bigNum = findBiggest(&sPos, &ePos);
  if (sPos == ePos) {
  }
}

int main() {
  int d;
  char str[256];
  gLen = 0;
  while(1) {
    scanf("%d", &d);
    if (d == 0) break;
    gStack[gLen++] = d;
  }
  printf("total len = %d\n", gLen);
  
  check();

  return 0;
}
