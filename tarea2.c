#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 
   pid_t id_proceso_padre,id_proceso_hijo;
   uid_t id_usuario;
 
   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE ====\n");
 
   id_proceso_padre = getppid();
 
   printf("Identificador del proceso padre : %d\n", id_proceso_padre);
 
    id_proceso_hijo = getppid();

   printf("Identificador del proceso hijo : %d\n", id_proceso_hijo);
   id_usuario=getuid();
   printf("Identificador del Usuario : %d\n", id_usuario);
   

   return 0;
 
}
