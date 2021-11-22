package shapes;
import java.util.*;

public class startup {

	public static void main(String[] args) {
		int choice = 4;
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("ENTER CHOICE\n 1: rectangle\n 2: circle\n 3: square\n Enter: ");
		
		choice = scanner.nextInt();
		
		shape s = new shape(1);
		
		switch(choice) {
		case 1:
			s = new rectangle(2, 4);
			break;
			
		case 2:
			s = new circle(2);
			break;
			
		case 3:
			s = new sqaure(200);
			break;
		}
		
		s.area();

	}

}
