package shapes;

public class Sqaure extends Shape{
	
	Sqaure(int val1){
		super(val1);	
	}
	
	@Override
	public void area() {
		System.out.print("Area of Square: " + d1 * d1);
	}
	
}
