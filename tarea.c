#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 
   pid_t id_proceso_padre,id_proceso_hijo;
 
   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE ====\n");
 
   id_proceso_padre = getppid();
 
   printf("Identificador del proceso padre : %d\n", id_proceso_padre);
 
    id_proceso_hijo = getppid();

   printf("Identificador del proceso hijo : %d\n", id_proceso_hijo);

   return 0;
 
}
