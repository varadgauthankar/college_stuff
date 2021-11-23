package shapes;

public class Circle extends Shape{
	int d2;
	
	Circle(int val1){
		super(val1);
	}

	@Override
	public void area() {
		System.out.print("Area of circle: " + 3.14 * (d1 * d1));
		
	}

}
