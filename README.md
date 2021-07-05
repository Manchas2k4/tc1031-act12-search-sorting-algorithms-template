![Tec de Monterrey](images/logotecmty.png)
# Act 1.2 - Algoritmos de Búsqueda y Ordenamiento

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
Accede a la siguiente liga: HTTP y acepta la tarea. Esto creará tu repositorio de trabajo. En él, encontrarás los archivos "search.h", "bubble.h", "selection.h", "insertion.h" y "main.cpp", los cuales Deberás modificar para el desarrollo de esta actividad. En el archivo "main.cpp", deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```

Implementa, <span style="text-decoration: underline;">forma individual</span>, una aplicación que lea *n* datos, los ordene e indique la cantidad de comparaciones que realizar de cada uno de los tres algoritmos básicos de ordenamiento (burbuja, selection, inserción), posteriormente deberá leer *q* valores, mostrando la posición donde se encuentra el valor en el arreglo ordenado (-1 en caso de que no se encuentre) y la cantidad de comparaciones que hizo tanto por la búsqueda secuencial como por la búsqueda binaria.

## <span style="color: rgb(26, 99, 169);">**Entrada**</span>
La primera línea contiene un número entero positivo *n* (300 <= *n* <= 500) que indica el número de elementos a leer. A continuación, *n* números enteros enteros. Después vendrá una línea con un valor, *q*, indicando el cantidad de números a buscar y en la siguiente línea los *q* a buscar.

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
La primera línea se desplegará el número de comparaciones que cada algoritmo básico de ordenamiento realizó (burbuja, selection, inserción), separados por espacios.

Después, se imprimirán *q* línea (uno por cada valor a buscar) mostrando la posición, cantidad de comparaciones de la búsqueda secuencial y la cantidad de comparaciones de la búsqueda binaria, separadas por espacios.

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada**</span>
8 <br>
10 4 8 12 20 15 54 18 <br>
4 <br>
20 54 100 12 <br>

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida**</span>
5 5 5<br>
<br>
6 7 3 <br>
7 8 4 <br>
-1 8 4 <br>
3 4 1 <br>

Para probar tu implementación, compila tu programa con el comando:
```
g++ main.cpp -o app
```
Posteriormente, prueba con cada uno de los archivos de entrada de prueba que encontrarás en este repositorio (input1.txt, input2.txt, input3.txt, input4.txt). Los resultados que debes obtener se encuentran en los archivos llamados solution1.txt, solution2.txt, solution3.txt y solution4.txt. Para realizar las pruebas, puedes usar las siguientes líneas de código. Por ejemplo, si queremos probar con el archivo de prueba "input1.txt".
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt solution1.txt
```
Si el segundo comando no tenga ninguna salida, sabrás que los resultados que obtuviste son los esperados.

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **80%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (80%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (60%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (20%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Cuando hayas pasado todas las pruebas, recuerda publicar el código en tu repositorio (*git push*).
