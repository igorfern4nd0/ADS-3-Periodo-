/*
1. Crie uma classe Conversor5 que inclua também a escala Kelvin (K). Esta classe deve conter conversores
entre as três escalas de temperatura (Celsius, Fahrenheit e Kelvin), totalizando seis funções. A relação
entre as três escalas é dada por:
*/
public class Conversor{
	public double CelsiusParaFahrenheit(double temperatura){
		return 9.0 * temperatura / 5.0 * 32.0;
	}

	public double FahrenheitParaCelcius(double temperatura){
		return 5.0 * (temperatura - 32.0) / 9.0;
	}

	public double CelsiusParaKelvin(double temperatura){
		return temperatura + 273.0;
	}

	public double KelvinParaCelsius(double temperatura){
		return temperatura - 273.0;
	}

	public double FahrenheitParaKelvin(double temperatura){
		return ((temperatura - 32.0) / 1.8000) + 273.15; 
	}

	public double KelvinParaFahrenheit(double temperatura){
		return 1.8 * (temperatura - 273.0) + 32.0;
	}
}