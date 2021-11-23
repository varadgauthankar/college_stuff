package shapes;

public class Sqaure extends Shape{

	Sqaure(int val1){
		super.d1 = val1;
	}
	
	@Override
	public void area() {
		System.out.print("Area of Square: " + super.d1 * super.d1);
	}
	
}
