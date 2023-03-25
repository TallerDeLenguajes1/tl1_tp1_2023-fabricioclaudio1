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

## Ejercicio 2 - Repaso de punteros
3,g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo.  ¿a qué se debe?

Se debe a que la dirección de memoria almacenada por el puntero el la dirección 
de memoria de la variable.

¿Qué obtiene en el punto 4? ¿Es igual a los anteriores?
En el punto 4 obtengo la dirección de memoria en la que está almacenada el puntero 
por lo tanto es diferente a lo obtenido en las anteriores.

¿Por qué?
La dirección de memoria en la que esta almacenada la variable es diferente a la 
dirección de memoria en la que esta almacenada el puntero.
