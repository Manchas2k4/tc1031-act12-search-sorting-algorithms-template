# Act 1.2 - Algoritmos de Búsqueda y Ordenamiento

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
Realiza una aplicación en C++ en <span style="text-decoration: underline;">forma individual</span>. La aplicación deberá leer *n* datos, ordenarlos, indicar la cantidad de comparaciones de cada uno de los tres algoritmos básicos de ordenamiento realizan (burbuja, selection, inserción), posteriormente deberá leer *q* valores, mostrando la posición donde se encuentra el valor en el arreglo ordenado (-1 en caso de que no se encuentre) y la cantidad de comparaciones que hizo tanto por la búsqueda secuencial como por la búsqueda binaria. 

## <span style="color: rgb(26, 99, 169);">**Entrada**</span>
La primera línea contiene un número entero positivo *n* (300 <= *n* <= 500) que indica el número de elementos a leer. A continuación, *n* números enteros enteros. Después vendrá una línea con un valor, *q*, indicando el cantidad de números a buscar y en la siguiente línea los *q* a búscar.

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
La primerá línea se desplegará el número de comparaciones que cada algoritmo básico de ordenamiento realizó (burbuja, selection, inserción), separados por espacios.

Después, se imprimirán *q* línea (uno por cada valor a buscar) mostrando la posición, cantidad de comparaciones de la búsqueda secuencial y la cantidad de comparaciones de la búsqueda binaria, separadas por espacios.

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada**</span>
8
10 4 8 12 20 15 54 18
4
20 54 100 12

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida**</span>
28 18 14

6 7 3
7 8 4
-1 8 4
3 4 1

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **80%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (80%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (60%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (20%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Entrega los archivos correspondientes de la actividad, en el sitio de Github. Coloca la liga del repositorio en Canvas.
