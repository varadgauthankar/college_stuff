package classExtractRefactor;

public class Startup {

	public static void main(String[] args) {
		Circle circle = new Circle(100);
		
		System.out.println(circle.area());
		System.out.println(circle.getColor());
		
		circle.setColor("Red");
		
		System.out.println(circle.getColor());

	}

}
