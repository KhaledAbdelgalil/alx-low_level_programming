#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
 void segf() {
   printf("exit the code\n");
   exit(1);
 }
uint32_t f1(size_t arg1)
{
    size_t var_ch;

    return ((uint32_t)arg1 ^ 59) & 63;
}

int test(int argc, char **argv){
  char *arg1;
  char *pcVar1;
  uint32_t uVar2;
  int32_t iVar3;
  int64_t iVar4;
  uint32_t uVar5;
  int64_t in_FS_OFFSET;
  char **var_88h;
  uint64_t var_7ch;
  size_t var_70h;
  char *var_68h;
  char *s;
  int64_t var_58h;
  int64_t var_50h;
  int64_t var_48h;
  int64_t var_40h;
  int64_t var_38h;
  int64_t var_30h;
  int64_t var_28h;
  int64_t var_20h;
  int64_t var_18h;
  int64_t canary;
  canary = *(int64_t *)(in_FS_OFFSET + 0x28);
  var_58h = 0x3877445248432d41;
  var_50h = 0x42394530534e6c37;
  var_48h = 0x4d6e706762695432;
  var_40h = 0x74767a5835737956;
  var_38h = 0x2b554c59634a474f;
  var_30h = 0x71786636576a6d34;
  var_28h = 0x723161513346655a;
  var_20h = 0x6b756f494b646850;
  // var_18h._0_1_ = 0;
  //A
  if (argc != 3) {
      segf();
  }
  arg1 = argv[1];
  pcVar1 = argv[2];
  iVar4 = strlen(pcVar1);
  if (iVar4 != 6) {
      segf();
  }
  uVar2 = strlen(arg1);
  iVar3 = 8;//f1((uint64_t)uVar2);

  if (*pcVar1 != *(char *)((int64_t)&var_58h + (int64_t)iVar3)) {
      segf();
  }
  printf("after\n");
  return 1;
}
int main(void) {
      char *input[] = {"pn" ,"julien", "7estte"};//49
  return test(3, input);
  
}
