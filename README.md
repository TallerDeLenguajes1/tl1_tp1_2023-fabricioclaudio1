# Trabajo Práctico N° 1

## Ignorar un archivo en Git usando .gitignore:

1. Crear archivo .gitignore en la raiz del repositorio

2. En este archivo se pueden incluir patrones de archivos o directorios que deben 
   ser ignorados por git, **UNO POR LINEA**.

3. Los patrones de archivo pueden incluir nombre de archivo o directorio, 
   extensiones de archivo, expresiones regulares, entre otros.

Ejemplos:

'*.log': ignora todos los archivos con esa extension

'cache/': ignora todo un directorio

Observación:
Los archivos que ya hayan sido incluidos en el control de versiones 
no serán ignorados por git. Para hacerlo será necesario usar comandos como: 
'git rm' o 'git reset'


