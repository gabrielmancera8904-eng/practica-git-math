#include &lt;stdio.h&gt;
#include &quot;operaciones.h&quot;
int main() {
printf(&quot;--- Calculadora del Equipo ---\n&quot;);
printf(&quot;Suma (5 + 3): %d\n&quot;, sumar(5, 3));
printf(&quot;Resta (5 - 3): %d\n&quot;, restar(5, 3));
printf(&quot;Multiplicacion (5 * 3): %d\n&quot;, multiplicar(5, 3));
return 0;
}