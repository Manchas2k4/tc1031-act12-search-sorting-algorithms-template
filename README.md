# Act 1.2 - Algoritmos de Búsqueda y Ordenamiento

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
Realiza una aplicación en C++ en <span style="text-decoration: underline;">forma individual</span>,  en donde dado **n** numeros de entrada que son almacenados en un **vector<int>** realice las siguientes funciones:

<table style="height: 30px; width: 0%; border-collapse: collapse; border-style: solid;" border="1">
<tbody>
<tr style="height: 24px;">
<td style="width: 33.7684%; height: 30px; background-color: #1963a9;" rowspan="5"><span style="font-size: 18pt; color: #ffffff;">ordenaEnumeracion</span></td>
<td style="width: 12.3888%; height: 10px; background-color: #008bf7;">Descripci&oacute;n</td>
<td style="width: 53.7118%; height: 10px; background-color: #b7dbff;">
<p>Ordene en forma ascendente los datos con el m&eacute;todo de enumeraci&oacute;</p>
</td>
</tr>
<tr style="height: 24px;">
<td style="width: 12.3888%; height: 10px; background-color: #008bf7;">Entrada</td>
<td style="width: 53.7118%; height: 10px; background-color: #b7dbff;">Un vector&lt;int&gt; con los n numeros</td>
</tr>
<tr style="height: 24px;">
<td style="width: 12.3888%; height: 0px; background-color: #008bf7;">Salida</td>
<td style="width: 53.7118%; height: 0px; background-color: #b7dbff;">Nada</td>
</tr>
<tr style="height: 24px;">
<td style="width: 12.3888%; height: 0px; background-color: #008bf7;"><span style="color: #000000;">Precondici&oacute;n</span></td>
<td style="width: 53.7118%; height: 0px; background-color: #b7dbff;"><span style="color: #000000;">El vector&lt;int&gt; debe contener los n n&uacute;meros</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 12.3888%; height: 10px; background-color: #008bf7;"><span style="color: #000000;">Postcondici&oacute;n</span></td>
<td style="width: 53.7118%; height: 10px; background-color: #b7dbff;"><span style="color: #000000;">El vector&lt;int&gt; contendr&aacute; los datos ya ordenados</span></td>
</tr>
</tbody>
</table>
<br />La idea b&aacute;sica del algoritmo basado en el ordenamiento por enumeraci&oacute;n es encontrar la posici&oacute;n final de cada elemento. La posici&oacute;n final de un elemento a<sub>i</sub> se calcula comparando cada elementos con todos los dem&aacute;s elementos, a<sub>j</sub>, del vector y encontrado el n&uacute;mero de elementos que son menores. Si a<sub>i </sub>== a<sub>j</sub>, se considera que a<sub>i</sub> es menor a a<sub>j</sub>, si i &gt; j.<br /><br />

<table style="height: 30px; width: 0%; border-collapse: collapse; border-style: solid;" border="1">
<tbody>
<tr style="height: 24px;">
<td style="width: 30%; height: 30px; background-color: #1963a9;" rowspan="5"><span style="font-size: 18pt; color: #ffffff;">busqTernaria</span></td>
<td style="width: 0px; height: 10px; background-color: #008bf7;">Descripci&oacute;n</td>
<td style="width: 0px; height: 10px; background-color: #b7dbff;">
<p>Usando la b&uacute;squeda ternaria, buscar un dato entero dentro del vector.</p>
</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 10px; background-color: #008bf7;">Entrada</td>
<td style="width: 0px; height: 10px; background-color: #b7dbff;">El vector &lt;int&gt; ordenado y el dato entero que se desea buscar.</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: #008bf7;">Salida</td>
<td style="width: 0px; height: 0px; background-color: #b7dbff;">El &iacute;ndice donde se encuentra el dato o -1 en caso de que no se localice.</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: #008bf7;"><span style="color: #000000;">Precondici&oacute;n</span></td>
<td style="width: 0px; height: 0px; background-color: #b7dbff;"><span style="color: #000000;">El vector&lt;int&gt; debe contener los n n&uacute;meros ordenados en forma ascendente</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 10px; background-color: #008bf7;"><span style="color: #000000;">Postcondici&oacute;n</span></td>
<td style="width: 0px; height: 10px; background-color: #b7dbff;"><span style="color: #000000;">Ninguna</span></td>
</tr>
</tbody>
</table>
<p><span>La gran diferencia est&aacute; en que la b&uacute;squeda binaria en cada paso compara el elemento buscado, <em>key</em>, con el elementos de </span><strong>la posici&oacute;n central</strong><span>, separando todo el intervalo que estamos analizando en&nbsp;</span><strong>dos partes</strong><span>. La b&uacute;squeda ternaria, como sugiere su nombre, separa el intervalo en&nbsp;</span><strong>tres partes</strong><span>, y para ello examina <em>key</em> en los </span><strong>dos puntos de divisi&oacute;n</strong><span> (m<sub>1</sub> = (high-low)/3, m<sub>2</sub> = 2*(high - low)/3).</span></p>
<p><span>Si <em>key</em> no se encuentra en esas posiciones, se verifica: si <em>key</em> &lt; m<sub>1</sub>, la b&uacute;squeda se realiza en el primer tercio, si m<sub>1 </sub>&lt; <em>key</em> &lt; m<sub>2</sub>, se busca en el segundo tercio. y si <em>key</em> &gt; m<sub>2</sub>, la b&uacute;squeda se realiza en el tercer tercio.&nbsp;</span></p>
<p>Todas las funcionalidades deber&aacute;n de estar correctamente alineadas y documentadas.&nbsp; Recuerda que todas las funcionalidades deber&aacute;n pasar exitosamente todas las pruebas. Como parte de la documentaci&oacute;n deber&aacute; incluirse la complejidad de cada una de ellas.</p>

<br>Todas las funcionalidades deberán de estar correctamente alineadas y documentadas.&nbsp; Recuerda que todas las funcionalidades deberán pasar exitosamente todas las pruebas. Como parte de la documentación deberá incluirse la complejidad de cada una de ellas.

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **70%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (70%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (55%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (25%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.
- **10%** - Especifican en cada uno de las funcionalidades **la complejidad computacional** como parte de su documentación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Entrega los archivos correspondientes de la actividad, en el sitio de Github. Coloca la liga del repositorio en Canvas.
