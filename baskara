import java.util.Scanner;
import java.lang.Math;

public class baskara {
	
	public static void main (String[]args) {
		
		Scanner formula=new Scanner(System.in);
		
		float a;
		float b;
		float c;
		float delta;
		float bp;
		float bn;
		double rDelta;
		double deltaZero;
		double x1;
		double x2;
		
		
		
		System.out.println("Informe o valor de A: ");
		a=formula.nextFloat();
		
		if (a<=0){
			System.out.println("Valor de A é menor que zero. Programa Encerrou");
		}
			else{
				
				System.out.println("Informe o valor de B: ");
				b=formula.nextFloat();
				bp=b;
				bn=(b*-1);
		
		        System.out.println("Informe o valor de C: ");
				c=formula.nextFloat();
				
				delta=((b*b)-(4*a*c));
				
				if (delta<0){
					System.out.println("Equacao nao possui raizes. Programa Encerrou");
				}
				else{
					if(delta==0){
						deltaZero=((bn)/(2*a));
						System.out.println("Equacao possui apenas uma raiz real. Valor: " + deltaZero);
					}
						
				
				else{
					
					rDelta=Math.sqrt(delta);
					x1=((bn + rDelta)/(2*a));
					x2=((bn - rDelta)/(2*a));
					System.out.println("Primeira Raiz: " + x1);
					System.out.println("Segunda Raiz: " + x2);
					
					
					
				

				
				}
				
				
				//TEST
				//System.out.println("DELTA TEST:  " + delta);
				//System.out.println("B NEGATIVO:  " + bn);
				//System.out.println("-B + DELTA=:  " + x1);
				
				
				
				
		
		
			}
	}
}
}
	
	
