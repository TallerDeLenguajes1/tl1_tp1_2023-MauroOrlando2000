# tp1
punto 2 del trabajo practico 1
### Las preguntas referidas al archivo .gitignore son:
- ¿Por qué es conveniente incluirlo?
- ¿Cuándo se debe hacer?
- ¿Cómo configuraría el archivo .gitignore?

#### Respuestas
La primera pregunta **"¿Por qué es conveniente incluirlo?"**
A medida que el proyecto se vaya haciendo mas grande, habrá archivos que no querras subir. Esto pued hacerse eventualmente muchos archivos, y agregar linea por linea que archivos no subir es incoveniente. Este archivo permite ignorar los archivos que uno elija poner dentro, haciendo el proceso de evitar ciertos archivos menos tedioso.

La segunda pregunta **¿Cuándo se debe hacer?**
Se debe hacer siempre que quieras algunos archivos los cuales no quieres que pasen por el comando "git status" y de este modo si se sube todo el proyecto, estos archivos quedaran fuera.

La tercera pregunta **¿Cómo configuraría el archivo .gitignore?**
El modo mas común de configurarlo es usando patrones. Por ejemplo, se puede escribir el nombre completo del archivos ignorar en cada linea, o se puede escribir "*.txt" para que de este modo ingore todos los archivos con extensión ".txt" o de la extensión que se desee.