
#include<string.h>
struct animal
{
  char name[10];
  char owner[10];
  int age;
};
int main()
{
  struct animal dog;
  {
    strcpy(dog.name, "Shar");
    strcpy(dog.owner, "Prat");
    dog.age = 3;
  }
  struct animal cat;
  {
    strcpy(cat.name, "Tripat");
    strcpy(cat.owner, "Ash");
    cat.age = 4;
  }
  printf("Dog name: %s\n", dog.name);
  printf("Cat Name: %s\n", cat.name);
}
