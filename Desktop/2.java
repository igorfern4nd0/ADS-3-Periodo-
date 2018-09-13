/*
2. Iremos agora construir uma classe que calcula o valor de um número ao quadrado e ao cubo. Para tal, crie
uma classe que contenha dois métodos. O primeiro método deve receber um número e devolver o seu
quadrado e o segundo método deve receber um número e devolver o seu valor ao cubo. Escolha nomes
para a classe e métodos que facilitem a compreensão de seu funcionamento.
*/

public class Calcular{
	public int Quadrado(int valor){
		return valor * valor;
	}	

	public int Cubo(int valor){
		return Quadrado(valor)*valor;
	}
}