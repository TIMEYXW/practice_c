#include <stdio.h>
#include <string.h>

/**
 * 打印name1的时候，也会输出完整的字符串数据，因为没有遇到终止符
 */
typedef union {
  char name1[4];
  char name2[8];
} data;

typedef struct {
  char name[12];
  char gender[10];
} peroson;

typedef struct {
  char id[10];
  char name[12];
  char gender[10];
} student;

/**
 * 对p或者s进行修改，都可以修改some对象所在的区域
 */ 
typedef union {
  peroson p;
  student s;
} some;

int main(int argc, char const *argv[]) {
  data name;
  strcpy(name.name2, "wangkai");
  printf("1:%s\n", name.name1);
  printf("2:%s\n", name.name2);

  peroson p;
  strcpy(p.name, "wangkai");
  strcpy(p.gender, "male");

  student s;
  strcpy(s.id, "nicai");
  strcpy(s.name, "wangkai1");
  strcpy(s.gender, "male1");

  printf("person:%s\n", p.name);
  printf("person:%s\n", p.gender);

  printf("student:%s\n", s.name);
  printf("student:%s\n", s.gender);
  printf("student:%s\n", s.id);

  some so;
  strcpy(so.p.name, "somename");
  strcpy(so.s.id, "sid");

  return 0;
}
