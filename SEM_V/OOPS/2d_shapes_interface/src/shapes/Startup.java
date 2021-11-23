package shapes;
import java.util.*;

public class Startup {

	public static void main(String[] args) {
		int choice = 4;
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("ENTER CHOICE\n 1: rectangle\n 2: circle\n 3: square\n Enter: ");
		
		choice = scanner.nextInt();
		
		scanner.close();
		
		Shape s = new Circle(1);
		
		switch(choice) {
		case 1:
			s = new Rectangle(2, 4);
			break;
			
		case 2:
			s = new Circle(2);
			break;
			
		case 3:
			s = new Sqaure(200);
			break;
			
		}
		
		if(choice > 0 & choice < 4)
			s.area();
		else
			System.out.print("WRONG CHOICE");

	}

}
