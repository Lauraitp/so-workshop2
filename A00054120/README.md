o-workshop2
## Taller 2
Universidad ICESI  
**Curso:** Sistemas Operativos  
**Estudiante:** Laura Isabella Tabares.  
**Tema:** Llamadas al sistema  

## Descripcion:  
Las llamadas del sistema que se hicieron fueron las siguientes: creat, write y read  

### **Función Creat**  
La función crea un archivo y le da permisos de escritura, lectura, etc.

creat ( char name, int permiso )  
-El parámetro name es la cadena de como se llamara el archivo, en mi caso será: "tareaSysCl.txt".  
  
-El parámetro acceso sólo se ha de emplear cuando se incluya la opción S_IRWXU, y es un entero que define los permisos de escritura y lectura.  

  
  
Retorna -1 si existe algún error.
  
### **Función write**  
La función rename se encarga de escribir en el archivo.  
write (int archivo,void buffer, unsigned tamaño_de_la_cadena);  
-El archivo es un descriptor del archivo creado con anterioridad y abirto.
-apuntador al area de memoria donde se va a afectuar la trasferencia.  
-El tamaño de la cadena fue dada por la función strlen(); pero ese tamaño especifica el número de bytes que va a trasferir.  
Retorna -1 en caso de error  

### **Función Read**

se encarga de leer el archivo.

read ( int archivo, void buffer, unsigned bytes );
misma descripción del write.
  
Retorna -1 en caso de error.  
