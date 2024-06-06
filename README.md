# Examen_Final
Como desarrollador de C++ en una empresa, me pidieron crear un modelo de base de datos simple. Pero antes de empezar, investigué exhaustivamente todas las bases de datos existentes y realicé una comparativa para justificar la implementación de un nuevo manejador de base de datos.


![alt text](image.png)


Tras analizar diversas opciones disponibles, encontré que ninguna de las bases de datos existentes cumplía exactamente con los requisitos específicos de nuestra empresa. Por lo tanto, decidí desarrollar un nuevo modelo de base de datos que se adapte perfectamente a nuestras necesidades.

El modelo de base de datos que he diseñado es capaz de almacenar pares de datos compuestos por una fecha y un evento asociado. La fecha se define en el formato AAAA-MM-DD, donde AAAA representa el año, MM el mes y DD el día, todos números enteros. Mientras que el evento se define como una cadena de caracteres imprimibles sin separadores, lo que significa que no puede contener espacios, tabulaciones u otros caracteres similares. Además, en una misma fecha pueden ocurrir múltiples eventos diferentes, y la base de datos debe ser capaz de almacenar todos estos eventos sin problemas.

Para interactuar con nuestra base de datos, se han definido varios comandos que el programa debe entender. Estos comandos incluyen la capacidad de agregar eventos, eliminar eventos específicos o todos los eventos de una fecha, buscar eventos en una fecha específica y mostrar todos los eventos almacenados en la base de datos.

El programa está diseñado para manejar varios errores de entrada, como comandos desconocidos, formatos de fecha incorrectos o valores de mes y día inválidos. En caso de errores de entrada, el programa proporciona mensajes claros al usuario para indicar el problema y finaliza su ejecución.

Después de realizar una exhaustiva comparación de las bases de datos existentes y considerar los requisitos específicos de nuestra empresa, he desarrollado un modelo de base de datos simple en C++ que cumple con todas nuestras necesidades y ofrece una funcionalidad sólida y confiable.


![alt text](image-1.png)