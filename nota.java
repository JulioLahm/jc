import java.util.Scanner;

public class nota {
	
	public static void main (String[]args) {
		
		Scanner grade=new Scanner(System.in);
		
		float nota1;
		float nota2;
		float media;
		char conceito='x';
		char conceitoa='a';
		char conceitob='b';
		char conceitoc='c';
		char conceitod='d';
		char conceitoe='e';
		
		
		System.out.println("Qual a nota 1?");
		nota1=grade.nextFloat();
		
		System.out.println("Qual a nota 2?");
		nota2=grade.nextFloat();
		
		media=(nota1+nota2)/2;
		
		if (media==0 || media<4.0)
			conceito=conceitoe;
		if (media==4.0 || media<6.0)
			conceito=conceitod;
		if (media==6.0 || media<7.5)
			conceito=conceitoc;
		if (media==7.5 || media<9.0)
			conceito=conceitob;
		if (media==9.0 || media<=10.0)
			conceito=conceitoa;
		
		System.out.println("\n");

		System.out.println("Media: " + media);
		System.out.println("Conceito: " + conceito);
		
		if (conceito=='a' || conceito=='b' || conceito=='c')
			System.out.println("Aluno Aprovado");
		//if (conceito=='c')
			//System.out.println("Aluno Aprovado");
		if (conceito=='d' || conceito=='e')
			System.out.println("Aluno Reprovado");
		
	}
}
		
		
