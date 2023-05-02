#include <stdio.h>
#include <unistd.h>

int main (void)
{
   int MyTik=0;
   puts ("Остановка работы на 1145 секунд");
   while (MyTik<1145)
   {
      printf ("Осталось %d сек.\n",1145-MyTik);
      sleep (1);
      MyTik++;
   }
   puts ("Работа возобновлена");

   return 0;
}
