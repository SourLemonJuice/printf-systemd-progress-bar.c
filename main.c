/*
  This is free and unencumbered software released into the public domain.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 包含所有可能字符的字符串
char Random_String_List[] = "abcdefghijklmnopqrstuvwxyz";

// 生成指定长度的随机字符串
char *generate_random_string(int str_Long)
{
  char *random_string = malloc(str_Long + 1);

  // 生成随机字符串
  for (int i = 0; i < str_Long; i++) {
    // 生成一个随机数
    int random_index = rand() % (strlen(Random_String_List) - 1);

    // 获取随机字符
    random_string[i] = Random_String_List[random_index];
  }

  // 添加字符串结束符
  random_string[str_Long] = '\0';

  // 返回随机字符串
  return random_string;
}

int main()
{
  // 创建 nanosleep 需要的数据结构
  struct timespec ts;

  // 输出14行信息
  for (int i=1;i<=16;i++)
  {
    // 休眠 340-90 毫秒
    ts.tv_sec = 0;
    ts.tv_nsec = (rand() % (340000000 - 90000000) + 90000000);
    nanosleep(&ts, NULL);

    // 生成一个长度为 3-13 的随机字符串
    int name_String_Long = ( rand() % (13 - 3) + 3 );
    char *random_string = generate_random_string(name_String_Long);

    printf("\033[32m[  OK  ]\033[0m ");
    printf("\033[30mstarting\033[0m ");
    // 打印随机字符串
    printf("%s\n", random_string);
  }

  return 0;
}
