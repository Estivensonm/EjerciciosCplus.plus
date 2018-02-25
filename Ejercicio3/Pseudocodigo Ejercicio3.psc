Algoritmo Ejercicio3
	Definir sueldo,descuento,sueldoneto Como Real
	Escribir 'Ingrese sueldo'
	Leer sueldo
	Si (sueldo>=1000) Entonces
		descuento <- sueldo*0.10
		Escribir 'Su seuldo es:',descuento
		sueldoneto <- (sueldo-descuento)
		Escribir 'Su sueldo neto es:',sueldoneto
	FinSi
	Si (sueldo>1000 Y sueldo<=2000) Entonces
		descuento <- (sueldo-1000)*0.05
		Escribir 'su descuento es:',descuento
		sueldoneto <- (sueldo-descuento)
		Escribir 'Su sueldo neto es:',sueldoneto
	SiNo
		descuento <- (sueldo-2000)*0.03
		Escribir 'Su descuneto es:',descuento
		sueldoneto <- (sueldo-descuento)
		Escribir 'Su sueldo neto es:',sueldoneto
	FinSi
FinAlgoritmo

